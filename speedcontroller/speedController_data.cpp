//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: speedController_data.cpp
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
#include "speedController.h"
#include "speedController_private.h"

// Block parameters (auto storage)
P_speedController_T speedController_P = {
  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },                                   // Computed Parameter: Constant_Value
                                       //  Referenced by: '<S1>/Constant'

  30.0,                                // Expression: 30
                                       //  Referenced by: '<Root>/speedTurn'

  20.0,                                // Expression: 20
                                       //  Referenced by: '<Root>/speedTurn1'

  10.0,                                // Expression: 10
                                       //  Referenced by: '<Root>/speedTurn2'

  1.0,                                 // Expression: 1.0
                                       //  Referenced by: '<Root>/speedTurn3'

  4.0,                                 // Expression: 4.0
                                       //  Referenced by: '<Root>/speedTurn4'

  2.0,                                 // Expression: 2.0
                                       //  Referenced by: '<Root>/speedTurn5'

  1.0,                                 // Expression: 1.0
                                       //  Referenced by: '<Root>/speedTurn6'


  {
    0.0                                // Data
  },                                   // Computed Parameter: Out1_Y0
                                       //  Referenced by: '<S15>/Out1'


  {
    0.0                                // Data
  },                                   // Computed Parameter: Constant_Value_n
                                       //  Referenced by: '<S12>/Constant'


  {
    0.0                                // Data
  },                                   // Computed Parameter: Constant_Value_o
                                       //  Referenced by: '<S2>/Constant'


  {
    0.0F                               // Data
  },                                   // Computed Parameter: Out1_Y0_h
                                       //  Referenced by: '<S14>/Out1'


  {
    0.0F                               // Data
  }                                    // Computed Parameter: Constant_Value_j
                                       //  Referenced by: '<S11>/Constant'

};

//
// File trailer for generated code.
//
// [EOF]
//
