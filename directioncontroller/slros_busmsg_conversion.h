#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <ros/time.h>
#include <sensor_msgs/LaserScan.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Header.h>
#include "directionController_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ros::Time* msgPtr, SL_Bus_directionController_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_directionController_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(sensor_msgs::LaserScan* msgPtr, SL_Bus_directionController_sensor_msgs_LaserScan const* busPtr);
void convertToBus(SL_Bus_directionController_sensor_msgs_LaserScan* busPtr, sensor_msgs::LaserScan const* msgPtr);

void convertFromBus(std_msgs::Float32* msgPtr, SL_Bus_directionController_std_msgs_Float32 const* busPtr);
void convertToBus(SL_Bus_directionController_std_msgs_Float32* busPtr, std_msgs::Float32 const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_directionController_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_directionController_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_directionController_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_directionController_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
