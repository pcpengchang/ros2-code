import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    default_params_file = os.path.join(
        get_package_share_directory("vision"), "config/default.yaml"
    )

    camera_params_file = os.path.join(
        get_package_share_directory("vision"), "config/camera_params.yaml"
    )

    camera_info_url = "package://vision/config/camera_info.yaml"

    return LaunchDescription(
        [
            DeclareLaunchArgument(
                name="camera_params_file", default_value=camera_params_file
            ),
            DeclareLaunchArgument(
                name="camera_info_url", default_value=camera_info_url
            ),
            DeclareLaunchArgument(name="use_sensor_data_qos", default_value="false"),
            DeclareLaunchArgument(
                name="detect_color", default_value="0", description="0-Red 1-Blue"
            ),
            DeclareLaunchArgument(name="debug", default_value="true"),
            DeclareLaunchArgument(
                name="default_params_file", default_value=default_params_file
            ),
            Node(
                package="vision",
                executable="camera_node",
                output="screen",
                emulate_tty=True,
                parameters=[
                    LaunchConfiguration("camera_params_file"),
                    {
                        "debug": LaunchConfiguration("debug"),
                        "camera_info_url": LaunchConfiguration("camera_info_url"),
                        "use_sensor_data_qos": LaunchConfiguration(
                            "use_sensor_data_qos"
                        ),
                    },
                ],
            ),
            Node(
                package="vision",
                executable="detector_node",
                output="screen",
                emulate_tty=True,
                parameters=[
                    LaunchConfiguration("default_params_file"),
                    {
                        "debug": LaunchConfiguration("debug"),
                        "detect_color": LaunchConfiguration("detect_color"),
                    },
                ],
            ),
        ]
    )
