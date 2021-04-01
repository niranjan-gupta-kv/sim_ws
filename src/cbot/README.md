sudo apt-get install ros-melodic-gazebo-ros-control
sudo apt-get install ros-melodic-ros-controllers*
sudo apt-get install ros-melodic-trac-ik-kinematics-plugin






Cleaning bot:
This contains kinova j2s7s300 arm and volta mobile robot.
To visualize the cbot in rviz without loading the control parameters but just by the cbots description run:
roslaunch cbot_description cbot_display.launch

(Note- to remove respawn change it in cbot_display.launch)

To launch the cbot in gazebo run:
roslaunch cbot_gazebo robot_launch.launch 

