#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block speedController/Subscribe1
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_speedController_std_msgs_Float32> Sub_speedController_31;

// For Block speedController/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Sub_speedController_10;

// For Block speedController/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_speedController_geometry_msgs_Twist> Pub_speedController_8;

// For Block speedController/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_37;

// For Block speedController/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_39;

// For Block speedController/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_41;

// For Block speedController/Publish4
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_35;

// For Block speedController/Publish5
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_43;

// For Block speedController/Publish6
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_45;

// For Block speedController/Publish7
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedController_std_msgs_Float64> Pub_speedController_47;

void slros_node_init(int argc, char** argv);

#endif
