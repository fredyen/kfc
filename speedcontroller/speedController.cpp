//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: speedController.cpp
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
#define speedController_MessageQueueLen (1)

// Block signals (auto storage)
B_speedController_T speedController_B;

// Block states (auto storage)
DW_speedController_T speedController_DW;

// Real-time model
RT_MODEL_speedController_T speedController_M_;
RT_MODEL_speedController_T *const speedController_M = &speedController_M_;

// Model step function
void speedController_step(void)
{
  boolean_T varargout_1;
  SL_Bus_speedController_std_msgs_Float32 varargout_2;
  SL_Bus_speedController_std_msgs_Float64 rtb_BusAssignment6;
  SL_Bus_speedController_std_msgs_Float64 rtb_BusAssignment5;
  SL_Bus_speedController_std_msgs_Float64 rtb_BusAssignment4;
  SL_Bus_speedController_std_msgs_Float64 rtb_BusAssignment3;
  SL_Bus_speedController_std_msgs_Float64 rtb_BusAssignment2;
  SL_Bus_speedController_std_msgs_Float64 rtb_BusAssignment1;
  real_T rtb_linear_vel_x;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // Start for MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'
  //   MATLABSystem: '<S12>/SourceBlock'

  varargout_1 = Sub_speedController_10.getLatestMessage
    (&speedController_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (varargout_1) {
    speedController_B.In1 = speedController_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'
  //   MATLABSystem: '<S11>/SourceBlock'

  varargout_1 = Sub_speedController_31.getLatestMessage(&varargout_2);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (varargout_1) {
    speedController_B.In1_o = varargout_2;
  }

  // End of Start for MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // MATLAB Function: '<Root>/speed_fcn' incorporates:
  //   Constant: '<Root>/speedTurn'
  //   Constant: '<Root>/speedTurn1'
  //   Constant: '<Root>/speedTurn2'
  //   Constant: '<Root>/speedTurn3'
  //   Constant: '<Root>/speedTurn4'
  //   Constant: '<Root>/speedTurn5'
  //   Constant: '<Root>/speedTurn6'

  // MATLAB Function 'speed_fcn': '<S13>:1'
  // '<S13>:1:3' if(Z ~= 0)
  if (speedController_B.In1.Data != 0.0) {
    // '<S13>:1:4' linear_vel_x = speedTurn;
    rtb_linear_vel_x = speedController_P.speedTurn3_Value;
  } else {
    // '<S13>:1:5' else
    // '<S13>:1:6' if(Data >= absSafeDist)
    if (speedController_B.In1_o.Data >= speedController_P.speedTurn_Value) {
      // '<S13>:1:7' linear_vel_x = speedThirtyPlus;
      rtb_linear_vel_x = speedController_P.speedTurn4_Value;
    } else if ((speedController_B.In1_o.Data >=
                speedController_P.speedTurn1_Value) &&
               (speedController_B.In1_o.Data < speedController_P.speedTurn_Value))
    {
      // '<S13>:1:8' elseif(Data >= quiteSafeDist && Data < absSafeDist)
      // '<S13>:1:9' linear_vel_x = speedTwentyToThirty;
      rtb_linear_vel_x = speedController_P.speedTurn5_Value;
    } else if ((speedController_B.In1_o.Data >=
                speedController_P.speedTurn2_Value) &&
               (speedController_B.In1_o.Data <
                speedController_P.speedTurn1_Value)) {
      // '<S13>:1:10' elseif(Data >= turnDist && Data < quiteSafeDist)
      // '<S13>:1:11' linear_vel_x = speedTenToTwenty;
      rtb_linear_vel_x = speedController_P.speedTurn6_Value;
    } else {
      // '<S13>:1:12' else
      // '<S13>:1:13' linear_vel_x = speedThirtyPlus;
      rtb_linear_vel_x = speedController_P.speedTurn4_Value;
    }
  }

  // End of MATLAB Function: '<Root>/speed_fcn'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  speedController_B.BusAssignment = speedController_P.Constant_Value;
  speedController_B.BusAssignment.Linear.X = rtb_linear_vel_x;
  speedController_B.BusAssignment.Angular.Z = speedController_B.In1.Data;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   MATLABSystem: '<S3>/SinkBlock'

  Pub_speedController_8.publish(&speedController_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/speedTurn1'

  rtb_BusAssignment1.Data = speedController_P.speedTurn1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S4>/SinkBlock' incorporates:
  //   MATLABSystem: '<S4>/SinkBlock'

  Pub_speedController_37.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<Root>/speedTurn2'

  rtb_BusAssignment2.Data = speedController_P.speedTurn2_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   MATLABSystem: '<S5>/SinkBlock'

  Pub_speedController_39.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   Constant: '<Root>/speedTurn3'

  rtb_BusAssignment3.Data = speedController_P.speedTurn3_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // Start for MATLABSystem: '<S6>/SinkBlock' incorporates:
  //   MATLABSystem: '<S6>/SinkBlock'

  Pub_speedController_41.publish(&rtb_BusAssignment3);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment4' incorporates:
  //   Constant: '<Root>/speedTurn'

  rtb_BusAssignment4.Data = speedController_P.speedTurn_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // Start for MATLABSystem: '<S7>/SinkBlock' incorporates:
  //   MATLABSystem: '<S7>/SinkBlock'

  Pub_speedController_35.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<Root>/Publish4'

  // BusAssignment: '<Root>/Bus Assignment5' incorporates:
  //   Constant: '<Root>/speedTurn4'

  rtb_BusAssignment5.Data = speedController_P.speedTurn4_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish5'
  // Start for MATLABSystem: '<S8>/SinkBlock' incorporates:
  //   MATLABSystem: '<S8>/SinkBlock'

  Pub_speedController_43.publish(&rtb_BusAssignment5);

  // End of Outputs for SubSystem: '<Root>/Publish5'

  // BusAssignment: '<Root>/Bus Assignment6' incorporates:
  //   Constant: '<Root>/speedTurn5'

  rtb_BusAssignment6.Data = speedController_P.speedTurn5_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish6'
  // Start for MATLABSystem: '<S9>/SinkBlock' incorporates:
  //   MATLABSystem: '<S9>/SinkBlock'

  Pub_speedController_45.publish(&rtb_BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish6'

  // BusAssignment: '<Root>/Bus Assignment7' incorporates:
  //   Constant: '<Root>/speedTurn6'

  speedController_B.BusAssignment7.Data = speedController_P.speedTurn6_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish7'
  // Start for MATLABSystem: '<S10>/SinkBlock' incorporates:
  //   MATLABSystem: '<S10>/SinkBlock'

  Pub_speedController_47.publish(&speedController_B.BusAssignment7);

  // End of Outputs for SubSystem: '<Root>/Publish7'
}

// Model initialize function
void speedController_initialize(void)
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(speedController_M, (NULL));

  // block I/O
  (void) memset(((void *) &speedController_B), 0,
                sizeof(B_speedController_T));

  // states (dwork)
  (void) memset((void *)&speedController_DW, 0,
                sizeof(DW_speedController_T));

  {
    static const char_T tmp[17] = { '/', 's', 'p', 'e', 'e', 'd', 'T', 'e', 'n',
      'T', 'o', 'T', 'w', 'e', 'n', 't', 'y' };

    static const char_T tmp_0[20] = { '/', 's', 'p', 'e', 'e', 'd', 'T', 'w',
      'e', 'n', 't', 'y', 'T', 'o', 'T', 'h', 'i', 'r', 't', 'y' };

    static const char_T tmp_1[16] = { '/', 's', 'p', 'e', 'e', 'd', 'T', 'h',
      'i', 'r', 't', 'y', 'P', 'l', 'u', 's' };

    static const char_T tmp_2[12] = { '/', 'a', 'b', 's', 'S', 'a', 'f', 'e',
      'D', 'i', 's', 't' };

    static const char_T tmp_3[10] = { '/', 's', 'p', 'e', 'e', 'd', 'T', 'u',
      'r', 'n' };

    static const char_T tmp_4[9] = { '/', 't', 'u', 'r', 'n', 'D', 'i', 's', 't'
    };

    static const char_T tmp_5[14] = { '/', 'q', 'u', 'i', 't', 'e', 'S', 'a',
      'f', 'e', 'D', 'i', 's', 't' };

    static const char_T tmp_6[19] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_7[34] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'd', 'i', 's', 't', 'a', 'n', 'c', 'e', 'E', 's', 't',
      'i', 'm', 'a', 't', 'o', 'r', '/', 'd', 'i', 's', 't' };

    static const char_T tmp_8[10] = { '/', 'd', 'i', 'r', 'e', 'c', 't', 'i',
      'o', 'n' };

    char_T tmp_9[13];
    char_T tmp_a[10];
    char_T tmp_b[15];
    char_T tmp_c[11];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S12>/SourceBlock'
    speedController_DW.obj_n.isInitialized = 0;
    speedController_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_c[i] = tmp_8[i];
    }

    tmp_c[10] = '\x00';
    Sub_speedController_10.createSubscriber(tmp_c,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe2'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    speedController_DW.obj_g.isInitialized = 0;
    speedController_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 34; i++) {
      speedController_B.cv0[i] = tmp_7[i];
    }

    speedController_B.cv0[34] = '\x00';
    Sub_speedController_31.createSubscriber(speedController_B.cv0,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    speedController_DW.obj_kb.isInitialized = 0;
    speedController_DW.obj_kb.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      speedController_B.cv2[i] = tmp_6[i];
    }

    speedController_B.cv2[19] = '\x00';
    Pub_speedController_8.createPublisher(speedController_B.cv2,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    speedController_DW.obj_o.isInitialized = 0;
    speedController_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_b[i] = tmp_5[i];
    }

    tmp_b[14] = '\x00';
    Pub_speedController_37.createPublisher(tmp_b,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    speedController_DW.obj_p.isInitialized = 0;
    speedController_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      tmp_a[i] = tmp_4[i];
    }

    tmp_a[9] = '\x00';
    Pub_speedController_39.createPublisher(tmp_a,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'

    // Start for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    speedController_DW.obj_kw.isInitialized = 0;
    speedController_DW.obj_kw.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_c[i] = tmp_3[i];
    }

    tmp_c[10] = '\x00';
    Pub_speedController_41.createPublisher(tmp_c,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish3'

    // Start for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    speedController_DW.obj_l.isInitialized = 0;
    speedController_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      tmp_9[i] = tmp_2[i];
    }

    tmp_9[12] = '\x00';
    Pub_speedController_35.createPublisher(tmp_9,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish4'

    // Start for Atomic SubSystem: '<Root>/Publish5'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    speedController_DW.obj_k.isInitialized = 0;
    speedController_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      speedController_B.cv4[i] = tmp_1[i];
    }

    speedController_B.cv4[16] = '\x00';
    Pub_speedController_43.createPublisher(speedController_B.cv4,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish5'

    // Start for Atomic SubSystem: '<Root>/Publish6'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    speedController_DW.obj_h.isInitialized = 0;
    speedController_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      speedController_B.cv1[i] = tmp_0[i];
    }

    speedController_B.cv1[20] = '\x00';
    Pub_speedController_45.createPublisher(speedController_B.cv1,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish6'

    // Start for Atomic SubSystem: '<Root>/Publish7'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    speedController_DW.obj.isInitialized = 0;
    speedController_DW.obj.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      speedController_B.cv3[i] = tmp[i];
    }

    speedController_B.cv3[17] = '\x00';
    Pub_speedController_47.createPublisher(speedController_B.cv3,
      speedController_MessageQueueLen);

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish7'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1'
    speedController_B.In1 = speedController_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1'
    speedController_B.In1_o = speedController_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'
  }
}

// Model terminate function
void speedController_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Start for MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S12>/SourceBlock'

  if (speedController_DW.obj_n.isInitialized == 1) {
    speedController_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S12>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S11>/SourceBlock'

  if (speedController_DW.obj_g.isInitialized == 1) {
    speedController_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SinkBlock'

  if (speedController_DW.obj_kb.isInitialized == 1) {
    speedController_DW.obj_kb.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S4>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SinkBlock'

  if (speedController_DW.obj_o.isInitialized == 1) {
    speedController_DW.obj_o.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SinkBlock'

  if (speedController_DW.obj_p.isInitialized == 1) {
    speedController_DW.obj_p.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Start for MATLABSystem: '<S6>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S6>/SinkBlock'

  if (speedController_DW.obj_kw.isInitialized == 1) {
    speedController_DW.obj_kw.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Start for MATLABSystem: '<S7>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S7>/SinkBlock'

  if (speedController_DW.obj_l.isInitialized == 1) {
    speedController_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish4'

  // Terminate for Atomic SubSystem: '<Root>/Publish5'
  // Start for MATLABSystem: '<S8>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S8>/SinkBlock'

  if (speedController_DW.obj_k.isInitialized == 1) {
    speedController_DW.obj_k.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish5'

  // Terminate for Atomic SubSystem: '<Root>/Publish6'
  // Start for MATLABSystem: '<S9>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S9>/SinkBlock'

  if (speedController_DW.obj_h.isInitialized == 1) {
    speedController_DW.obj_h.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish6'

  // Terminate for Atomic SubSystem: '<Root>/Publish7'
  // Start for MATLABSystem: '<S10>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S10>/SinkBlock'

  if (speedController_DW.obj.isInitialized == 1) {
    speedController_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish7'
}

//
// File trailer for generated code.
//
// [EOF]
//
