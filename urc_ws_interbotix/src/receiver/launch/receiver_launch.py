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
        #Node(
        #    package ="interbotix_xsarm_control",
          #  executable = "robot_control",
        #    name = "control"  

          #      ),
        
        # PS4 controller - reads raw joystick input
        Node(
            package='joy',
            executable='joy_node',
            name='joy_node',
            namespace='wx250',
            output='screen',
            parameters=[{'dev': '/dev/input/js0'}],
            remappings=[('joy', 'commands/joy_raw')]
        ),

        # Translates joystick input to arm commands
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

        # Executes arm commands from xsarm_joy
        #uses argparse so must use execute process instead of node(basically reading the actual terminal command)
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
    
    