//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: objectDetector.h
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
#ifndef RTW_HEADER_objectDetector_h_
#define RTW_HEADER_objectDetector_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef objectDetector_COMMON_INCLUDES_
# define objectDetector_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // objectDetector_COMMON_INCLUDES_

#include "objectDetector_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  real_T xk_data[181];
  real_T yk_data[181];
  SL_Bus_objectDetector_sensor_msgs_LaserScan In1;// '<S8>/In1'
  real_T yc[180];
  real_T xx[180];                      // '<Root>/ 2position'
  real_T angles[180];                  // '<Root>/angles_and_dists'
  real_T dists[180];                   // '<Root>/angles_and_dists'
  SL_Bus_objectDetector_sensor_msgs_LaserScan varargout_2;
  real32_T ranges[180];
  SL_Bus_objectDetector_geometry_msgs_PolygonStamped BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_objectDetector_rosgraph_msgs_Clock In1_n;// '<S9>/In1'
  SL_Bus_objectDetector_rosgraph_msgs_Clock varargout_2_m;
} B_objectDetector_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S5>/SourceBlock'
  void *SourceBlock_PWORK_c;           // '<S4>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S3>/SinkBlock'
  uint32_T seq;                        // '<Root>/box_detection'
  robotics_slros_internal_block_T obj; // '<S3>/SinkBlock'
  robotics_slros_internal_blo_i_T obj_m;// '<S5>/SourceBlock'
  robotics_slros_internal_blo_i_T obj_my;// '<S4>/SourceBlock'
} DW_objectDetector_T;

// Parameters (auto storage)
struct P_objectDetector_T_ {
  SL_Bus_objectDetector_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                                      //  Referenced by: '<S8>/Out1'

  SL_Bus_objectDetector_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                             //  Referenced by: '<S4>/Constant'

  SL_Bus_objectDetector_geometry_msgs_PolygonStamped Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                      //  Referenced by: '<S2>/Constant'

  SL_Bus_objectDetector_rosgraph_msgs_Clock Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                      //  Referenced by: '<S9>/Out1'

  SL_Bus_objectDetector_rosgraph_msgs_Clock Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                             //  Referenced by: '<S5>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_objectDetector_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_objectDetector_T objectDetector_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_objectDetector_T objectDetector_B;

// Block states (auto storage)
extern DW_objectDetector_T objectDetector_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void objectDetector_initialize(void);
  extern void objectDetector_step(void);
  extern void objectDetector_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_objectDetector_T *const objectDetector_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'objectDetector'
//  '<S1>'   : 'objectDetector/ 2position'
//  '<S2>'   : 'objectDetector/Blank Message'
//  '<S3>'   : 'objectDetector/Publish1'
//  '<S4>'   : 'objectDetector/Subscribe'
//  '<S5>'   : 'objectDetector/Subscribe1'
//  '<S6>'   : 'objectDetector/angles_and_dists'
//  '<S7>'   : 'objectDetector/box_detection'
//  '<S8>'   : 'objectDetector/Subscribe/Enabled Subsystem'
//  '<S9>'   : 'objectDetector/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_objectDetector_h_

//
// File trailer for generated code.
//
// [EOF]
//
