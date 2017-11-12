//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: directionController.cpp
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
#include "directionController.h"
#include "directionController_private.h"
#define directionContro_MessageQueueLen (1)

// Block signals (auto storage)
B_directionController_T directionController_B;

// Block states (auto storage)
DW_directionController_T directionController_DW;

// Real-time model
RT_MODEL_directionController_T directionController_M_;
RT_MODEL_directionController_T *const directionController_M =
  &directionController_M_;

// Model step function
void directionController_step(void)
{
  int32_T i;
  SL_Bus_directionController_std_msgs_Float32 varargout_2;
  SL_Bus_directionController_std_msgs_Float64 rtb_BusAssignment4;
  SL_Bus_directionController_std_msgs_Float64 rtb_BusAssignment3;
  SL_Bus_directionController_std_msgs_Float64 rtb_BusAssignment2;
  SL_Bus_directionController_std_msgs_Float64 rtb_BusAssignment10;
  SL_Bus_directionController_std_msgs_Float64 rtb_BusAssignment1;
  SL_Bus_directionController_std_msgs_Float64 rtb_angular_z;
  boolean_T rtb_forceLeft;
  boolean_T rtb_forceRight;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S17>/SourceBlock' incorporates:
  //   Inport: '<S20>/In1'
  //   MATLABSystem: '<S17>/SourceBlock'

  rtb_forceRight = Sub_directionController_5.getLatestMessage(&varargout_2);

  // Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S20>/Enable'

  if (rtb_forceRight) {
    directionController_B.In1_a = varargout_2;
  }

  // End of Start for MATLABSystem: '<S17>/SourceBlock'
  // End of Outputs for SubSystem: '<S17>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S16>/SourceBlock' incorporates:
  //   Inport: '<S19>/In1'
  //   MATLABSystem: '<S16>/SourceBlock'

  rtb_forceRight = Sub_directionController_34.getLatestMessage
    (&directionController_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S16>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S19>/Enable'

  if (rtb_forceRight) {
    directionController_B.In1 = directionController_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S16>/SourceBlock'
  // End of Outputs for SubSystem: '<S16>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/Direciton' incorporates:
  //   Constant: '<Root>/speedTurn'
  //   Constant: '<Root>/speedTurn1'

  // MATLAB Function 'Direciton': '<S4>:1'
  // '<S4>:1:3' counterLeft = 0;
  directionController_B.counterLeft = 0.0;

  // '<S4>:1:4' counterRight = 0;
  directionController_B.counterRight = 0.0;

  // '<S4>:1:5' forceRight = false;
  rtb_forceRight = false;

  // '<S4>:1:6' forceLeft = false;
  rtb_forceLeft = false;

  // '<S4>:1:8' for i = 1:90
  for (i = 0; i < 90; i++) {
    // '<S4>:1:9' if(Ranges(i) >= forceTurnRightRange)
    if (directionController_B.In1.Ranges[i] >=
        directionController_P.speedTurn_Value) {
      // '<S4>:1:10' counterRight = counterRight + 1;
      directionController_B.counterRight++;
    }

    // '<S4>:1:12' if(counterRight >= forceTurnRightCounter)
    if (directionController_B.counterRight >=
        directionController_P.speedTurn1_Value) {
      // '<S4>:1:13' forceRight = true;
      rtb_forceRight = true;
    }
  }

  // '<S4>:1:16' for i = 90:180
  for (i = 0; i < 91; i++) {
    // '<S4>:1:17' if(Ranges(i) >= forceTurnLeftRange)
    if (directionController_B.In1.Ranges[i + 89] >=
        directionController_P.speedTurn_Value) {
      // '<S4>:1:18' counterLeft = counterLeft + 1;
      directionController_B.counterLeft++;
    }

    // '<S4>:1:20' if(counterLeft >= forceTurnLeftCounter)
    if (directionController_B.counterLeft >=
        directionController_P.speedTurn1_Value) {
      // '<S4>:1:21' forceLeft = true;
      rtb_forceLeft = true;
    }
  }

  // '<S4>:1:24' if(Ranges(1) <= Ranges(180))
  if (directionController_B.In1.Ranges[0] <= directionController_B.In1.Ranges
      [179]) {
    // '<S4>:1:25' turnDirection = 0;
    directionController_B.counterLeft = 0.0;

    //  right;
  } else if (directionController_B.In1.Ranges[0] >
             directionController_B.In1.Ranges[179]) {
    // '<S4>:1:26' elseif(Ranges(1) > Ranges(180))
    // '<S4>:1:27' turnDirection = 1;
    directionController_B.counterLeft = 1.0;
  } else {
    // '<S4>:1:28' else
    // '<S4>:1:29' turnDirection = 2;
    directionController_B.counterLeft = 2.0;
  }

  // End of MATLAB Function: '<Root>/Direciton'

  // MATLAB Function: '<Root>/direction_fcn' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/speedTurn2'
  //   Constant: '<Root>/speedTurn3'
  //   Constant: '<Root>/speedTurn4'
  //   Constant: '<Root>/speedTurn5'
  //   Constant: '<Root>/speedTurn6'
  //   Constant: '<Root>/speedTurn7'
  //   Memory: '<Root>/Memory'

  // MATLAB Function 'direction_fcn': '<S18>:1'
  // '<S18>:1:5' angular_z = blankMsg;
  rtb_angular_z.Data = directionController_P.Constant_Value_p;

  // '<S18>:1:6' if(forceRight == true || forceLeft == true)
  if (rtb_forceRight || rtb_forceLeft) {
    // '<S18>:1:7' if(forceRight == true)
    if (rtb_forceRight) {
      // '<S18>:1:8' angular_z.Data = exitTurningRightAngle;
      rtb_angular_z.Data = directionController_P.speedTurn5_Value;
    } else {
      if (rtb_forceLeft) {
        // '<S18>:1:9' elseif(forceLeft == true)
        // '<S18>:1:10' angular_z.Data = exitTurningLeftAngle;
        rtb_angular_z.Data = directionController_P.speedTurn6_Value;
      }
    }

    // Update for Memory: '<Root>/Memory' incorporates:
    //   Constant: '<Root>/speedTurn5'
    //   Constant: '<Root>/speedTurn6'

    // '<S18>:1:12' d = turnDirection;
    directionController_DW.Memory_PreviousInput =
      directionController_B.counterLeft;
  } else if ((directionController_B.In1_a.Data > 0.0F) &&
             (directionController_B.In1_a.Data <
              directionController_P.speedTurn7_Value)) {
    // '<S18>:1:13' elseif(Data > 0 && Data < turnDist)
    // '<S18>:1:14' if(direction == 0)
    if (directionController_DW.Memory_PreviousInput == 0.0) {
      //  Turning left;
      // '<S18>:1:16' angular_z.Data = turnLeftAngleZeroToTen;
      rtb_angular_z.Data = directionController_P.speedTurn3_Value;

      // '<S18>:1:17' d = direction;
    } else {
      // '<S18>:1:18' else
      //  Turning right;
      // '<S18>:1:20' angular_z.Data = turnRightAngleZeroToTen;
      rtb_angular_z.Data = directionController_P.speedTurn4_Value;

      // '<S18>:1:21' d = direction;
    }
  } else {
    // '<S18>:1:23' else
    //      if(exitRight == true)
    //          angular_z.Data = -angularZeroToTen;
    //      elseif(exitLeft == true)
    //          angular_z.Data = angularZeroToTen;
    //      else
    //          angular_z.Data = 0;
    //      end
    // '<S18>:1:31' angular_z.Data = turnAngleSafe;
    rtb_angular_z.Data = directionController_P.speedTurn2_Value;

    // Update for Memory: '<Root>/Memory' incorporates:
    //   Constant: '<Root>/speedTurn2'

    // '<S18>:1:32' d = turnDirection;
    directionController_DW.Memory_PreviousInput =
      directionController_B.counterLeft;
  }

  // End of MATLAB Function: '<Root>/direction_fcn'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   MATLABSystem: '<S5>/SinkBlock'

  Pub_directionController_13.publish(&rtb_angular_z);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/speedTurn'

  rtb_BusAssignment1.Data = directionController_P.speedTurn_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S6>/SinkBlock' incorporates:
  //   MATLABSystem: '<S6>/SinkBlock'

  Pub_directionController_40.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment10' incorporates:
  //   Constant: '<Root>/speedTurn7'

  rtb_BusAssignment10.Data = directionController_P.speedTurn7_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish10'
  // Start for MATLABSystem: '<S7>/SinkBlock' incorporates:
  //   MATLABSystem: '<S7>/SinkBlock'

  Pub_directionController_71.publish(&rtb_BusAssignment10);

  // End of Outputs for SubSystem: '<Root>/Publish10'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<Root>/speedTurn'

  rtb_BusAssignment2.Data = directionController_P.speedTurn_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // Start for MATLABSystem: '<S8>/SinkBlock' incorporates:
  //   MATLABSystem: '<S8>/SinkBlock'

  Pub_directionController_42.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   Constant: '<Root>/speedTurn1'

  rtb_BusAssignment3.Data = directionController_P.speedTurn1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // Start for MATLABSystem: '<S9>/SinkBlock' incorporates:
  //   MATLABSystem: '<S9>/SinkBlock'

  Pub_directionController_44.publish(&rtb_BusAssignment3);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment4' incorporates:
  //   Constant: '<Root>/speedTurn1'

  rtb_BusAssignment4.Data = directionController_P.speedTurn1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // Start for MATLABSystem: '<S10>/SinkBlock' incorporates:
  //   MATLABSystem: '<S10>/SinkBlock'

  Pub_directionController_46.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<Root>/Publish4'

  // BusAssignment: '<Root>/Bus Assignment5' incorporates:
  //   Constant: '<Root>/speedTurn2'

  directionController_B.BusAssignment5.Data =
    directionController_P.speedTurn2_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish5'
  // Start for MATLABSystem: '<S11>/SinkBlock' incorporates:
  //   MATLABSystem: '<S11>/SinkBlock'

  Pub_directionController_56.publish(&directionController_B.BusAssignment5);

  // End of Outputs for SubSystem: '<Root>/Publish5'

  // BusAssignment: '<Root>/Bus Assignment6' incorporates:
  //   Constant: '<Root>/speedTurn3'

  directionController_B.BusAssignment6.Data =
    directionController_P.speedTurn3_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish6'
  // Start for MATLABSystem: '<S12>/SinkBlock' incorporates:
  //   MATLABSystem: '<S12>/SinkBlock'

  Pub_directionController_58.publish(&directionController_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish6'

  // BusAssignment: '<Root>/Bus Assignment7' incorporates:
  //   Constant: '<Root>/speedTurn4'

  directionController_B.BusAssignment7.Data =
    directionController_P.speedTurn4_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish7'
  // Start for MATLABSystem: '<S13>/SinkBlock' incorporates:
  //   MATLABSystem: '<S13>/SinkBlock'

  Pub_directionController_60.publish(&directionController_B.BusAssignment7);

  // End of Outputs for SubSystem: '<Root>/Publish7'

  // BusAssignment: '<Root>/Bus Assignment8' incorporates:
  //   Constant: '<Root>/speedTurn5'

  directionController_B.BusAssignment8.Data =
    directionController_P.speedTurn5_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish8'
  // Start for MATLABSystem: '<S14>/SinkBlock' incorporates:
  //   MATLABSystem: '<S14>/SinkBlock'

  Pub_directionController_62.publish(&directionController_B.BusAssignment8);

  // End of Outputs for SubSystem: '<Root>/Publish8'

  // BusAssignment: '<Root>/Bus Assignment9' incorporates:
  //   Constant: '<Root>/speedTurn6'

  directionController_B.BusAssignment9.Data =
    directionController_P.speedTurn6_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish9'
  // Start for MATLABSystem: '<S15>/SinkBlock' incorporates:
  //   MATLABSystem: '<S15>/SinkBlock'

  Pub_directionController_64.publish(&directionController_B.BusAssignment9);

  // End of Outputs for SubSystem: '<Root>/Publish9'
}

// Model initialize function
void directionController_initialize(void)
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(directionController_M, (NULL));

  // block I/O
  (void) memset(((void *) &directionController_B), 0,
                sizeof(B_directionController_T));

  // states (dwork)
  (void) memset((void *)&directionController_DW, 0,
                sizeof(DW_directionController_T));

  {
    static const char_T tmp[21] = { '/', 'e', 'x', 'i', 't', 'T', 'u', 'r', 'n',
      'i', 'n', 'g', 'L', 'e', 'f', 't', 'A', 'n', 'g', 'l', 'e' };

    static const char_T tmp_0[22] = { '/', 'e', 'x', 'i', 't', 'T', 'u', 'r',
      'n', 'i', 'n', 'g', 'R', 'i', 'g', 'h', 't', 'A', 'n', 'g', 'l', 'e' };

    static const char_T tmp_1[24] = { '/', 't', 'u', 'r', 'n', 'R', 'i', 'g',
      'h', 't', 'A', 'n', 'g', 'l', 'e', 'Z', 'e', 'r', 'o', 'T', 'o', 'T', 'e',
      'n' };

    static const char_T tmp_2[23] = { '/', 't', 'u', 'r', 'n', 'L', 'e', 'f',
      't', 'A', 'n', 'g', 'l', 'e', 'Z', 'e', 'r', 'o', 'T', 'o', 'T', 'e', 'n'
    };

    static const char_T tmp_3[14] = { '/', 't', 'u', 'r', 'n', 'A', 'n', 'g',
      'l', 'e', 'S', 'a', 'f', 'e' };

    static const char_T tmp_4[22] = { '/', 'f', 'o', 'r', 'c', 'e', 'T', 'u',
      'r', 'n', 'R', 'i', 'g', 'h', 't', 'C', 'o', 'u', 'n', 't', 'e', 'r' };

    static const char_T tmp_5[21] = { '/', 'f', 'o', 'r', 'c', 'e', 'T', 'u',
      'r', 'n', 'L', 'e', 'f', 't', 'C', 'o', 'u', 'n', 't', 'e', 'r' };

    static const char_T tmp_6[19] = { '/', 'f', 'o', 'r', 'c', 'e', 'T', 'u',
      'r', 'n', 'L', 'e', 'f', 't', 'R', 'a', 'n', 'g', 'e' };

    static const char_T tmp_7[9] = { '/', 't', 'u', 'r', 'n', 'D', 'i', 's', 't'
    };

    static const char_T tmp_8[20] = { '/', 'f', 'o', 'r', 'c', 'e', 'T', 'u',
      'r', 'n', 'R', 'i', 'g', 'h', 't', 'R', 'a', 'n', 'g', 'e' };

    static const char_T tmp_9[10] = { '/', 'd', 'i', 'r', 'e', 'c', 't', 'i',
      'o', 'n' };

    static const char_T tmp_a[30] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'f', 'r', 'o', 'n', 't', '_', 'l', 'a', 's', 'e', 'r',
      '_', 'p', 'o', 'i', 'n', 't', 's' };

    static const char_T tmp_b[34] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'd', 'i', 's', 't', 'a', 'n', 'c', 'e', 'E', 's', 't',
      'i', 'm', 'a', 't', 'o', 'r', '/', 'd', 'i', 's', 't' };

    char_T tmp_c[15];
    char_T tmp_d[20];
    char_T tmp_e[10];
    char_T tmp_f[11];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S17>/SourceBlock'
    directionController_DW.obj_l.isInitialized = 0;
    directionController_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 34; i++) {
      directionController_B.cv0[i] = tmp_b[i];
    }

    directionController_B.cv0[34] = '\x00';
    Sub_directionController_5.createSubscriber(directionController_B.cv0,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S17>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S16>/SourceBlock'
    directionController_DW.obj_nu.isInitialized = 0;
    directionController_DW.obj_nu.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      directionController_B.cv1[i] = tmp_a[i];
    }

    directionController_B.cv1[30] = '\x00';
    Sub_directionController_34.createSubscriber(directionController_B.cv1,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S16>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    directionController_DW.obj_e.isInitialized = 0;
    directionController_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_f[i] = tmp_9[i];
    }

    tmp_f[10] = '\x00';
    Pub_directionController_13.createPublisher(tmp_f,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    directionController_DW.obj_hk.isInitialized = 0;
    directionController_DW.obj_hk.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      directionController_B.cv6[i] = tmp_8[i];
    }

    directionController_B.cv6[20] = '\x00';
    Pub_directionController_40.createPublisher(directionController_B.cv6,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Publish10'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    directionController_DW.obj_no.isInitialized = 0;
    directionController_DW.obj_no.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      tmp_e[i] = tmp_7[i];
    }

    tmp_e[9] = '\x00';
    Pub_directionController_71.createPublisher(tmp_e,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish10'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    directionController_DW.obj_p.isInitialized = 0;
    directionController_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_d[i] = tmp_6[i];
    }

    tmp_d[19] = '\x00';
    Pub_directionController_42.createPublisher(tmp_d,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'

    // Start for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    directionController_DW.obj_g.isInitialized = 0;
    directionController_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      directionController_B.cv5[i] = tmp_5[i];
    }

    directionController_B.cv5[21] = '\x00';
    Pub_directionController_44.createPublisher(directionController_B.cv5,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish3'

    // Start for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    directionController_DW.obj_h.isInitialized = 0;
    directionController_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      directionController_B.cv4[i] = tmp_4[i];
    }

    directionController_B.cv4[22] = '\x00';
    Pub_directionController_46.createPublisher(directionController_B.cv4,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish4'

    // Start for Atomic SubSystem: '<Root>/Publish5'
    // Start for MATLABSystem: '<S11>/SinkBlock'
    directionController_DW.obj_n.isInitialized = 0;
    directionController_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_c[i] = tmp_3[i];
    }

    tmp_c[14] = '\x00';
    Pub_directionController_56.createPublisher(tmp_c,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S11>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish5'

    // Start for Atomic SubSystem: '<Root>/Publish6'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    directionController_DW.obj_aj.isInitialized = 0;
    directionController_DW.obj_aj.isInitialized = 1;
    for (i = 0; i < 23; i++) {
      directionController_B.cv3[i] = tmp_2[i];
    }

    directionController_B.cv3[23] = '\x00';
    Pub_directionController_58.createPublisher(directionController_B.cv3,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish6'

    // Start for Atomic SubSystem: '<Root>/Publish7'
    // Start for MATLABSystem: '<S13>/SinkBlock'
    directionController_DW.obj_c.isInitialized = 0;
    directionController_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      directionController_B.cv2[i] = tmp_1[i];
    }

    directionController_B.cv2[24] = '\x00';
    Pub_directionController_60.createPublisher(directionController_B.cv2,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S13>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish7'

    // Start for Atomic SubSystem: '<Root>/Publish8'
    // Start for MATLABSystem: '<S14>/SinkBlock'
    directionController_DW.obj_a.isInitialized = 0;
    directionController_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      directionController_B.cv4[i] = tmp_0[i];
    }

    directionController_B.cv4[22] = '\x00';
    Pub_directionController_62.createPublisher(directionController_B.cv4,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S14>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish8'

    // Start for Atomic SubSystem: '<Root>/Publish9'
    // Start for MATLABSystem: '<S15>/SinkBlock'
    directionController_DW.obj.isInitialized = 0;
    directionController_DW.obj.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      directionController_B.cv5[i] = tmp[i];
    }

    directionController_B.cv5[21] = '\x00';
    Pub_directionController_64.createPublisher(directionController_B.cv5,
      directionContro_MessageQueueLen);

    // End of Start for MATLABSystem: '<S15>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish9'

    // InitializeConditions for Memory: '<Root>/Memory'
    directionController_DW.Memory_PreviousInput =
      directionController_P.Memory_X0;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S17>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S20>/Out1'
    directionController_B.In1_a = directionController_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S17>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S16>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S19>/Out1'
    directionController_B.In1 = directionController_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S16>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void directionController_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S17>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S17>/SourceBlock'

  if (directionController_DW.obj_l.isInitialized == 1) {
    directionController_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S17>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S16>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S16>/SourceBlock'

  if (directionController_DW.obj_nu.isInitialized == 1) {
    directionController_DW.obj_nu.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S16>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SinkBlock'

  if (directionController_DW.obj_e.isInitialized == 1) {
    directionController_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S6>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S6>/SinkBlock'

  if (directionController_DW.obj_hk.isInitialized == 1) {
    directionController_DW.obj_hk.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish10'
  // Start for MATLABSystem: '<S7>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S7>/SinkBlock'

  if (directionController_DW.obj_no.isInitialized == 1) {
    directionController_DW.obj_no.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish10'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Start for MATLABSystem: '<S8>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S8>/SinkBlock'

  if (directionController_DW.obj_p.isInitialized == 1) {
    directionController_DW.obj_p.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Start for MATLABSystem: '<S9>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S9>/SinkBlock'

  if (directionController_DW.obj_g.isInitialized == 1) {
    directionController_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Start for MATLABSystem: '<S10>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S10>/SinkBlock'

  if (directionController_DW.obj_h.isInitialized == 1) {
    directionController_DW.obj_h.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish4'

  // Terminate for Atomic SubSystem: '<Root>/Publish5'
  // Start for MATLABSystem: '<S11>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S11>/SinkBlock'

  if (directionController_DW.obj_n.isInitialized == 1) {
    directionController_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish5'

  // Terminate for Atomic SubSystem: '<Root>/Publish6'
  // Start for MATLABSystem: '<S12>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S12>/SinkBlock'

  if (directionController_DW.obj_aj.isInitialized == 1) {
    directionController_DW.obj_aj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish6'

  // Terminate for Atomic SubSystem: '<Root>/Publish7'
  // Start for MATLABSystem: '<S13>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S13>/SinkBlock'

  if (directionController_DW.obj_c.isInitialized == 1) {
    directionController_DW.obj_c.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S13>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish7'

  // Terminate for Atomic SubSystem: '<Root>/Publish8'
  // Start for MATLABSystem: '<S14>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S14>/SinkBlock'

  if (directionController_DW.obj_a.isInitialized == 1) {
    directionController_DW.obj_a.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S14>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish8'

  // Terminate for Atomic SubSystem: '<Root>/Publish9'
  // Start for MATLABSystem: '<S15>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S15>/SinkBlock'

  if (directionController_DW.obj.isInitialized == 1) {
    directionController_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S15>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish9'
}

//
// File trailer for generated code.
//
// [EOF]
//
