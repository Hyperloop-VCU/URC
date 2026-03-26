from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction, RegisterEventHandler
from launch.substitutions import PathJoinSubstitution, LaunchConfiguration, PythonExpression
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.conditions import IfCondition, UnlessCondition
from launch.actions import ExecuteProcess



def generate_launch_description():
    declared_arguments = []

    agent = ExecuteProcess(
        cmd = ['ros2', 'run', 'micro_ros_agent', 'micro_ros_agent', 'udp4', '--port', '8888'],
        output='screen'
    )

    receiver_node = Node(

        package="receiver",
        executable = "receive",
        name = "receieve"
    )


    return LaunchDescription([agent, receiver_node])
    