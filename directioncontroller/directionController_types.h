//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: directionController_types.h
//
// Code generated for Simulink model 'directionController'.
//
// Model version                  : 1.22
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Thu Apr 13 13:49:37 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_directionController_types_h_
#define RTW_HEADER_directionController_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_directionController_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_directionController_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_directionController_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_directionController_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_directionController_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_directionController_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_directionController_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_directionController_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_directionController_ros_time_Time Stamp;
} SL_Bus_directionController_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_directionController_sensor_msgs_LaserScan_
#define DEFINED_TYPEDEF_FOR_SL_Bus_directionController_sensor_msgs_LaserScan_

// MsgType=sensor_msgs/LaserScan
typedef struct {
  real32_T AngleMin;
  real32_T AngleMax;
  real32_T AngleIncrement;
  real32_T TimeIncrement;
  real32_T ScanTime;
  real32_T RangeMin;
  real32_T RangeMax;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Ranges_SL_Info:TruncateAction=warn 
  real32_T Ranges[180];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Ranges
  SL_Bus_ROSVariableLengthArrayInfo Ranges_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Intensities_SL_Info:TruncateAction=warn 
  real32_T Intensities[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Intensities
  SL_Bus_ROSVariableLengthArrayInfo Intensities_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_directionController_std_msgs_Header Header;
} SL_Bus_directionController_sensor_msgs_LaserScan;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_directionController_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_directionController_std_msgs_Float32_

// MsgType=std_msgs/Float32
typedef struct {
  real32_T Data;
} SL_Bus_directionController_std_msgs_Float32;

#endif

#ifndef struct_tag_saG5948SFTrUFnIbVUb0TZH
#define struct_tag_saG5948SFTrUFnIbVUb0TZH

struct tag_saG5948SFTrUFnIbVUb0TZH
{
  int32_T isInitialized;
};

#endif                                 //struct_tag_saG5948SFTrUFnIbVUb0TZH

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct tag_saG5948SFTrUFnIbVUb0TZH robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef struct_tag_saG5948SFTrUFnIbVUb0TZH
#define struct_tag_saG5948SFTrUFnIbVUb0TZH

struct tag_saG5948SFTrUFnIbVUb0TZH
{
  int32_T isInitialized;
};

#endif                                 //struct_tag_saG5948SFTrUFnIbVUb0TZH

#ifndef typedef_robotics_slros_internal_blo_f_T
#define typedef_robotics_slros_internal_blo_f_T

typedef struct tag_saG5948SFTrUFnIbVUb0TZH robotics_slros_internal_blo_f_T;

#endif                                 //typedef_robotics_slros_internal_blo_f_T

#ifndef typedef_struct_T_directionController_T
#define typedef_struct_T_directionController_T

typedef struct {
  real_T f0[2];
} struct_T_directionController_T;

#endif                                 //typedef_struct_T_directionController_T

#ifndef typedef_struct_T_directionControlle_f_T
#define typedef_struct_T_directionControlle_f_T

typedef struct {
  char_T f0[4];
} struct_T_directionControlle_f_T;

#endif                                 //typedef_struct_T_directionControlle_f_T

#ifndef typedef_struct_T_directionControll_f0_T
#define typedef_struct_T_directionControll_f0_T

typedef struct {
  char_T f0[8];
} struct_T_directionControll_f0_T;

#endif                                 //typedef_struct_T_directionControll_f0_T

#ifndef typedef_struct_T_directionControl_f04_T
#define typedef_struct_T_directionControl_f04_T

typedef struct {
  char_T f0[7];
} struct_T_directionControl_f04_T;

#endif                                 //typedef_struct_T_directionControl_f04_T

#ifndef typedef_struct_T_directionContro_f04g_T
#define typedef_struct_T_directionContro_f04g_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_directionContro_f04g_T;

#endif                                 //typedef_struct_T_directionContro_f04g_T

// Parameters (auto storage)
typedef struct P_directionController_T_ P_directionController_T;

// Forward declaration for rtModel
typedef struct tag_RTM_directionController_T RT_MODEL_directionController_T;

#endif                                 // RTW_HEADER_directionController_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
