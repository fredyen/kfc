#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "worldGenerator";

// For Block worldGenerator/Subscribe
SimulinkSubscriber<geometry_msgs::PolygonStamped, SL_Bus_worldGenerator_geometry_msgs_PolygonStamped> Sub_worldGenerator_1;

// For Block worldGenerator/Subscribe1
SimulinkSubscriber<std_msgs::Bool, SL_Bus_worldGenerator_std_msgs_Bool> Sub_worldGenerator_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

