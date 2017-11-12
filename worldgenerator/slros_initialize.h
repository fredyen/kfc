#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block worldGenerator/Subscribe
extern SimulinkSubscriber<geometry_msgs::PolygonStamped, SL_Bus_worldGenerator_geometry_msgs_PolygonStamped> Sub_worldGenerator_1;

// For Block worldGenerator/Subscribe1
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_worldGenerator_std_msgs_Bool> Sub_worldGenerator_4;

void slros_node_init(int argc, char** argv);

#endif
