#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block objectDetector/Subscribe
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_objectDetector_sensor_msgs_LaserScan> Sub_objectDetector_4;

// For Block objectDetector/Subscribe1
extern SimulinkSubscriber<rosgraph_msgs::Clock, SL_Bus_objectDetector_rosgraph_msgs_Clock> Sub_objectDetector_19;

// For Block objectDetector/Publish1
extern SimulinkPublisher<geometry_msgs::PolygonStamped, SL_Bus_objectDetector_geometry_msgs_PolygonStamped> Pub_objectDetector_16;

void slros_node_init(int argc, char** argv);

#endif
