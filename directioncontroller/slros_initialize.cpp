#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "directionController";

// For Block directionController/Subscribe
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_directionController_sensor_msgs_LaserScan> Sub_directionController_34;

// For Block directionController/Subscribe1
SimulinkSubscriber<std_msgs::Float32, SL_Bus_directionController_std_msgs_Float32> Sub_directionController_5;

// For Block directionController/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_13;

// For Block directionController/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_40;

// For Block directionController/Publish10
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_71;

// For Block directionController/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_42;

// For Block directionController/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_44;

// For Block directionController/Publish4
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_46;

// For Block directionController/Publish5
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_56;

// For Block directionController/Publish6
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_58;

// For Block directionController/Publish7
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_60;

// For Block directionController/Publish8
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_62;

// For Block directionController/Publish9
SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_64;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

