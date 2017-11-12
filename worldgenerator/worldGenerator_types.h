//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: worldGenerator_types.h
//
// Code generated for Simulink model 'worldGenerator'.
//
// Model version                  : 1.38
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Wed Apr  5 16:30:11 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_worldGenerator_types_h_
#define RTW_HEADER_worldGenerator_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_worldGenerator_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_worldGenerator_ros_time_Time Stamp;
} SL_Bus_worldGenerator_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_geometry_msgs_Point32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_geometry_msgs_Point32_

// MsgType=geometry_msgs/Point32
typedef struct {
  real32_T X;
  real32_T Y;
  real32_T Z;
} SL_Bus_worldGenerator_geometry_msgs_Point32;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_geometry_msgs_Polygon_
#define DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_geometry_msgs_Polygon_

// MsgType=geometry_msgs/Polygon
typedef struct {
  // MsgType=geometry_msgs/Point32:IsVarLen=1:VarLenCategory=data:VarLenElem=Points_SL_Info:TruncateAction=warn 
  SL_Bus_worldGenerator_geometry_msgs_Point32 Points[32];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Points
  SL_Bus_ROSVariableLengthArrayInfo Points_SL_Info;
} SL_Bus_worldGenerator_geometry_msgs_Polygon;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_geometry_msgs_PolygonStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_geometry_msgs_PolygonStamped_

// MsgType=geometry_msgs/PolygonStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_worldGenerator_std_msgs_Header Header;

  // MsgType=geometry_msgs/Polygon
  SL_Bus_worldGenerator_geometry_msgs_Polygon Polygon;
} SL_Bus_worldGenerator_geometry_msgs_PolygonStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_worldGenerator_std_msgs_Bool_

// MsgType=std_msgs/Bool
typedef struct {
  boolean_T Data;
} SL_Bus_worldGenerator_std_msgs_Bool;

#endif

// Custom Type definition for MATLAB Function: '<Root>/Generate_file'
#include <stdio.h>
#ifndef struct_tag_sL6LJlPlxhdTxZzXh5NTaQC
#define struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

struct tag_sL6LJlPlxhdTxZzXh5NTaQC
{
  int32_T intNumBits;
};

#endif                                 //struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

#ifndef typedef_sL6LJlPlxhdTxZzXh5NTaQC_world_T
#define typedef_sL6LJlPlxhdTxZzXh5NTaQC_world_T

typedef struct tag_sL6LJlPlxhdTxZzXh5NTaQC sL6LJlPlxhdTxZzXh5NTaQC_world_T;

#endif                                 //typedef_sL6LJlPlxhdTxZzXh5NTaQC_world_T

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

#ifndef typedef_struct_T_worldGenerator_T
#define typedef_struct_T_worldGenerator_T

typedef struct {
  real_T f0[2];
} struct_T_worldGenerator_T;

#endif                                 //typedef_struct_T_worldGenerator_T

#ifndef typedef_struct_T_worldGenerator_h_T
#define typedef_struct_T_worldGenerator_h_T

typedef struct {
  char_T f0[4];
} struct_T_worldGenerator_h_T;

#endif                                 //typedef_struct_T_worldGenerator_h_T

#ifndef typedef_struct_T_worldGenerator_hr_T
#define typedef_struct_T_worldGenerator_hr_T

typedef struct {
  char_T f0[8];
} struct_T_worldGenerator_hr_T;

#endif                                 //typedef_struct_T_worldGenerator_hr_T

#ifndef typedef_struct_T_worldGenerator_hry_T
#define typedef_struct_T_worldGenerator_hry_T

typedef struct {
  char_T f0[7];
} struct_T_worldGenerator_hry_T;

#endif                                 //typedef_struct_T_worldGenerator_hry_T

#ifndef typedef_struct_T_worldGenerator_hryz_T
#define typedef_struct_T_worldGenerator_hryz_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_worldGenerator_hryz_T;

#endif                                 //typedef_struct_T_worldGenerator_hryz_T

// Parameters (auto storage)
typedef struct P_worldGenerator_T_ P_worldGenerator_T;

// Forward declaration for rtModel
typedef struct tag_RTM_worldGenerator_T RT_MODEL_worldGenerator_T;

#endif                                 // RTW_HEADER_worldGenerator_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
