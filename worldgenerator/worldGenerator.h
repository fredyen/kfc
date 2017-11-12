//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: worldGenerator.h
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
#ifndef RTW_HEADER_worldGenerator_h_
#define RTW_HEADER_worldGenerator_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef worldGenerator_COMMON_INCLUDES_
# define worldGenerator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // worldGenerator_COMMON_INCLUDES_

#include "worldGenerator_types.h"
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
  SL_Bus_worldGenerator_geometry_msgs_PolygonStamped In1;// '<S5>/In1'
  SL_Bus_worldGenerator_geometry_msgs_PolygonStamped varargout_2;
  real_T x_test[32];
  real_T y_test[32];
  real_T y_aNext[20];
  real_T x_aNext[20];
  real_T class_next[20];
  char_T b[20];
  real_T counter;
  real_T size;
  real_T tmpX;
  real_T tmpY;
  real_T x_max;
  real_T x_min;
  real_T y_max;
  real_T y_min;
  SL_Bus_worldGenerator_std_msgs_Bool In1_c;// '<S6>/In1'
} B_worldGenerator_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T Memory3_PreviousInput;        // '<Root>/Memory3'
  real_T Memory1_PreviousInput[20];    // '<Root>/Memory1'
  real_T Memory2_PreviousInput[20];    // '<Root>/Memory2'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
  real_T Memory5_PreviousInput[20];    // '<Root>/Memory5'
  void *SourceBlock_PWORK;             // '<S3>/SourceBlock'
  void *SourceBlock_PWORK_f;           // '<S2>/SourceBlock'
  robotics_slros_internal_block_T obj; // '<S3>/SourceBlock'
  robotics_slros_internal_block_T obj_n;// '<S2>/SourceBlock'
  boolean_T eml_autoflush[20];         // '<Root>/Generate_file'
  FILE * eml_openfiles[20];            // '<Root>/Generate_file'
} DW_worldGenerator_T;

// Parameters (auto storage)
struct P_worldGenerator_T_ {
  SL_Bus_worldGenerator_geometry_msgs_PolygonStamped Out1_Y0;// Computed Parameter: Out1_Y0
                                                             //  Referenced by: '<S5>/Out1'

  SL_Bus_worldGenerator_geometry_msgs_PolygonStamped Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S2>/Constant'

  real_T Memory3_X0;                   // Expression: 0
                                       //  Referenced by: '<Root>/Memory3'

  real_T Memory1_X0;                   // Expression: 0
                                       //  Referenced by: '<Root>/Memory1'

  real_T Memory2_X0;                   // Expression: 0
                                       //  Referenced by: '<Root>/Memory2'

  real_T Memory_X0;                    // Expression: 0
                                       //  Referenced by: '<Root>/Memory'

  real_T Memory5_X0;                   // Expression: 0
                                       //  Referenced by: '<Root>/Memory5'

  SL_Bus_worldGenerator_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                //  Referenced by: '<S6>/Out1'

  SL_Bus_worldGenerator_std_msgs_Bool Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                       //  Referenced by: '<S3>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_worldGenerator_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_worldGenerator_T worldGenerator_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_worldGenerator_T worldGenerator_B;

// Block states (auto storage)
extern DW_worldGenerator_T worldGenerator_DW;

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
  extern void worldGenerator_initialize(void);
  extern void worldGenerator_step(void);
  extern void worldGenerator_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_worldGenerator_T *const worldGenerator_M;

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
//  '<Root>' : 'worldGenerator'
//  '<S1>'   : 'worldGenerator/Generate_file'
//  '<S2>'   : 'worldGenerator/Subscribe'
//  '<S3>'   : 'worldGenerator/Subscribe1'
//  '<S4>'   : 'worldGenerator/store_array'
//  '<S5>'   : 'worldGenerator/Subscribe/Enabled Subsystem'
//  '<S6>'   : 'worldGenerator/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_worldGenerator_h_

//
// File trailer for generated code.
//
// [EOF]
//
