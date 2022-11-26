import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PythonExpression

from launch_ros.actions import ComposableNodeContainer, Node
from launch_ros.descriptions import ComposableNode

import yaml

def generate_launch_description():
    default_params_file = os.path.join(
        get_package_share_directory("vision"), "config", "default.yaml"
    )

    camera_params_file = os.path.join(
        get_package_share_directory("vision"), "config", "camera_params.yaml"
    )

    with open(default_params_file, 'r') as f:
        default_params = yaml.safe_load(f)['/detector_node']['ros__parameters']
    with open(camera_params_file, 'r') as f:
        camera_params = yaml.safe_load(f)['/camera_node']['ros__parameters']

    camera_info_url = "package://vision/config/camera_info.yaml"

    detector_node = ComposableNode(
        package='vision',
        plugin='DetectorNode',
        name='detector_node',
        parameters=[default_params, {'debug': True}],
        extra_arguments=[{'use_intra_process_comms': True}]
    )

    camera_detector_container = ComposableNodeContainer(
        name='camera_detector_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='vision',
                plugin='CameraNode',
                name='camera_node',
                #parameters=[camera_params, {'use_sensor_data_qos': True}],
                parameters=[camera_params, {'use_sensor_data_qos': False, "camera_info_url": camera_info_url}],
                extra_arguments=[{'use_intra_process_comms': True}]
            ),
            detector_node
        ],
        output='screen',
    )

    rviz_config_path = os.path.join(get_package_share_directory(
        'description'), 'launch', 'view_model.rviz')

    robot_description = Command(['xacro ', os.path.join(
        get_package_share_directory('description'), 'urdf', 'gimbal.urdf.xacro')])

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[
            {'robot_description': robot_description}
            #'publish_frequency': 1000.0}
        ]
    )

    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        #parameters=[{'rate': 600}],
    )

    joint_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        #parameters=[{'rate': 600}],
    )

    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_path],
    )

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
            camera_detector_container,
            # Node(
            #     package="vision",
            #     executable="camera_node",
            #     output="screen",
            #     emulate_tty=True,
            #     parameters=[
            #         LaunchConfiguration("camera_params_file"),
            #         {
            #             "debug": LaunchConfiguration("debug"),
            #             "camera_info_url": LaunchConfiguration("camera_info_url"),
            #             "use_sensor_data_qos": LaunchConfiguration(
            #                 "use_sensor_data_qos"
            #             ),
            #         },
            #     ],
            # ), 
            # Node(
            #     package="vision",
            #     executable="detector_node",
            #     output="screen",
            #     emulate_tty=True,
            #     parameters=[
            #         LaunchConfiguration("default_params_file"),
            #         {
            #             "debug": LaunchConfiguration("debug"),
            #             "detect_color": LaunchConfiguration("detect_color"),
            #         },
            #     ],
            # ),
            Node(
                package="vision",
                executable="processor_node",
                output="screen",
                emulate_tty=True
            ),
            robot_state_publisher,
            joint_state_publisher,
            joint_state_publisher_gui,
            rviz2
        ]
    )