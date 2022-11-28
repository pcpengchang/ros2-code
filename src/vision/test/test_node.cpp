#include <gtest/gtest.h>

#include <rclcpp/executors.hpp>
#include <rclcpp/node_options.hpp>
#include <rclcpp/utilities.hpp>

// STD
#include <memory>

#include "vision/detector_node.hpp"

TEST(DetectorNodeTest, NodeStartupTest)
{
    rclcpp::NodeOptions options;
    auto node = std::make_shared<DetectorNode>(options);
    node.reset();
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    rclcpp::init(argc, argv);
    auto result = RUN_ALL_TESTS();
    rclcpp::shutdown();
    return result;
}