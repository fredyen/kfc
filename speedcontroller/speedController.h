//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: speedController.h
//
// Code generated for Simulink model 'speedController'.
//
// Model version                  : 1.13
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Thu Apr 13 13:40:36 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_speedController_h_
#define RTW_HEADER_speedController_h_
#include <stddef.h>
#include <string.h>
#ifndef speedController_COMMON_INCLUDES_
# define speedController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // speedController_COMMON_INCLUDES_

#include "speedController_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_speedController_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  char_T cv0[35];
  char_T cv1[21];
  char_T cv2[20];
  char_T cv3[18];
  char_T cv4[17];
  SL_Bus_speedController_std_msgs_Float64 In1;// '<S15>/In1'
  SL_Bus_speedController_std_msgs_Float64 varargout_2;
  SL_Bus_speedController_std_msgs_Float64 BusAssignment7;// '<Root>/Bus Assignment7' 
  SL_Bus_speedController_std_msgs_Float32 In1_o;// '<S14>/In1'
} B_speedController_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S12>/SourceBlock'
  void *SourceBlock_PWORK_p;           // '<S11>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S10>/SinkBlock'
  void *SinkBlock_PWORK_f;             // '<S9>/SinkBlock'
  void *SinkBlock_PWORK_e;             // '<S8>/SinkBlock'
  void *SinkBlock_PWORK_b;             // '<S7>/SinkBlock'
  void *SinkBlock_PWORK_g;             // '<S6>/SinkBlock'
  void *SinkBlock_PWORK_el;            // '<S5>/SinkBlock'
  void *SinkBlock_PWORK_d;             // '<S4>/SinkBlock'
  void *SinkBlock_PWORK_o;             // '<S3>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S10>/SinkBlock'
  robotics_slros_internal_block_T obj_h;// '<S9>/SinkBlock'
  robotics_slros_internal_block_T obj_k;// '<S8>/SinkBlock'
  robotics_slros_internal_block_T obj_l;// '<S7>/SinkBlock'
  robotics_slros_internal_block_T obj_kw;// '<S6>/SinkBlock'
  robotics_slros_internal_block_T obj_p;// '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj_o;// '<S4>/SinkBlock'
  robotics_slros_internal_block_T obj_kb;// '<S3>/SinkBlock'
  robotics_slros_internal_blo_c_T obj_n;// '<S12>/SourceBlock'
  robotics_slros_internal_blo_c_T obj_g;// '<S11>/SourceBlock'
} DW_speedController_T;

// Parameters (auto storage)
struct P_speedController_T_ {
  SL_Bus_speedController_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                            //  Referenced by: '<S1>/Constant'

  real_T speedTurn_Value;              // Expression: 30
                                       //  Referenced by: '<Root>/speedTurn'

  real_T speedTurn1_Value;             // Expression: 20
                                       //  Referenced by: '<Root>/speedTurn1'

  real_T speedTurn2_Value;             // Expression: 10
                                       //  Referenced by: '<Root>/speedTurn2'

  real_T speedTurn3_Value;             // Expression: 1.0
                                       //  Referenced by: '<Root>/speedTurn3'

  real_T speedTurn4_Value;             // Expression: 4.0
                                       //  Referenced by: '<Root>/speedTurn4'

  real_T speedTurn5_Value;             // Expression: 2.0
                                       //  Referenced by: '<Root>/speedTurn5'

  real_T speedTurn6_Value;             // Expression: 1.0
                                       //  Referenced by: '<Root>/speedTurn6'

  SL_Bus_speedController_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                                  //  Referenced by: '<S15>/Out1'

  SL_Bus_speedController_std_msgs_Float64 Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                           //  Referenced by: '<S12>/Constant'

  SL_Bus_speedController_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                           //  Referenced by: '<S2>/Constant'

  SL_Bus_speedController_std_msgs_Float32 Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                    //  Referenced by: '<S14>/Out1'

  SL_Bus_speedController_std_msgs_Float32 Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                           //  Referenced by: '<S11>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_speedController_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_speedController_T speedController_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_speedController_T speedController_B;

// Block states (auto storage)
extern DW_speedController_T speedController_DW;

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
  extern void speedController_initialize(void);
  extern void speedController_step(void);
  extern void speedController_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_speedController_T *const speedController_M;

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
//  '<Root>' : 'speedController'
//  '<S1>'   : 'speedController/Blank Message'
//  '<S2>'   : 'speedController/Blank Message2'
//  '<S3>'   : 'speedController/Publish'
//  '<S4>'   : 'speedController/Publish1'
//  '<S5>'   : 'speedController/Publish2'
//  '<S6>'   : 'speedController/Publish3'
//  '<S7>'   : 'speedController/Publish4'
//  '<S8>'   : 'speedController/Publish5'
//  '<S9>'   : 'speedController/Publish6'
//  '<S10>'  : 'speedController/Publish7'
//  '<S11>'  : 'speedController/Subscribe1'
//  '<S12>'  : 'speedController/Subscribe2'
//  '<S13>'  : 'speedController/speed_fcn'
//  '<S14>'  : 'speedController/Subscribe1/Enabled Subsystem'
//  '<S15>'  : 'speedController/Subscribe2/Enabled Subsystem'

#endif                                 // RTW_HEADER_speedController_h_

//
// File trailer for generated code.
//
// [EOF]
//
