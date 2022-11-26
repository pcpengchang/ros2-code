// ROS
#include <message_filters/subscriber.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/create_timer_ros.h>
#include <tf2_ros/message_filter.h>
#include <tf2_ros/transform_listener.h>

#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

#include <sensor_msgs/msg/joint_state.hpp>

// STD
#include <memory>
#include <string>
#include <vector>

#include "interfaces/msg/armor.hpp"
#include "interfaces/msg/armors.hpp"

using tf2_filter = tf2_ros::MessageFilter<interfaces::msg::Armors>;
class ProcessorNode : public rclcpp::Node
{
public:
    explicit ProcessorNode(const rclcpp::NodeOptions &options) : Node("processor_node", options)
    {
        RCLCPP_INFO(this->get_logger(), "Starting ProcessorNode!");

        // 只缓存最新的一个数据
        joint_state_pub_ = this->create_publisher<sensor_msgs::msg::JointState>(
             "/joint_states", rclcpp::QoS(rclcpp::KeepLast(1)));

        receive_thread_ = std::thread(&ProcessorNode::receiveData, this);

        tf2_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
        auto timer_interface = std::make_shared<tf2_ros::CreateTimerROS>(
            this->get_node_base_interface(), this->get_node_timers_interface());
        tf2_buffer_->setCreateTimerInterface(timer_interface);

        tf2_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf2_buffer_);

        armors_sub_.subscribe(this, "/detector/armors", rmw_qos_profile_sensor_data);
        target_frame_ = this->declare_parameter("target_frame", "shooter_link");
        tf2_filter_ = std::make_shared<tf2_filter>(
            armors_sub_, *tf2_buffer_, target_frame_, 10, this->get_node_logging_interface(),
            this->get_node_clock_interface(), std::chrono::duration<int>(1));

        tf2_filter_->registerCallback(&ProcessorNode::callback, this);
    }

private:
    void callback(const interfaces::msg::Armors::SharedPtr armors_msg)
    {

        RCLCPP_INFO(this->get_logger(), "ProcessorNode callback!");

        // Tranform armor position from image frame to world coordinate
        for (auto &armor : armors_msg->armors)
        {
            // target_frame_子集坐标系下的点
            geometry_msgs::msg::PointStamped ps;
            ps.header = armors_msg->header;
            ps.point = armor.position;
            // 防止由于缓存接收延迟而导致坐标转换失败
            try
            {
                armor.position = tf2_buffer_->transform(ps, target_frame_).point;
            }
            catch (const tf2::ExtrapolationException &ex)
            {
                RCLCPP_ERROR(get_logger(), "Error while transforming %s", ex.what());
                return;
            }
        }
    }

    void receiveData()
    {
        while (rclcpp::ok())
        {
            try
            {
                // sensor_msgs::msg::JointState joint_state;
                // joint_state.header.stamp = this->now();
                // joint_state.name.emplace_back("pitch_joint");
                // joint_state.name.emplace_back("yaw_joint");

                // // 弧度制
                // const double angle = 10 * M_PI / 180;
                // joint_state.position.emplace_back(angle);
                // joint_state.position.emplace_back(angle);
                // joint_state_pub_->publish(joint_state);
            }
            catch (const std::exception &ex)
            {
                RCLCPP_ERROR(get_logger(), "Error while receiving data: %s", ex.what());
            }
        }
    }

    std::string target_frame_;

    // 创建 TF 订阅节点
    std::shared_ptr<tf2_ros::Buffer> tf2_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf2_listener_;

    message_filters::Subscriber<interfaces::msg::Armors> armors_sub_;
    std::shared_ptr<tf2_filter> tf2_filter_;

    // 接收下位机数据
    std::thread receive_thread_;
    // 发布关节
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_;
}
;

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(ProcessorNode)