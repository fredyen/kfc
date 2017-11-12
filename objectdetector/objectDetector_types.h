//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: objectDetector_types.h
//
// Code generated for Simulink model 'objectDetector'.
//
// Model version                  : 1.5
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Thu Mar 23 14:55:37 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_objectDetector_types_h_
#define RTW_HEADER_objectDetector_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_objectDetector_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_objectDetector_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_objectDetector_ros_time_Time Stamp;
} SL_Bus_objectDetector_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_Point32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_Point32_

// MsgType=geometry_msgs/Point32
typedef struct {
  real32_T X;
  real32_T Y;
  real32_T Z;
} SL_Bus_objectDetector_geometry_msgs_Point32;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_Polygon_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_Polygon_

// MsgType=geometry_msgs/Polygon
typedef struct {
  // MsgType=geometry_msgs/Point32:IsVarLen=1:VarLenCategory=data:VarLenElem=Points_SL_Info:TruncateAction=warn 
  SL_Bus_objectDetector_geometry_msgs_Point32 Points[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Points
  SL_Bus_ROSVariableLengthArrayInfo Points_SL_Info;
} SL_Bus_objectDetector_geometry_msgs_Polygon;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_PolygonStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_geometry_msgs_PolygonStamped_

// MsgType=geometry_msgs/PolygonStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_objectDetector_std_msgs_Header Header;

  // MsgType=geometry_msgs/Polygon
  SL_Bus_objectDetector_geometry_msgs_Polygon Polygon;
} SL_Bus_objectDetector_geometry_msgs_PolygonStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_sensor_msgs_LaserScan_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_sensor_msgs_LaserScan_

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
  SL_Bus_objectDetector_std_msgs_Header Header;
} SL_Bus_objectDetector_sensor_msgs_LaserScan;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_rosgraph_msgs_Clock_
#define DEFINED_TYPEDEF_FOR_SL_Bus_objectDetector_rosgraph_msgs_Clock_

// MsgType=rosgraph_msgs/Clock
typedef struct {
  // MsgType=ros_time/Time
  SL_Bus_objectDetector_ros_time_Time Clock_;
} SL_Bus_objectDetector_rosgraph_msgs_Clock;

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

#ifndef typedef_robotics_slros_internal_blo_i_T
#define typedef_robotics_slros_internal_blo_i_T

typedef struct tag_saG5948SFTrUFnIbVUb0TZH robotics_slros_internal_blo_i_T;

#endif                                 //typedef_robotics_slros_internal_blo_i_T

#ifndef typedef_struct_T_objectDetector_T
#define typedef_struct_T_objectDetector_T

typedef struct {
  real_T f0[2];
} struct_T_objectDetector_T;

#endif                                 //typedef_struct_T_objectDetector_T

#ifndef typedef_struct_T_objectDetector_i_T
#define typedef_struct_T_objectDetector_i_T

typedef struct {
  char_T f0[4];
} struct_T_objectDetector_i_T;

#endif                                 //typedef_struct_T_objectDetector_i_T

#ifndef typedef_struct_T_objectDetector_ir_T
#define typedef_struct_T_objectDetector_ir_T

typedef struct {
  char_T f0[8];
} struct_T_objectDetector_ir_T;

#endif                                 //typedef_struct_T_objectDetector_ir_T

#ifndef typedef_struct_T_objectDetector_ir5_T
#define typedef_struct_T_objectDetector_ir5_T

typedef struct {
  char_T f0[7];
} struct_T_objectDetector_ir5_T;

#endif                                 //typedef_struct_T_objectDetector_ir5_T

#ifndef typedef_struct_T_objectDetector_ir5g_T
#define typedef_struct_T_objectDetector_ir5g_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_objectDetector_ir5g_T;

#endif                                 //typedef_struct_T_objectDetector_ir5g_T

// Parameters (auto storage)
typedef struct P_objectDetector_T_ P_objectDetector_T;

// Forward declaration for rtModel
typedef struct tag_RTM_objectDetector_T RT_MODEL_objectDetector_T;

#endif                                 // RTW_HEADER_objectDetector_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
