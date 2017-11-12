#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>
#include "speedController_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_speedController_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_speedController_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_speedController_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_speedController_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(std_msgs::Float32* msgPtr, SL_Bus_speedController_std_msgs_Float32 const* busPtr);
void convertToBus(SL_Bus_speedController_std_msgs_Float32* busPtr, std_msgs::Float32 const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_speedController_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_speedController_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);


#endif
