#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block directionController/Subscribe
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_directionController_sensor_msgs_LaserScan> Sub_directionController_34;

// For Block directionController/Subscribe1
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_directionController_std_msgs_Float32> Sub_directionController_5;

// For Block directionController/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_13;

// For Block directionController/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_40;

// For Block directionController/Publish10
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_71;

// For Block directionController/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_42;

// For Block directionController/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_44;

// For Block directionController/Publish4
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_46;

// For Block directionController/Publish5
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_56;

// For Block directionController/Publish6
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_58;

// For Block directionController/Publish7
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_60;

// For Block directionController/Publish8
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_62;

// For Block directionController/Publish9
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_directionController_std_msgs_Float64> Pub_directionController_64;

void slros_node_init(int argc, char** argv);

#endif
