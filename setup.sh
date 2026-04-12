cat << 'EOF' >> ~/.bashrc

# URC ROS aliases
alias cb='colcon build && source /opt/ros/jazzy/setup.bash && source ~/URC/urc_ws_interbotix/install/setup.bash'
alias cbs='colcon build --packages-select'
alias urc='cd ~/URC/urc_ws_interbotix && source /opt/ros/jazzy/setup.bash && source install/setup.bash'
alias source_urc=
alias launch_arm='ros2 launch interbotix_xsarm_control xsarm_control.launch.py robot_model:=wx250'
alias launch_urc='ros2 launch receiver receiver_launch.py'
EOF

source ~/.bashrc
echo "URC setup complete"