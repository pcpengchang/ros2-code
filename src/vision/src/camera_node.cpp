#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

// ROS
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/synchronizer.h>

#include <camera_info_manager/camera_info_manager.hpp>
#include <image_transport/image_transport.hpp>
#include <image_transport/publisher.hpp>
#include <image_transport/subscriber_filter.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/image.hpp>

// C++ system
#include <memory>
#include <string>
#include <thread>
#include <vector>

// 多传感器同步
using SyncPolicy = message_filters::sync_policies::ApproximateTime<sensor_msgs::msg::Image, sensor_msgs::msg::Image>;
using ColorDepthSync = message_filters::Synchronizer<SyncPolicy>;

class CameraNode : public rclcpp::Node
{
public:
    explicit CameraNode(const rclcpp::NodeOptions &options) : Node("camera_node", options)
    {
        RCLCPP_INFO(this->get_logger(), "Starting CameraNode!");

        // rqt_image_view can't subscribe image msg with sensor_data QoS
        // https://github.com/ros-visualization/rqt/issues/187
        bool use_sensor_data_qos = this->declare_parameter("use_sensor_data_qos", false);
        auto qos = use_sensor_data_qos ? rmw_qos_profile_sensor_data : rmw_qos_profile_default;

        // 两种发布方式
        camera_pub_ = image_transport::create_camera_publisher(this, "image_raw", qos);
        // result_image_pub_ = this->create_publisher<sensor_msgs::msg::Image>("/image_raw", 10);

        camera_name_ = this->declare_parameter("camera_name", "mv_camera");
        camera_info_manager_ = std::make_unique<camera_info_manager::CameraInfoManager>(this, camera_name_);
        auto camera_info_url = this->declare_parameter("camera_info_url", "package://vision/config/camera_info.yaml");

        if (camera_info_manager_->validateURL(camera_info_url))
        {
            camera_info_manager_->loadCameraInfo(camera_info_url);
            camera_info_msg_ = camera_info_manager_->getCameraInfo();
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "Invalid camera info URL: %s", camera_info_url.c_str());
        }

        params_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&CameraNode::parametersCallback, this, std::placeholders::_1));

        static int index = 0;
        while (true)
        {
            cap.open(index++);
            if (cap.isOpened())
            {
                RCLCPP_INFO(this->get_logger(), "Capture is opened!");
                break;
            }
        }

        capture_thread_ =
            std::thread{[this]() -> void
                        {
                            // ros_img_->header.frame_id = "camera_optical_frame";
                            // ros_img_->encoding = "bgr8";

                            while (rclcpp::ok())
                            {
                                // RCLCPP_INFO(this->get_logger(), "pub image");
                                try
                                {
                                    cap >> image;
                                    if (!image.empty())
                                    {
                                        // 利用cv_bridge作为中间桥梁将 sensor::msgs::Image 和 cv::Mat 作了相互转换，这里依旧存在拷贝
                                        ros_img_ = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image).toImageMsg();
                                        ros_img_->header.frame_id = "camera_optical_frame";
                                        camera_info_msg_.header.stamp = ros_img_->header.stamp = this->now();

                                        camera_pub_.publish(*ros_img_, camera_info_msg_);

                                        // result_image_pub_->publish(*ros_img_);
                                        // cv::imshow("Sample", image);
                                    }
                                    else
                                    {
                                        RCLCPP_WARN(this->get_logger(), "empty image");
                                    }
                                }
                                catch (cv_bridge::Exception &e)
                                {
                                    RCLCPP_ERROR(this->get_logger(), ros_img_->encoding.c_str());
                                }

                                // cv::waitKey(1);
                            }
                        }};
    }

    rcl_interfaces::msg::SetParametersResult parametersCallback(const std::vector<rclcpp::Parameter> &parameters)
    {
        RCLCPP_WARN(this->get_logger(), "parametersCallback!");
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;
        for (const auto &param : parameters)
        {
            if (param.get_name() == "rgb_gain.r")
            {
                std::cout << "rgb_gain.r = " << param.as_int() << std::endl;
                RCLCPP_INFO(this->get_logger(), "rgb_gain.r");
            }
        }
        return result;
    }

    ~CameraNode() override
    {
        if (capture_thread_.joinable())
        {
            capture_thread_.join();
        }

        RCLCPP_INFO(this->get_logger(), "Camera node destroyed!");
    }

private:
    cv::VideoCapture cap;
    cv::Mat image;

    std::string camera_name_;
    sensor_msgs::msg::CameraInfo camera_info_msg_;
    std::unique_ptr<camera_info_manager::CameraInfoManager> camera_info_manager_;

    sensor_msgs::msg::Image::SharedPtr ros_img_;

    // 两种发布方式
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr result_image_pub_;
    image_transport::CameraPublisher camera_pub_;
    OnSetParametersCallbackHandle::SharedPtr params_callback_handle_;

    std::thread capture_thread_;
};
#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(CameraNode)