
#include <ros/ros.h>
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/Bool.h>

bool e_stop_status = false;

int enable_button;
int stop_button;
int e_stop_button;
int linear_speed_axis;
int angular_speed_axis;

int enable_e_stop;

double max_linear_speed;
double max_angular_speed;

ros::Subscriber joy_subscriber;

ros::Publisher cmd_vel_pub;
ros::Publisher e_stop_pub;

bool dead_man = false;
geometry_msgs::Twist cmd_to_send;

void joy_callback(const sensor_msgs::Joy::ConstPtr& joy);
