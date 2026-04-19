from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    return LaunchDescription([

        # Launch Rviz with arm description
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                FindPackageShare('interbotix_xsarm_descriptions'),
                '/launch/xsarm_description.launch.py'
            ]),
            launch_arguments={'robot_model': 'wx250'}.items()
        ),

        # Fake SDK - pretends to be xs_sdk for simulation
        Node(
            package='receiver',
            executable='fake_sdk',
            name='fake_sdk',
            namespace='wx250',
            output='screen'
        ),

        # Your IMU receiver node
        Node(
            package='receiver',
            executable='receive',
            name='receive',
            output='screen'
        ),

        # xsarm_joy translates Joy to ArmJoy
        Node(
            package='interbotix_xsarm_joy',
            executable='xsarm_joy',
            name='xsarm_joy',
            namespace='wx250',
            output='screen',
            parameters=[{
                'threshold': 0.75,
                'controller': 'ps4'
            }]
        ),

        # xsarm_robot.py executes the ArmJoy commands
        ExecuteProcess(
            cmd=[
                'ros2', 'run',
                'interbotix_xsarm_joy',
                'xsarm_robot.py',
                '--robot_model', 'wx250',
                '--robot_name', 'wx250',
                '--ros-args', '-r', '__ns:=/wx250'
            ],
            output='screen'
        ),
    ])