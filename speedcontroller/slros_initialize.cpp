#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "speedController";

// For Block speedController/Subscribe1
SimulinkSubscriber<std_msgs::Float32, SL_Bus_speedController_std_msgs_Float32> Sub_speedController_31;

// For Block speedController/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Sub_speedController_10;

// For Block speedController/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_speedController_geometry_msgs_Twist> Pub_speedController_8;

// For Block speedController/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_37;

// For Block speedController/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_39;

// For Block speedController/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_41;

// For Block speedController/Publish4
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_35;

// For Block speedController/Publish5
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_43;

// For Block speedController/Publish6
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_45;

// For Block speedController/Publish7
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_47;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

