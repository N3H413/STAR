# 1. Source standard Gazebo hooks
source /usr/share/gazebo/setup.sh

# 2. Dynamically locate and append the TurtleBot3 simulation models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:$(ros2 pkg prefix turtlebot3_gazebo)/share/turtlebot3_gazebo/models

# 3. Explicitly state the model type
export TURTLEBOT3_MODEL=burger

ran this before ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py



# 1. Update your package manager database
sudo apt update

# 2. Install the missing TurtleBot3 mapping packages
sudo apt install ros-humble-turtlebot3-cartographer ros-humble-cartographer-ros

ran this before ros2 launch tuos_tb3_tools slam.launch.py environment:=sim

ros2 launch tuos_tb3_tools slam.launch.py environment:=sim use_sim_time:=true - fixed the robot model issue
