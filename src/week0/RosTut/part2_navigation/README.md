ros2 topic pub -r 10 /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.2, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"

The standard TurtleBot3 simulation packages installed via apt (turtlebot3_gazebo) are hardcoded to listen strictly to standard geometry_msgs/msg/Twist messages on the /cmd_vel topic. They completely ignore TwistStamped messages because they don't know how to look inside the {twist: ...} dictionary wrapper.


Thus need to change TwistStamped to Twist everywhere
