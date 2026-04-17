# URC
URC setup guide

Ensure you are running Ubuntu 24.04 and install ROS2 Jazzy(22.02 and ROS Humble may also work).
1. Clone the repo
2. cd ~/URC
3. chmod +777 ./setup.sh
5. ./setup.sh
6. cd urc_ws_interbotix
7. rosdep install --from-paths src --ignore-src -r -y
8. cb(or colcon build without using aliases)
9. launch_urc to launch and control the arm

