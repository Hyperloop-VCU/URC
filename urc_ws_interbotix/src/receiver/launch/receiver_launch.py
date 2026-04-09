from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction, RegisterEventHandler
from launch.substitutions import PathJoinSubstitution, LaunchConfiguration, PythonExpression
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.conditions import IfCondition, UnlessCondition
from launch.actions import ExecuteProcess
from launch_ros.substitutions import FindPackageShare



def generate_launch_description():
    
    return LaunchDescription([
        #run microros Agent
        ExecuteProcess(
            cmd = ['sudo', 'docker', 'run', '--rm', '--net=host', 'microros/micro-ros-agent:jazzy', 'udp4', '--port', '8888'],
            output='screen'
        ),
        #run republisher, not necessary now but can be repurposed for the controller idea
        Node(
            package="receiver",
            executable = "receive",
            name = "receive"
        ),
        #launch robot package
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([FindPackageShare('interbotix_xsarm_control'), '/launch/xsarm_control.launch.py' ]),
            launch_arguments={'robot_model': 'wx250'}.items()
        ),

        #launch actual control program
        Node(
            package ="interbotix_xsarm_control",
            executable = "robot_control",
            name = "control"  

                )

    ])
    
    