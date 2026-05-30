Bandit Wargames

Tom Howard Ros2 Tutorial https://tom-howard.github.io/ros2/course/part1/#step-3-download-the-course-repo 

before starting with the commands need to have gazebo and turtlebot3 

sudo apt install ros-humble-gazebo-ros-pkgs
sudo apt update
sudo apt install ros-humble-turtlebot3-simulations
export TURTLEBOT3_MODEL=burger

To avoid typing everytime: (have not done yet)
echo "export TURTLEBOT3_MODEL=burger" >> ~/.bashrc
source ~/.bashrc

sudo apt install ros-humble-turtlebot3-teleop

nodes are represented by ellipses and topics by rectangles
