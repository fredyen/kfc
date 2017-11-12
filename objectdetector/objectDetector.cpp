//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: objectDetector.cpp
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
#include "objectDetector.h"
#include "objectDetector_private.h"
#define objectDetector_MessageQueueLen (1)

// Block signals (auto storage)
B_objectDetector_T objectDetector_B;

// Block states (auto storage)
DW_objectDetector_T objectDetector_DW;

// Real-time model
RT_MODEL_objectDetector_T objectDetector_M_;
RT_MODEL_objectDetector_T *const objectDetector_M = &objectDetector_M_;

// Forward declaration for local functions
static uint32_T objectDetector_mod(uint32_T x, real_T y);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

// Function for MATLAB Function: '<Root>/box_detection'
static uint32_T objectDetector_mod(uint32_T x, real_T y)
{
  uint32_T r;
  real_T b_r;
  uint32_T tmp;
  b_r = rt_roundd_snf(y);
  if (b_r < 4.294967296E+9) {
    if (b_r >= 0.0) {
      tmp = (uint32_T)b_r;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint32_T;
  }

  if (tmp == y) {
    r = x - (tmp == 0U ? MAX_uint32_T : x / tmp) * tmp;
  } else {
    if (y == floor(y)) {
      b_r = (real_T)x - floor((real_T)x / y) * y;
    } else {
      b_r = (real_T)x / y;
      if (fabs(b_r - rt_roundd_snf(b_r)) <= 2.2204460492503131E-16 * fabs(b_r))
      {
        b_r = 0.0;
      } else {
        b_r = (b_r - floor(b_r)) * y;
      }
    }

    b_r = rt_roundd_snf(b_r);
    if (b_r < 4.294967296E+9) {
      if (b_r >= 0.0) {
        r = (uint32_T)b_r;
      } else {
        r = 0U;
      }
    } else {
      r = MAX_uint32_T;
    }
  }

  return r;
}

// Model step function
void objectDetector_step(void)
{
  int32_T flag;
  int32_T tmp;
  int32_T i;
  real_T k;
  uint32_T id;
  real_T ytmp;
  static const uint8_T b[15] = { 99U, 97U, 116U, 118U, 101U, 104U, 105U, 99U,
    108U, 101U, 47U, 111U, 100U, 111U, 109U };

  boolean_T varargout_1;
  static const real_T tmp_0[180] = { -1.5707963267948966, -1.5532455298474674,
    -1.5356947329000386, -1.5181439359526094, -1.5005931390051805,
    -1.4830423420577514, -1.4654915451103225, -1.4479407481628934,
    -1.4303899512154645, -1.4128391542680354, -1.3952883573206065,
    -1.3777375603731774, -1.3601867634257485, -1.3426359664783194,
    -1.3250851695308903, -1.3075343725834614, -1.2899835756360325,
    -1.2724327786886034, -1.2548819817411743, -1.2373311847937454,
    -1.2197803878463165, -1.2022295908988874, -1.1846787939514583,
    -1.1671279970040294, -1.1495772000566002, -1.1320264031091714,
    -1.1144756061617422, -1.0969248092143133, -1.0793740122668842,
    -1.0618232153194551, -1.0442724183720262, -1.0267216214245973,
    -1.0091708244771682, -0.99162002752973921, -0.97406923058231021,
    -0.9565184336348812, -0.9389676366874522, -0.9214168397400232,
    -0.90386604279259419, -0.88631524584516519, -0.86876444889773619,
    -0.85121365195030707, -0.83366285500287807, -0.81611205805544906,
    -0.79856126110802006, -0.78101046416059106, -0.763459667213162,
    -0.745908870265733, -0.728358073318304, -0.710807276370875,
    -0.693256479423446, -0.675705682476017, -0.658154885528588,
    -0.640604088581159, -0.62305329163373, -0.605502494686301,
    -0.5879516977388719, -0.570400900791443, -0.5528501038440139,
    -0.535299306896585, -0.51774850994915589, -0.500197713001727,
    -0.48264691605429788, -0.465096119106869, -0.44754532215943987,
    -0.42999452521201076, -0.41244372826458187, -0.39489293131715275,
    -0.37734213436972386, -0.35979133742229474, -0.34224054047486585,
    -0.32468974352743674, -0.30713894658000784, -0.28958814963257873,
    -0.27203735268514984, -0.25448655573772072, -0.23693575879029183,
    -0.21938496184286271, -0.20183416489543382, -0.18428336794800471,
    -0.16673257100057581, -0.1491817740531467, -0.13163097710571758,
    -0.11408018015828869, -0.096529383210859576, -0.078978586263430683,
    -0.061427789316001569, -0.043876992368572676, -0.026326195421143561,
    -0.0087753984737146684, 0.0087753984737146684, 0.026326195421143561,
    0.043876992368572676, 0.061427789316001569, 0.078978586263430683,
    0.096529383210859576, 0.11408018015828869, 0.13163097710571758,
    0.1491817740531467, 0.16673257100057581, 0.18428336794800471,
    0.20183416489543382, 0.21938496184286271, 0.23693575879029183,
    0.25448655573772072, 0.27203735268514984, 0.28958814963257873,
    0.30713894658000784, 0.32468974352743674, 0.34224054047486585,
    0.35979133742229474, 0.37734213436972386, 0.39489293131715275,
    0.41244372826458187, 0.42999452521201076, 0.44754532215943987,
    0.465096119106869, 0.48264691605429788, 0.500197713001727,
    0.51774850994915589, 0.535299306896585, 0.5528501038440139,
    0.570400900791443, 0.5879516977388719, 0.605502494686301, 0.62305329163373,
    0.640604088581159, 0.658154885528588, 0.675705682476017, 0.693256479423446,
    0.710807276370875, 0.728358073318304, 0.745908870265733, 0.763459667213162,
    0.78101046416059106, 0.79856126110802006, 0.81611205805544906,
    0.83366285500287807, 0.85121365195030707, 0.86876444889773619,
    0.88631524584516519, 0.90386604279259419, 0.9214168397400232,
    0.9389676366874522, 0.9565184336348812, 0.97406923058231021,
    0.99162002752973921, 1.0091708244771682, 1.0267216214245973,
    1.0442724183720262, 1.0618232153194551, 1.0793740122668842,
    1.0969248092143133, 1.1144756061617422, 1.1320264031091714,
    1.1495772000566002, 1.1671279970040294, 1.1846787939514583,
    1.2022295908988874, 1.2197803878463165, 1.2373311847937454,
    1.2548819817411743, 1.2724327786886034, 1.2899835756360325,
    1.3075343725834614, 1.3250851695308903, 1.3426359664783194,
    1.3601867634257485, 1.3777375603731774, 1.3952883573206065,
    1.4128391542680354, 1.4303899512154645, 1.4479407481628934,
    1.4654915451103225, 1.4830423420577514, 1.5005931390051805,
    1.5181439359526094, 1.5356947329000386, 1.5532455298474674,
    1.5707963267948966 };

  real32_T ranges;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S9>/In1'
  //   MATLABSystem: '<S5>/SourceBlock'

  varargout_1 = Sub_objectDetector_19.getLatestMessage
    (&objectDetector_B.varargout_2_m);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S9>/Enable'

  if (varargout_1) {
    objectDetector_B.In1_n = objectDetector_B.varargout_2_m;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S2>/Constant'

  objectDetector_B.BusAssignment = objectDetector_P.Constant_Value_m;
  objectDetector_B.BusAssignment.Header.Stamp = objectDetector_B.In1_n.Clock_;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S8>/In1'
  //   MATLABSystem: '<S4>/SourceBlock'

  varargout_1 = Sub_objectDetector_4.getLatestMessage
    (&objectDetector_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S8>/Enable'

  if (varargout_1) {
    objectDetector_B.In1 = objectDetector_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/angles_and_dists'
  //  this function transforms the laser scan into cartesian coordinates, so
  //  that you can use other tools to group them together, make an image, etc.
  // MATLAB Function 'angles_and_dists': '<S6>:1'
  // '<S6>:1:7' angleMin = AngleMin;
  // '<S6>:1:8' angleMax = AngleMax;
  // '<S6>:1:9' angleIncrement = AngleIncrement;
  // '<S6>:1:10' timeIncrement = TimeIncrement;
  // '<S6>:1:11' rangeMin = RangeMin;
  // '<S6>:1:12' rangeMax = RangeMax;
  // '<S6>:1:13' ranges = Ranges;
  // '<S6>:1:14' ranges(ranges>RangeMax) = NaN;
  // '<S6>:1:15' ranges(ranges<RangeMin) = NaN;
  // rangesLength = scan.Ranges_SL_Info.ReceivedLength;
  // intensities = scan.Intensities;
  // '<S6>:1:18' flag = 1;
  flag = 1;

  // '<S6>:1:19' dists = zeros(180, 1);
  for (tmp = 0; tmp < 180; tmp++) {
    objectDetector_B.angles[tmp] = tmp_0[tmp];
    ranges = objectDetector_B.In1.Ranges[tmp];
    if (objectDetector_B.In1.Ranges[tmp] > objectDetector_B.In1.RangeMax) {
      ranges = (rtNaNF);
    }

    if (ranges < objectDetector_B.In1.RangeMin) {
      ranges = (rtNaNF);
    }

    objectDetector_B.dists[tmp] = 0.0;
    objectDetector_B.ranges[tmp] = ranges;
  }

  //  for i = 1:180
  //      if(ranges(i) == 80)
  //          dists(i) = 0;
  //      else
  //          dists(i) = ranges(i)+2;
  //      end
  //  end
  // '<S6>:1:27' tmp = 0;
  tmp = -1;

  // '<S6>:1:28' for i = 1 : 180
  // '<S6>:1:41' angles = [-pi/2:pi/179:pi/2]';
  // dists = [tmp];
  // MATLAB Function ' 2position': '<S1>:1'
  // '<S1>:1:4' xx = dists.*cos(angles);
  for (i = 0; i < 180; i++) {
    // '<S6>:1:29' if(ranges(i) ~= 80.0 && flag == 1)
    if ((objectDetector_B.ranges[i] != 80.0F) && (flag == 1)) {
      // '<S6>:1:30' dists(i) = ranges(i);
      objectDetector_B.dists[i] = objectDetector_B.ranges[i];

      // '<S6>:1:31' tmp = i;
      tmp = i;

      // '<S6>:1:32' flag = 0;
      flag = 0;
    } else if (objectDetector_B.ranges[i] == 80.0F) {
      // '<S6>:1:33' elseif(ranges(i) == 80.0)
      // '<S6>:1:34' flag = 1;
      flag = 1;

      // '<S6>:1:35' dists(i) = 0;
      objectDetector_B.dists[i] = 0.0;
    } else {
      // '<S6>:1:36' else
      // '<S6>:1:37' dists(tmp) = (dists(tmp) + ranges(i))/2;
      objectDetector_B.dists[tmp] = ((real32_T)objectDetector_B.dists[tmp] +
        objectDetector_B.ranges[i]) / 2.0F;

      // '<S6>:1:38' dists(i) = 0;
      objectDetector_B.dists[i] = 0.0;
    }

    // MATLAB Function: '<Root>/ 2position'
    objectDetector_B.yc[i] = objectDetector_B.angles[i];
  }

  // End of MATLAB Function: '<Root>/angles_and_dists'
  // '<S1>:1:5' yy = dists.*sin(angles);
  //  flag = 1;
  //  tmp = 0;
  //  for i = 1 : 180
  //      if(xx(i) ~= 0 && flag == 1)
  //          tmp = i;
  //          flag = 0;
  //      elseif(xx(i) == 0)
  //          flag = 1;
  //      else
  //          xx(tmp) = (xx(tmp) + xx(i))/2;
  //          yy(tmp) = (yy(tmp) + yy(i))/2;
  //          xx(i) = 0;
  //          yy(i) = 0;
  //      end
  //  end
  //  the sequence of the message must increment each time we publish, so we
  //  need it to be persistent across instantiations
  // MATLAB Function 'box_detection': '<S7>:1'
  // '<S7>:1:5' xc = zeros(180, 1);
  // '<S7>:1:6' yc = zeros(180, 1);
  for (flag = 0; flag < 180; flag++) {
    // MATLAB Function: '<Root>/ 2position'
    objectDetector_B.xx[flag] = objectDetector_B.dists[flag] * cos
      (objectDetector_B.yc[flag]);
    objectDetector_B.dists[flag] *= sin(objectDetector_B.angles[flag]);
    objectDetector_B.yc[flag] = 0.0;

    // MATLAB Function: '<Root>/box_detection'
    objectDetector_B.angles[flag] = 0.0;
  }

  // MATLAB Function: '<Root>/box_detection'
  // '<S7>:1:7' k = 1;
  k = 1.0;

  // '<S7>:1:8' for i = 1:180
  for (i = 0; i < 180; i++) {
    // '<S7>:1:9' if(x_(i) ~= 0)
    if (objectDetector_B.xx[i] != 0.0) {
      // '<S7>:1:10' xc(k) = x_(i);
      objectDetector_B.angles[(int32_T)k - 1] = objectDetector_B.xx[i];

      // '<S7>:1:11' yc(k) = y_(i);
      objectDetector_B.yc[(int32_T)k - 1] = objectDetector_B.dists[i];

      // '<S7>:1:12' k = k + 1;
      k++;
    }
  }

  // '<S7>:1:15' xk = zeros(k, 1);
  // '<S7>:1:16' yk = zeros(k, 1);
  // '<S7>:1:17' for j = 1:k
  for (flag = 0; flag < (int32_T)k; flag++) {
    // '<S7>:1:18' xk(j) = xc(j);
    objectDetector_B.xk_data[flag] = objectDetector_B.angles[flag];

    // '<S7>:1:19' yk(j) = yc(j);
    objectDetector_B.yk_data[flag] = objectDetector_B.yc[flag];
  }

  //  if this is the first time our model is run, then 'seq' will not exist.
  //  Then 'isempty(seq)' will be true, which allows us to intialize it to 0
  // '<S7>:1:26' if isempty(seq)
  //  increment the sequence number
  // '<S7>:1:31' seq = seq+1;
  id = objectDetector_DW.seq + /*MW:OvSatOk*/ 1U;
  if (id < objectDetector_DW.seq) {
    id = MAX_uint32_T;
  }

  objectDetector_DW.seq = id;

  //  set our output to be a copy of the input (blankMsg)
  // '<S7>:1:33' outputMsg = blankMsg;
  //  these points in (x,y,z) are either taken from the inputs, or hardcoded
  // '<S7>:1:35' z = single(0);
  //  by definition in this block, we are making a square.
  //  IF YOU USE THIS model as inspiration for an output detection that is a
  //  pentagon, then you would set the length to be 5, for example.
  // '<S7>:1:39' outputMsg.Polygon.Points_SL_Info.CurrentLength = uint32(4);
  objectDetector_B.BusAssignment.Polygon.Points_SL_Info.CurrentLength = 4U;

  //  set the frame to be relative to our base of 0. If you want to use data
  //  coming from another detection, then you can set the /detections to be in
  //  the frame of that specific sensor
  // '<S7>:1:43' str = 'catvehicle/odom';
  //  initialize the header and set its values
  // '<S7>:1:45' strLength = length(str);
  // '<S7>:1:46' outputMsg.Header.Seq = seq;
  objectDetector_B.BusAssignment.Header.Seq = objectDetector_DW.seq;

  // '<S7>:1:47' outputMsg.Header.FrameId(1:strLength) = str;
  for (flag = 0; flag < 15; flag++) {
    objectDetector_B.BusAssignment.Header.FrameId[flag] = b[flag];
  }

  // '<S7>:1:48' outputMsg.Header.FrameId_SL_Info.CurrentLength = uint32(strLength); 
  objectDetector_B.BusAssignment.Header.FrameId_SL_Info.CurrentLength = 15U;

  // '<S7>:1:49' if(mod(seq,k) ~= 0)
  if (objectDetector_mod(objectDetector_DW.seq, k) != 0U) {
    // '<S7>:1:50' id = mod(seq,k);
    id = objectDetector_mod(objectDetector_DW.seq, k);
  } else {
    // '<S7>:1:51' else
    // '<S7>:1:52' id = uint32(k);
    k = rt_roundd_snf(k);
    if (k < 4.294967296E+9) {
      id = (uint32_T)k;
    } else {
      id = MAX_uint32_T;
    }
  }

  // '<S7>:1:54' if(yk(id) < 0)
  if (objectDetector_B.yk_data[(int32_T)id - 1] < 0.0) {
    // '<S7>:1:55' xtmp = xk(id) + 2;
    k = objectDetector_B.xk_data[(int32_T)id - 1] + 2.0;

    // '<S7>:1:56' ytmp = yk(id) + 2;
    ytmp = objectDetector_B.yk_data[(int32_T)id - 1] + 2.0;
  } else if ((objectDetector_B.yk_data[(int32_T)id - 1] < 1.0) &&
             (objectDetector_B.yk_data[(int32_T)id - 1] > 0.0)) {
    // '<S7>:1:57' elseif(yk(id) < 1 && yk(id) > 0)
    // '<S7>:1:58' xtmp = xk(id) + 1;
    k = objectDetector_B.xk_data[(int32_T)id - 1] + 1.0;

    // '<S7>:1:59' ytmp = yk(id);
    ytmp = objectDetector_B.yk_data[(int32_T)id - 1];
  } else {
    // '<S7>:1:60' else
    // '<S7>:1:61' xtmp = xk(id)+1;
    k = objectDetector_B.xk_data[(int32_T)id - 1] + 1.0;

    // '<S7>:1:62' ytmp = yk(id)+1;
    ytmp = objectDetector_B.yk_data[(int32_T)id - 1] + 1.0;
  }

  //  populate point 1
  // '<S7>:1:65' outputMsg.Polygon.Points(1).X = floor(single(xtmp));
  objectDetector_B.BusAssignment.Polygon.Points[0].X = (real32_T)floor((real_T)
    (real32_T)k);

  // '<S7>:1:66' outputMsg.Polygon.Points(1).Y = floor(single(ytmp));
  objectDetector_B.BusAssignment.Polygon.Points[0].Y = (real32_T)floor((real_T)
    (real32_T)ytmp);

  // '<S7>:1:67' outputMsg.Polygon.Points(1).Z = z;
  objectDetector_B.BusAssignment.Polygon.Points[0].Z = 0.0F;

  //  populate point 2
  // '<S7>:1:70' outputMsg.Polygon.Points(2).X = floor(single(xtmp));
  objectDetector_B.BusAssignment.Polygon.Points[1].X = (real32_T)floor((real_T)
    (real32_T)k);

  // '<S7>:1:71' outputMsg.Polygon.Points(2).Y = ceil(single(ytmp));
  objectDetector_B.BusAssignment.Polygon.Points[1].Y = (real32_T)ceil((real_T)
    (real32_T)ytmp);

  // '<S7>:1:72' outputMsg.Polygon.Points(2).Z = z;
  objectDetector_B.BusAssignment.Polygon.Points[1].Z = 0.0F;

  //  populate point 3
  // '<S7>:1:75' outputMsg.Polygon.Points(3).X = ceil(single(xtmp));
  objectDetector_B.BusAssignment.Polygon.Points[2].X = (real32_T)ceil((real_T)
    (real32_T)k);

  // '<S7>:1:76' outputMsg.Polygon.Points(3).Y = ceil(single(ytmp));
  objectDetector_B.BusAssignment.Polygon.Points[2].Y = (real32_T)ceil((real_T)
    (real32_T)ytmp);

  // '<S7>:1:77' outputMsg.Polygon.Points(3).Z = z;
  objectDetector_B.BusAssignment.Polygon.Points[2].Z = 0.0F;

  //  populate point 4
  // '<S7>:1:80' outputMsg.Polygon.Points(4).X = ceil(single(xtmp));
  objectDetector_B.BusAssignment.Polygon.Points[3].X = (real32_T)ceil((real_T)
    (real32_T)k);

  // '<S7>:1:81' outputMsg.Polygon.Points(4).Y = floor(single(ytmp));
  objectDetector_B.BusAssignment.Polygon.Points[3].Y = (real32_T)floor((real_T)
    (real32_T)ytmp);

  // '<S7>:1:82' outputMsg.Polygon.Points(4).Z = z;
  objectDetector_B.BusAssignment.Polygon.Points[3].Z = 0.0F;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   MATLABSystem: '<S3>/SinkBlock'

  //  note that the polygon type "closes" between the last and first points
  Pub_objectDetector_16.publish(&objectDetector_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish1'
}

// Model initialize function
void objectDetector_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(objectDetector_M, (NULL));

  // block I/O
  (void) memset(((void *) &objectDetector_B), 0,
                sizeof(B_objectDetector_T));

  // states (dwork)
  (void) memset((void *)&objectDetector_DW, 0,
                sizeof(DW_objectDetector_T));

  {
    static const char_T tmp[11] = { '/', 'd', 'e', 't', 'e', 'c', 't', 'i', 'o',
      'n', 's' };

    static const char_T tmp_0[30] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'f', 'r', 'o', 'n', 't', '_', 'l', 'a', 's', 'e', 'r',
      '_', 'p', 'o', 'i', 'n', 't', 's' };

    static const char_T tmp_1[6] = { '/', 'c', 'l', 'o', 'c', 'k' };

    char_T tmp_2[12];
    char_T tmp_3[31];
    char_T tmp_4[7];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S5>/SourceBlock'
    objectDetector_DW.obj_m.isInitialized = 0;
    objectDetector_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_4[i] = tmp_1[i];
    }

    tmp_4[6] = '\x00';
    Sub_objectDetector_19.createSubscriber(tmp_4, objectDetector_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    objectDetector_DW.obj_my.isInitialized = 0;
    objectDetector_DW.obj_my.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      tmp_3[i] = tmp_0[i];
    }

    tmp_3[30] = '\x00';
    Sub_objectDetector_4.createSubscriber(tmp_3, objectDetector_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    objectDetector_DW.obj.isInitialized = 0;
    objectDetector_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_2[i] = tmp[i];
    }

    tmp_2[11] = '\x00';
    Pub_objectDetector_16.createPublisher(tmp_2, objectDetector_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S9>/Out1'
    objectDetector_B.In1_n = objectDetector_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S8>/Out1'
    objectDetector_B.In1 = objectDetector_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for MATLAB Function: '<Root>/box_detection'
    // '<S7>:1:27' seq=uint32(0);
    objectDetector_DW.seq = 0U;
  }
}

// Model terminate function
void objectDetector_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SourceBlock'

  if (objectDetector_DW.obj_m.isInitialized == 1) {
    objectDetector_DW.obj_m.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SourceBlock'

  if (objectDetector_DW.obj_my.isInitialized == 1) {
    objectDetector_DW.obj_my.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SinkBlock'

  if (objectDetector_DW.obj.isInitialized == 1) {
    objectDetector_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
