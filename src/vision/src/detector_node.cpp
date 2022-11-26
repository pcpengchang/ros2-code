// ROS
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/synchronizer.h>

#include <ament_index_cpp/get_package_share_directory.hpp>
#include <image_transport/image_transport.hpp>
#include <image_transport/publisher.hpp>
#include <image_transport/subscriber_filter.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

// STD
#include <memory>
#include <string>
#include <vector>

#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

#include "interfaces/msg/armor.hpp"
#include "interfaces/msg/armors.hpp"

using std::placeholders::_1;

const int RED = 0;
const int BLUE = 1;

class DetectorNode : public rclcpp::Node
{
public:
    explicit DetectorNode(const rclcpp::NodeOptions &options) : Node("detector_node", options)
    {
        RCLCPP_INFO(this->get_logger(), "Starting DetectorNode!");

        auto pkg_path = ament_index_cpp::get_package_share_directory("vision");
        RCLCPP_INFO_STREAM(this->get_logger(), "pkg_path: " << pkg_path);
        rcl_interfaces::msg::ParameterDescriptor param_desc;
        param_desc.integer_range.resize(1);
        param_desc.description = "0-RED, 1-BLUE";
        param_desc.integer_range[0].from_value = 0;
        param_desc.integer_range[0].to_value = 1;
        declare_parameter("detect_color", BLUE, param_desc);

        RCLCPP_INFO_STREAM(this->get_logger(), get_parameter("detect_color").as_int());

        declare_parameter("light.max_ratio", 0.55);

        RCLCPP_INFO_STREAM(this->get_logger(), get_parameter("light.max_ratio").as_double());

        transport_ = this->declare_parameter("subscribe_compressed", true) ? "compressed" : "raw";

        armors_pub_ = this->create_publisher<interfaces::msg::Armors>("/detector/armors", rclcpp::SensorDataQoS());

        position_marker_.ns = "armors";
        position_marker_.type = visualization_msgs::msg::Marker::SPHERE_LIST;
        position_marker_.scale.x = position_marker_.scale.y = position_marker_.scale.z = 0.1;
        position_marker_.color.a = 1.0;
        position_marker_.color.r = 1.0;

        text_marker_.ns = "classification";
        text_marker_.action = visualization_msgs::msg::Marker::ADD;
        text_marker_.type = visualization_msgs::msg::Marker::TEXT_VIEW_FACING;
        text_marker_.scale.z = 0.1;
        text_marker_.color.a = 1.0;
        text_marker_.color.r = text_marker_.color.g = text_marker_.color.b = 1.0;
        text_marker_.lifetime = rclcpp::Duration::from_seconds(0.1);

        marker_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>("/detector/marker", 10);

        debug_param_sub_ = std::make_shared<rclcpp::ParameterEventHandler>(this);

        final_img_pub_ = image_transport::create_publisher(this, "/final_img");

        cam_info_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>(
            "/camera_info", rclcpp::SensorDataQoS(),
            [this](sensor_msgs::msg::CameraInfo::ConstSharedPtr camera_info)
            {
                RCLCPP_INFO_STREAM(this->get_logger(), camera_info->k[2]);
                cam_info_sub_.reset();
            });

        img_sub_ = std::make_shared<image_transport::Subscriber>(image_transport::create_subscription(
            this, "/image_raw", std::bind(&DetectorNode::imageCallback, this, _1), transport_,
            rmw_qos_profile_default));

        active_ = this->declare_parameter("active", true);
        active_param_sub_ = std::make_shared<rclcpp::ParameterEventHandler>(this);
        active_cb_handle_ = active_param_sub_->add_parameter_callback("active", [this](const rclcpp::Parameter &p)
                                                                      {
            active_ = p.as_bool();
            if (active_) {
            if (img_sub_ == nullptr) {
                img_sub_ =
                std::make_shared<image_transport::Subscriber>(image_transport::create_subscription(
                    this, "/image_raw", std::bind(&DetectorNode::imageCallback, this, _1), transport_,
                    rmw_qos_profile_default));
            }
            } else if (img_sub_ != nullptr) {
                img_sub_.reset();
            } });
    }

private:
    void imageCallback(const sensor_msgs::msg::Image::ConstSharedPtr &img_msg)
    {
        auto start_time = this->now();
        auto img = cv_bridge::toCvShare(img_msg, "bgr8")->image;

        auto final_time = this->now();
        auto latency = (final_time - start_time).seconds() * 1000;
        // RCLCPP_INFO_STREAM(this->get_logger(), "detectArmors used: " << latency << "ms");
        cv::putText(
            img, "Latency: " + std::to_string(latency) + "ms", cv::Point(10, 30),
            cv::FONT_HERSHEY_SIMPLEX, 1.0, cv::Scalar(0, 255, 0), 2);

        final_img_pub_.publish(cv_bridge::CvImage(img_msg->header, "bgr8", img).toImageMsg());

        armors_msg_.header = position_marker_.header = text_marker_.header = img_msg->header;

        // 清空历史装甲板
        armors_msg_.armors.clear();

        marker_array_.markers.clear();
        position_marker_.points.clear();

        // 假定的相机坐标系内的装甲板坐标
        geometry_msgs::msg::Point p;
        p.x = 0;
        p.y = 0;
        p.z = 2;
        position_marker_.points.emplace_back(p);
        //text_marker_.header.frame_id = "base_link";
        text_marker_.id = 0;
        text_marker_.pose.position = p;
        text_marker_.pose.position.y -= 0.1;
        text_marker_.text = "6";
        marker_array_.markers.emplace_back(text_marker_);

        // 添加操作
        position_marker_.action = visualization_msgs::msg::Marker::ADD;
        //position_marker_.header.frame_id = "base_link";
        position_marker_.id = 0;
        marker_array_.markers.emplace_back(position_marker_);
        marker_pub_->publish(marker_array_);

        interfaces::msg::Armor armor_msg;
        armor_msg.number = 6;
        armor_msg.position = p;
        armors_msg_.armors.emplace_back(armor_msg);

        // 发布装甲板位置和数字
        armors_pub_->publish(armors_msg_);
    }

    std::shared_ptr<image_transport::Subscriber> img_sub_;
    image_transport::Publisher final_img_pub_;

    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr cam_info_sub_;

    std::string transport_;

    bool active_;
    std::shared_ptr<rclcpp::ParameterEventHandler> active_param_sub_;
    std::shared_ptr<rclcpp::ParameterCallbackHandle> active_cb_handle_;

    std::shared_ptr<rclcpp::ParameterEventHandler> debug_param_sub_;
    std::shared_ptr<rclcpp::ParameterCallbackHandle> debug_cb_handle_;

    visualization_msgs::msg::Marker position_marker_;
    visualization_msgs::msg::Marker text_marker_;
    visualization_msgs::msg::MarkerArray marker_array_;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub_;

    interfaces::msg::Armors armors_msg_;
    rclcpp::Publisher<interfaces::msg::Armors>::SharedPtr armors_pub_;
};

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(DetectorNode)