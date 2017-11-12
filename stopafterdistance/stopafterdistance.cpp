//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: stopafterdistance.cpp
//
// Code generated for Simulink model 'stopafterdistance'.
//
// Model version                  : 1.89
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Thu Apr 13 13:37:56 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "stopafterdistance.h"
#include "stopafterdistance_private.h"
#define stopafterdistan_MessageQueueLen (1)

// Block signals (auto storage)
B_stopafterdistance_T stopafterdistance_B;

// Block states (auto storage)
DW_stopafterdistance_T stopafterdistance_DW;

// Real-time model
RT_MODEL_stopafterdistance_T stopafterdistance_M_;
RT_MODEL_stopafterdistance_T *const stopafterdistance_M = &stopafterdistance_M_;
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

// Model step function
void stopafterdistance_step(void)
{
  boolean_T varargout_1;
  SL_Bus_stopafterdistance_std_msgs_Float64 rtb_BusAssignment4;
  real_T tmp;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S7>/In1'
  //   MATLABSystem: '<S5>/SourceBlock'

  varargout_1 = Sub_stopafterdistance_33.getLatestMessage
    (&stopafterdistance_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  if (varargout_1) {
    stopafterdistance_B.In1_o = stopafterdistance_B.BusAssignment;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S6>/In1'
  //   MATLABSystem: '<S4>/SourceBlock'

  varargout_1 = Sub_stopafterdistance_1.getLatestMessage
    (&stopafterdistance_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S6>/Enable'

  if (varargout_1) {
    stopafterdistance_B.In1 = stopafterdistance_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Fcn: '<Root>/Fcn' incorporates:
  //   Constant: '<Root>/Constant'
  //   Sum: '<Root>/Add'

  tmp = rt_powd_snf(stopafterdistance_B.In1.Pose.Pose.Position.X -
                    stopafterdistance_P.Constant_Value_j[0], 2.0) + rt_powd_snf
    (stopafterdistance_B.In1.Pose.Pose.Position.Y -
     stopafterdistance_P.Constant_Value_j[1], 2.0);

  // BusAssignment: '<Root>/Bus Assignment'
  stopafterdistance_B.BusAssignment = stopafterdistance_B.In1_o;

  // Fcn: '<Root>/Fcn'
  if (tmp < 0.0) {
    tmp = -sqrt(-tmp);
  } else {
    tmp = sqrt(tmp);
  }

  // Switch: '<Root>/Switch'
  if (tmp > stopafterdistance_P.Switch_Threshold) {
    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<Root>/Constant1'

    stopafterdistance_B.BusAssignment.Linear.X =
      stopafterdistance_P.Constant1_Value;
  } else {
    // BusAssignment: '<Root>/Bus Assignment'
    stopafterdistance_B.BusAssignment.Linear.X =
      stopafterdistance_B.In1_o.Linear.X;
  }

  // End of Switch: '<Root>/Switch'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   MATLABSystem: '<S2>/SinkBlock'

  Pub_stopafterdistance_35.publish(&stopafterdistance_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // BusAssignment: '<Root>/Bus Assignment4' incorporates:
  //   Constant: '<Root>/speedTurn7'

  rtb_BusAssignment4.Data = stopafterdistance_P.speedTurn7_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   MATLABSystem: '<S3>/SinkBlock'

  Pub_stopafterdistance_41.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<Root>/Publish4'
}

// Model initialize function
void stopafterdistance_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(stopafterdistance_M, (NULL));

  // block I/O
  (void) memset(((void *) &stopafterdistance_B), 0,
                sizeof(B_stopafterdistance_T));

  // states (dwork)
  (void) memset((void *)&stopafterdistance_DW, 0,
                sizeof(DW_stopafterdistance_T));

  {
    static const char_T tmp[13] = { '/', 's', 't', 'o', 'p', 'D', 'i', 's', 't',
      'a', 'n', 'c', 'e' };

    static const char_T tmp_0[19] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_1[16] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'o', 'd', 'o', 'm' };

    static const char_T tmp_2[25] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'c', 'm', 'd', '_', 'v', 'e', 'l', '_', 't', 'a', 's',
      'k', '4' };

    char_T tmp_3[14];
    char_T tmp_4[20];
    char_T tmp_5[17];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S5>/SourceBlock'
    stopafterdistance_DW.obj_e.isInitialized = 0;
    stopafterdistance_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      stopafterdistance_B.cv0[i] = tmp_2[i];
    }

    stopafterdistance_B.cv0[25] = '\x00';
    Sub_stopafterdistance_33.createSubscriber(stopafterdistance_B.cv0,
      stopafterdistan_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    stopafterdistance_DW.obj_n.isInitialized = 0;
    stopafterdistance_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_5[i] = tmp_1[i];
    }

    tmp_5[16] = '\x00';
    Sub_stopafterdistance_1.createSubscriber(tmp_5,
      stopafterdistan_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    stopafterdistance_DW.obj_l.isInitialized = 0;
    stopafterdistance_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_4[i] = tmp_0[i];
    }

    tmp_4[19] = '\x00';
    Pub_stopafterdistance_35.createPublisher(tmp_4,
      stopafterdistan_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    stopafterdistance_DW.obj.isInitialized = 0;
    stopafterdistance_DW.obj.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      tmp_3[i] = tmp[i];
    }

    tmp_3[13] = '\x00';
    Pub_stopafterdistance_41.createPublisher(tmp_3,
      stopafterdistan_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1'
    stopafterdistance_B.In1_o = stopafterdistance_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S6>/Out1'
    stopafterdistance_B.In1 = stopafterdistance_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void stopafterdistance_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SourceBlock'

  if (stopafterdistance_DW.obj_e.isInitialized == 1) {
    stopafterdistance_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SourceBlock'

  if (stopafterdistance_DW.obj_n.isInitialized == 1) {
    stopafterdistance_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (stopafterdistance_DW.obj_l.isInitialized == 1) {
    stopafterdistance_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SinkBlock'

  if (stopafterdistance_DW.obj.isInitialized == 1) {
    stopafterdistance_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish4'
}

//
// File trailer for generated code.
//
// [EOF]
//
