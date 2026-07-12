# yahboom_rosmaster #
![OS](https://img.shields.io/ubuntu/v/ubuntu-wallpapers/noble)
![ROS_2](https://img.shields.io/ros/v/jazzy/rclcpp)

Automatic Addison support for the ROSMASTER X3 mecanum wheel robot robot by Yahboom - ROS 2

![ROSMASTER X3 in Gazebo](https://automaticaddison.com/wp-content/uploads/2024/11/gazebo-800-square-mecanum-controller.gif)

![ROSMASTER X3 in RViz](https://automaticaddison.com/wp-content/uploads/2024/11/rviz-800-square-mecanum-controller.gif)


these fixed my gazebo issue in vid 1 14 min 
# 1. Move to workspace and source your setups
cd ~/Desktop/NEHA/SEDRICA/STAR
source /opt/ros/humble/setup.bash
source install/setup.bash
source /usr/share/gazebo/setup.sh

# 2. Prevent the online download freeze by forcing local models
sudo apt install ros-humble-turtlebot3-gazebo  # Make sure the pkg is there
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:$(ros2 pkg prefix turtlebot3_gazebo)/share/turtlebot3_gazebo/models

# 3. Specify the robot model
export TURTLEBOT3_MODEL=burger

# 4. Launch Nav2 Simulation with simulation time enabled
ros2 launch nav2_bringup tb3_simulation_launch.py headless:=False use_sim_time:=true


made changes to the load_ros2_controllers.launch.py file~/Desktop/NEHA/SEDRICA/STAR/src/yahboom_rosmaster/yahboom_rosmaster_bringup/launch/load_ros2_controllers.launch.py
 this is the file path


cd ~/Desktop/NEHA/SEDRICA/STAR
source install/setup.bash
ros2 run yahboom_rosmaster_system_tests square_mecanum_controller --ros-args -p use_sim_time:=true

this works 

vid5 
made this change to rosmaster_x3_navigation.launch
set default_value to False of 'use_composition' DeclareLaunchArgument

in rosmaster_x3_nav2_default_params.yaml changed base_link to base_footprint

in rosmaster_x3_navigation.sh
    use_composition:=false \
    autostart:=false \

