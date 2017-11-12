//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: directionController.h
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
#ifndef RTW_HEADER_directionController_h_
#define RTW_HEADER_directionController_h_
#include <stddef.h>
#include <string.h>
#ifndef directionController_COMMON_INCLUDES_
# define directionController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // directionController_COMMON_INCLUDES_

#include "directionController_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_directionController_sensor_msgs_LaserScan In1;// '<S19>/In1'
  SL_Bus_directionController_sensor_msgs_LaserScan varargout_2;
  char_T cv0[35];
  char_T cv1[31];
  char_T cv2[25];
  char_T cv3[24];
  char_T cv4[23];
  char_T cv5[22];
  char_T cv6[21];
  real_T counterLeft;
  real_T counterRight;
  SL_Bus_directionController_std_msgs_Float64 BusAssignment9;// '<Root>/Bus Assignment9' 
  SL_Bus_directionController_std_msgs_Float64 BusAssignment8;// '<Root>/Bus Assignment8' 
  SL_Bus_directionController_std_msgs_Float64 BusAssignment7;// '<Root>/Bus Assignment7' 
  SL_Bus_directionController_std_msgs_Float64 BusAssignment6;// '<Root>/Bus Assignment6' 
  SL_Bus_directionController_std_msgs_Float64 BusAssignment5;// '<Root>/Bus Assignment5' 
  SL_Bus_directionController_std_msgs_Float32 In1_a;// '<S20>/In1'
} B_directionController_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T Memory_PreviousInput;         // '<Root>/Memory'
  void *SourceBlock_PWORK;             // '<S17>/SourceBlock'
  void *SourceBlock_PWORK_p;           // '<S16>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S15>/SinkBlock'
  void *SinkBlock_PWORK_b;             // '<S14>/SinkBlock'
  void *SinkBlock_PWORK_n;             // '<S13>/SinkBlock'
  void *SinkBlock_PWORK_e;             // '<S12>/SinkBlock'
  void *SinkBlock_PWORK_ei;            // '<S11>/SinkBlock'
  void *SinkBlock_PWORK_l;             // '<S10>/SinkBlock'
  void *SinkBlock_PWORK_i;             // '<S9>/SinkBlock'
  void *SinkBlock_PWORK_j;             // '<S8>/SinkBlock'
  void *SinkBlock_PWORK_m;             // '<S7>/SinkBlock'
  void *SinkBlock_PWORK_p;             // '<S6>/SinkBlock'
  void *SinkBlock_PWORK_np;            // '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S15>/SinkBlock'
  robotics_slros_internal_block_T obj_a;// '<S14>/SinkBlock'
  robotics_slros_internal_block_T obj_c;// '<S13>/SinkBlock'
  robotics_slros_internal_block_T obj_aj;// '<S12>/SinkBlock'
  robotics_slros_internal_block_T obj_n;// '<S11>/SinkBlock'
  robotics_slros_internal_block_T obj_h;// '<S10>/SinkBlock'
  robotics_slros_internal_block_T obj_g;// '<S9>/SinkBlock'
  robotics_slros_internal_block_T obj_p;// '<S8>/SinkBlock'
  robotics_slros_internal_block_T obj_no;// '<S7>/SinkBlock'
  robotics_slros_internal_block_T obj_hk;// '<S6>/SinkBlock'
  robotics_slros_internal_block_T obj_e;// '<S5>/SinkBlock'
  robotics_slros_internal_blo_f_T obj_l;// '<S17>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_nu;// '<S16>/SourceBlock'
} DW_directionController_T;

// Parameters (auto storage)
struct P_directionController_T_ {
  SL_Bus_directionController_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                                           //  Referenced by: '<S19>/Out1'

  SL_Bus_directionController_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                                  //  Referenced by: '<S16>/Constant'

  real_T Constant_Value_p;             // Expression: 0
                                       //  Referenced by: '<Root>/Constant'

  real_T speedTurn_Value;              // Expression: 79.9
                                       //  Referenced by: '<Root>/speedTurn'

  real_T speedTurn1_Value;             // Expression: 50
                                       //  Referenced by: '<Root>/speedTurn1'

  real_T speedTurn2_Value;             // Expression: 0
                                       //  Referenced by: '<Root>/speedTurn2'

  real_T speedTurn3_Value;             // Expression: 10.0
                                       //  Referenced by: '<Root>/speedTurn3'

  real_T speedTurn4_Value;             // Expression: -10.0
                                       //  Referenced by: '<Root>/speedTurn4'

  real_T speedTurn5_Value;             // Expression: -0.2
                                       //  Referenced by: '<Root>/speedTurn5'

  real_T speedTurn6_Value;             // Expression: 0.2
                                       //  Referenced by: '<Root>/speedTurn6'

  real_T Memory_X0;                    // Expression: 0
                                       //  Referenced by: '<Root>/Memory'

  real_T speedTurn7_Value;             // Expression: 10.0
                                       //  Referenced by: '<Root>/speedTurn7'

  SL_Bus_directionController_std_msgs_Float64 Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                               //  Referenced by: '<S1>/Constant'

  SL_Bus_directionController_std_msgs_Float64 Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                               //  Referenced by: '<S2>/Constant'

  SL_Bus_directionController_std_msgs_Float64 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                               //  Referenced by: '<S3>/Constant'

  SL_Bus_directionController_std_msgs_Float32 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                        //  Referenced by: '<S20>/Out1'

  SL_Bus_directionController_std_msgs_Float32 Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                               //  Referenced by: '<S17>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_directionController_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_directionController_T directionController_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_directionController_T directionController_B;

// Block states (auto storage)
extern DW_directionController_T directionController_DW;

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
  extern void directionController_initialize(void);
  extern void directionController_step(void);
  extern void directionController_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_directionController_T *const directionController_M;

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
//  '<Root>' : 'directionController'
//  '<S1>'   : 'directionController/Blank Message'
//  '<S2>'   : 'directionController/Blank Message1'
//  '<S3>'   : 'directionController/Blank Message2'
//  '<S4>'   : 'directionController/Direciton'
//  '<S5>'   : 'directionController/Publish'
//  '<S6>'   : 'directionController/Publish1'
//  '<S7>'   : 'directionController/Publish10'
//  '<S8>'   : 'directionController/Publish2'
//  '<S9>'   : 'directionController/Publish3'
//  '<S10>'  : 'directionController/Publish4'
//  '<S11>'  : 'directionController/Publish5'
//  '<S12>'  : 'directionController/Publish6'
//  '<S13>'  : 'directionController/Publish7'
//  '<S14>'  : 'directionController/Publish8'
//  '<S15>'  : 'directionController/Publish9'
//  '<S16>'  : 'directionController/Subscribe'
//  '<S17>'  : 'directionController/Subscribe1'
//  '<S18>'  : 'directionController/direction_fcn'
//  '<S19>'  : 'directionController/Subscribe/Enabled Subsystem'
//  '<S20>'  : 'directionController/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_directionController_h_

//
// File trailer for generated code.
//
// [EOF]
//
