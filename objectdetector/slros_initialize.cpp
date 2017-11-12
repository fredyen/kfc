#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "objectDetector";

// For Block objectDetector/Subscribe
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_objectDetector_sensor_msgs_LaserScan> Sub_objectDetector_4;

// For Block objectDetector/Subscribe1
SimulinkSubscriber<rosgraph_msgs::Clock, SL_Bus_objectDetector_rosgraph_msgs_Clock> Sub_objectDetector_19;

// For Block objectDetector/Publish1
SimulinkPublisher<geometry_msgs::PolygonStamped, SL_Bus_objectDetector_geometry_msgs_PolygonStamped> Pub_objectDetector_16;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

