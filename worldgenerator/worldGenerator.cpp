//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: worldGenerator.cpp
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
#include "worldGenerator.h"
#include "worldGenerator_private.h"
#define worldGenerator_MessageQueueLen (1)

// Block signals (auto storage)
B_worldGenerator_T worldGenerator_B;

// Block states (auto storage)
DW_worldGenerator_T worldGenerator_DW;

// Real-time model
RT_MODEL_worldGenerator_T worldGenerator_M_;
RT_MODEL_worldGenerator_T *const worldGenerator_M = &worldGenerator_M_;

// Forward declaration for local functions
static int8_T worldGenerator_filedata(void);
static real_T worldGenerator_fileManager(void);
static real_T worldGenerator_fopen(void);
static void worldGenerator_fileManager_i(real_T varargin_1, FILE * *f, boolean_T
  *a);
static int32_T worldGenerator_cfprintf(real_T fileID);
static int32_T worldGenerator_cfprintf_j(real_T fileID);
static int32_T worldGenerator_cfprintf_jz(real_T fileID);
static int32_T worldGenerator_cfprintf_jzm(real_T fileID);
static int32_T worldGenerator_cfprintf_jzm3(real_T fileID);
static int32_T worldGenerator_cfprintf_jzm3p(real_T fileID);
static int32_T worldGenerator_cfprintf_jzm3pq(real_T fileID);
static int32_T worldGenerator_cfprintf_jzm3pqu(real_T fileID);
static int32_T worldGenerato_cfprintf_jzm3pquv(real_T fileID);
static int32_T worldGenerat_cfprintf_jzm3pquva(real_T fileID);
static int32_T worldGenera_cfprintf_jzm3pquvai(real_T fileID);
static int32_T worldGener_cfprintf_jzm3pquvai5(real_T fileID);
static int32_T worldGene_cfprintf_jzm3pquvai5o(real_T fileID);
static int32_T worldGen_cfprintf_jzm3pquvai5ov(real_T fileID);
static int32_T worldGe_cfprintf_jzm3pquvai5ovv(real_T fileID);
static int32_T worldG_cfprintf_jzm3pquvai5ovv5(real_T fileID);
static int32_T worldG_cfprintf_d(real_T fileID);
static int32_T worldG_cfprintf_a(real_T fileID);
static int32_T worldG_cfprintf_n(real_T fileID);
static int32_T worldG_cfprintf_g(real_T fileID);
static int32_T worldG_cfprintf_j(real_T fileID);
static int32_T worldG_cfprintf_nd(real_T fileID);
static int32_T worldG_cfprintf_aa(real_T fileID);
static int32_T worldG_cfprintf_b(real_T fileID);
static int32_T worldG_cfprintf_i(real_T fileID);
static int32_T worldG_cfprintf_c(real_T fileID);
static int32_T worldG_cfprintf_nj(real_T fileID);
static int32_T worldG_cfprintf_k(real_T fileID);
static int32_T worldG_cfprintf_l(real_T fileID);
static int32_T worldG_cfprintf_aam(real_T fileID);
static int32_T worldG_cfprintf_j2(real_T fileID);
static int32_T worldG_cfprintf_h(real_T fileID);
static int32_T worldG_cfprintf_f(real_T fileID);
static int32_T worldG_cfprintf_nd1(real_T fileID);
static int32_T worldG_cfprintf_dm(real_T fileID);
static int32_T worldG_cfprintf_g3(real_T fileID);
static int32_T worldG_cfprintf_kl(real_T fileID);
static int32_T worldG_cfprintf_iu(real_T fileID);
static int32_T worldG_cfprintf_ne(real_T fileID);
static int32_T worldG_cfprintf_o(real_T fileID);
static int32_T worldG_cfprintf_iuw(real_T fileID);
static int32_T worldG_cfprintf_hi(real_T fileID);
static int32_T worldG_cfprintf_ld(real_T fileID);
static int32_T worldG_cfprintf_cb(real_T fileID);
static int32_T worldG_cfprintf_jf(real_T fileID);
static int32_T worldG_cfprintf_hb(real_T fileID);
static int32_T worldG_cfprintf_ox(real_T fileID);
static int32_T worldG_cfprintf_dn(real_T fileID);
static int32_T worldG_cfprintf_gx(real_T fileID);
static int32_T worldG_cfprintf_d3(real_T fileID);
static int32_T worldG_cfprintf_ie(real_T fileID);
static int32_T worldG_cfprintf_ib(real_T fileID);
static int32_T worldG_cfprintf_iq(real_T fileID);
static int32_T worldG_cfprintf_l0(real_T fileID);
static int32_T worldG_cfprintf_o4(real_T fileID);
static int32_T worldG_cfprintf_f4(real_T fileID);
static int32_T worldG_cfprintf_jp(real_T fileID);
static int32_T worldG_cfprintf_klq(real_T fileID);
static int32_T worldG_cfprintf_lf(real_T fileID);
static int32_T worldG_cfprintf_nx(real_T fileID);
static int32_T worldG_cfprintf_ol(real_T fileID);
static int32_T worldG_cfprintf_e(real_T fileID);
static int32_T worldG_cfprintf_fy(real_T fileID);
static int32_T worldG_cfprintf_p(real_T fileID);
static int32_T worldG_cfprintf_cl(real_T fileID);
static int32_T worldG_cfprintf_p1(real_T fileID);
static int32_T worldG_cfprintf_dmo(real_T fileID);
static int32_T worldG_cfprintf_kd(real_T fileID);
static int32_T worldG_cfprintf_li(real_T fileID);
static int32_T worldG_cfprintf_ga(real_T fileID);
static int32_T worldG_cfprintf_nz(real_T fileID);
static int32_T worldG_cfprintf_o5(real_T fileID);
static int32_T worldG_cfprintf_no(real_T fileID);
static int32_T worldG_cfprintf_pq(real_T fileID);
static int32_T worldG_cfprintf_c0(real_T fileID);
static int32_T worldG_cfprintf_ip(real_T fileID);
static int32_T worldG_cfprintf_pp(real_T fileID);
static int32_T worldG_cfprintf_pv(real_T fileID);
static int32_T worldG_cfprintf_cw(real_T fileID);
static int32_T worldG_cfprintf_od(real_T fileID);
static int32_T worldG_cfprintf_g0(real_T fileID);
static int32_T worldG_cfprintf_jfk(real_T fileID);
static int32_T worldG_cfprintf_gw(real_T fileID);
static int32_T worldG_cfprintf_ll(real_T fileID);
static int32_T worldG_cfprintf_mz(real_T fileID);
static int32_T worldG_cfprintf_im(real_T fileID);
static int32_T worldG_cfprintf_lx(real_T fileID);
static int32_T worldG_cfprintf_mx(real_T fileID);
static int32_T worldG_cfprintf_ad(real_T fileID);
static int32_T worldG_cfprintf_gz(real_T fileID);
static int32_T worldG_cfprintf_gs(real_T fileID);
static int32_T worldG_cfprintf_kp(real_T fileID);
static int32_T worldGenerator_fileManager_ik(void);
static void worldGenerator_fclose(void);
static int32_T worldG_cfprintf_i3(real_T fileID);
static int32_T worldG_cfprintf_h4(real_T fileID, int8_T varargin_1);
static int32_T worldG_cfprintf_he(real_T fileID);
static int32_T worldG_cfprintf_kj(real_T fileID);
static int32_T worldG_cfprintf_dx(real_T fileID, real_T varargin_1);
static int32_T worldG_cfprintf_iu2(real_T fileID);
static int32_T worldG_cfprintf_js(real_T fileID, real_T varargin_1);
static int32_T worldG_cfprintf_al(real_T fileID);
static int32_T worldG_cfprintf_dw(real_T fileID);
static int32_T worldG_cfprintf_als(real_T fileID);
static int32_T worldG_cfprintf_dxl(real_T fileID);
static int32_T worldG_cfprintf_p3(real_T fileID);
static int32_T worldG_cfprintf_ge(real_T fileID);
static int32_T worldG_cfprintf_oc(real_T fileID);
static int32_T worldG_cfprintf_kg(real_T fileID);
static int32_T worldG_cfprintf_ny(real_T fileID);
static int32_T worldG_cfprintf_f3(real_T fileID);
static int32_T worldG_cfprintf_gp(real_T fileID);
static int32_T worldG_cfprintf_ej(real_T fileID);
static int32_T worldG_cfprintf_ly(real_T fileID);
static int32_T worldG_cfprintf_ev(real_T fileID);
static int32_T worldG_cfprintf_eq(real_T fileID);
static int32_T worldG_cfprintf_a5(real_T fileID);
static int32_T worldG_cfprintf_lw(real_T fileID);
static int32_T worldG_cfprintf_pl(real_T fileID);
static int32_T worldG_cfprintf_cn(real_T fileID);
static int32_T worldG_cfprintf_gn(real_T fileID);
static int32_T worldG_cfprintf_kr(real_T fileID);
static int32_T worldG_cfprintf_j0(real_T fileID);
static int32_T worldG_cfprintf_j1(real_T fileID);
static int32_T worldG_cfprintf_fvz(real_T fileID);
static int32_T worldG_cfprintf_n2(real_T fileID);
static int32_T worldG_cfprintf_k4(real_T fileID);
static int32_T worldG_cfprintf_aly(real_T fileID);
static int32_T worldG_cfprintf_fw(real_T fileID);
static int32_T worldG_cfprintf_i1(real_T fileID);
static int32_T worldG_cfprintf_ndp(real_T fileID);
static int32_T worldG_cfprintf_dk(real_T fileID);
static int32_T worldG_cfprintf_ln(real_T fileID);
static int32_T worldG_cfprintf_fa(real_T fileID);
static int32_T worldG_cfprintf_je(real_T fileID);
static int32_T worldG_cfprintf_eu(real_T fileID);
static int32_T worldG_cfprintf_aab(real_T fileID);
static int32_T worldG_cfprintf_hto(real_T fileID);
static int32_T worldG_cfprintf_mw(real_T fileID);
static int32_T worldG_cfprintf_ms(real_T fileID);
static int32_T worldG_cfprintf_eqk(real_T fileID);
static int32_T worldG_cfprintf_ap(real_T fileID);
static int32_T worldG_cfprintf_pv3(real_T fileID);
static int32_T worldG_cfprintf_pj(real_T fileID);
static int32_T worldG_cfprintf_kz(real_T fileID);
static int32_T worldG_cfprintf_k34(real_T fileID);
static int32_T worldG_cfprintf_fv(real_T fileID);
static int32_T worldG_cfprintf_m4(real_T fileID);
static int32_T worldG_cfprintf_an(real_T fileID);
static int32_T worldG_cfprintf_hl(real_T fileID);
static int32_T worldG_cfprintf_de(real_T fileID);
static int32_T worldG_cfprintf_b4(real_T fileID);
static int32_T worldG_cfprintf_fc(real_T fileID);
static int32_T worldG_cfprintf_ht(real_T fileID);
static int32_T worldG_cfprintf_clc(real_T fileID);
static int32_T worldG_cfprintf_is(real_T fileID);
static int32_T worldG_cfprintf_k3(real_T fileID);
static int32_T worldG_cfprintf_af(real_T fileID);
static int32_T worldG_cfprintf_g2(real_T fileID);
static int32_T worldG_cfprintf_aj(real_T fileID);
static int32_T worldG_cfprintf_gd(real_T fileID);
static int32_T worldG_cfprintf_m(real_T fileID);
static int32_T worldG_cfprintf_by(real_T fileID);
static int32_T worldG_cfprintf_k1(real_T fileID);
static int32_T worldG_cfprintf_pp5(real_T fileID);

// Function for MATLAB Function: '<Root>/Generate_file'
static int8_T worldGenerator_filedata(void)
{
  int8_T f;
  int8_T k;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 21)) {
    if (worldGenerator_DW.eml_openfiles[k - 1] == NULL) {
      f = k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static real_T worldGenerator_fileManager(void)
{
  int8_T fileid;
  int8_T j;
  FILE * filestar;
  static const char_T b[20] = { 'g', 'a', 'z', 'e', 'b', 'o', '_', 'o', 'u', 't',
    'p', 'u', 't', '.', 'w', 'o', 'r', 'l', 'd', '\x00' };

  char_T c[4];
  int32_T i;
  fileid = -1;
  j = worldGenerator_filedata();
  if (!(j < 1)) {
    for (i = 0; i < 20; i++) {
      worldGenerator_B.b[i] = b[i];
    }

    c[0] = 'w';
    c[1] = 'b';
    c[2] = '+';
    c[3] = '\x00';
    filestar = fopen(worldGenerator_B.b, c);
    if (filestar != NULL) {
      worldGenerator_DW.eml_openfiles[j - 1] = filestar;
      worldGenerator_DW.eml_autoflush[j - 1] = true;
      i = j + 2;
      if (i > 127) {
        i = 127;
      }

      fileid = (int8_T)i;
    }
  }

  return fileid;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static real_T worldGenerator_fopen(void)
{
  return worldGenerator_fileManager();
}

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

// Function for MATLAB Function: '<Root>/Generate_file'
static void worldGenerator_fileManager_i(real_T varargin_1, FILE * *f, boolean_T
  *a)
{
  int8_T fileid;
  fileid = (int8_T)rt_roundd_snf(varargin_1);
  if ((fileid > 22) || (fileid < 0) || (varargin_1 != fileid)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    fileid = (int8_T)(fileid - 2);
    *f = worldGenerator_DW.eml_openfiles[fileid - 1];
    *a = worldGenerator_DW.eml_autoflush[fileid - 1];
  } else {
    switch (fileid) {
     case 0:
      *f = stdin;
      *a = true;
      break;

     case 1:
      *f = stdout;
      *a = true;
      break;

     case 2:
      *f = stderr;
      *a = true;
      break;

     default:
      *f = NULL;
      *a = true;
      break;
    }
  }
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[21] = { '<', 's', 'd', 'f', ' ', 'v', 'e', 'r', 's',
    'i', 'o', 'n', '=', '\'', '1', '.', '4', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_j(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[24] = { '<', 'w', 'o', 'r', 'l', 'd', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'd', 'e', 'f', 'a', 'u', 'l', 't', '\'', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_jz(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[39] = { '<', 'l', 'i', 'g', 'h', 't', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 's', 'u', 'n', '\'', ' ', 't', 'y', 'p', 'e', '=', '\'',
    'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 'a', 'l', '\'', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_jzm(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[32] = { '<', 'c', 'a', 's', 't', '_', 's', 'h', 'a',
    'd', 'o', 'w', 's', '>', '1', '<', '/', 'c', 'a', 's', 't', '_', 's', 'h',
    'a', 'd', 'o', 'w', 's', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_jzm3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[28] = { '<', 'p', 'o', 's', 'e', '>', '0', ' ', '0',
    ' ', '1', '0', ' ', '0', ' ', '-', '0', ' ', '0', '<', '/', 'p', 'o', 's',
    'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_jzm3p(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[34] = { '<', 'd', 'i', 'f', 'f', 'u', 's', 'e', '>',
    '0', '.', '8', ' ', '0', '.', '8', ' ', '0', '.', '8', ' ', '1', '<', '/',
    'd', 'i', 'f', 'f', 'u', 's', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_jzm3pq(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[36] = { '<', 's', 'p', 'e', 'c', 'u', 'l', 'a', 'r',
    '>', '0', '.', '2', ' ', '0', '.', '2', ' ', '0', '.', '2', ' ', '1', '<',
    '/', 's', 'p', 'e', 'c', 'u', 'l', 'a', 'r', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_cfprintf_jzm3pqu(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { '<', 'a', 't', 't', 'e', 'n', 'u', 'a', 't',
    'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerato_cfprintf_jzm3pquv(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[21] = { '<', 'r', 'a', 'n', 'g', 'e', '>', '1', '0',
    '0', '0', '<', '/', 'r', 'a', 'n', 'g', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerat_cfprintf_jzm3pquva(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { '<', 'c', 'o', 'n', 's', 't', 'a', 'n', 't',
    '>', '0', '.', '9', '<', '/', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenera_cfprintf_jzm3pquvai(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[23] = { '<', 'l', 'i', 'n', 'e', 'a', 'r', '>', '0',
    '.', '0', '1', '<', '/', 'l', 'i', 'n', 'e', 'a', 'r', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGener_cfprintf_jzm3pquvai5(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[30] = { '<', 'q', 'u', 'a', 'd', 'r', 'a', 't', 'i',
    'c', '>', '0', '.', '0', '0', '1', '<', '/', 'q', 'u', 'a', 'd', 'r', 'a',
    't', 'i', 'c', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGene_cfprintf_jzm3pquvai5o(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[16] = { '<', '/', 'a', 't', 't', 'e', 'n', 'u', 'a',
    't', 'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGen_cfprintf_jzm3pquvai5ov(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[38] = { '<', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o',
    'n', '>', '-', '0', '.', '5', ' ', '0', '.', '1', ' ', '-', '0', '.', '9',
    '<', '/', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGe_cfprintf_jzm3pquvai5ovv(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', '/', 'l', 'i', 'g', 'h', 't', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_jzm3pquvai5ovv5(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[29] = { '<', 'm', 'o', 'd', 'e', 'l', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'g', 'r', 'o', 'u', 'n', 'd', '_', 'p', 'l', 'a', 'n',
    'e', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_d(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[20] = { '<', 's', 't', 'a', 't', 'i', 'c', '>', '1',
    '<', '/', 's', 't', 'a', 't', 'i', 'c', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_a(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[20] = { '<', 'l', 'i', 'n', 'k', ' ', 'n', 'a', 'm',
    'e', '=', '\'', 'l', 'i', 'n', 'k', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_n(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[30] = { '<', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o',
    'n', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'c', 'o', 'l', 'l', 'i', 's', 'i',
    'o', 'n', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_g(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { '<', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_j(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[9] = { '<', 'p', 'l', 'a', 'n', 'e', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_nd(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[24] = { '<', 'n', 'o', 'r', 'm', 'a', 'l', '>', '0',
    ' ', '0', ' ', '1', '<', '/', 'n', 'o', 'r', 'm', 'a', 'l', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_aa(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[22] = { '<', 's', 'i', 'z', 'e', '>', '1', '0', '0',
    ' ', '1', '0', '0', '<', '/', 's', 'i', 'z', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_b(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', '/', 'p', 'l', 'a', 'n', 'e', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_i(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r',
    'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_c(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_nj(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { '<', 'f', 'r', 'i', 'c', 't', 'i', 'o', 'n',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_k(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[7] = { '<', 'o', 'd', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_l(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { '<', 'm', 'u', '>', '1', '0', '0', '<', '/',
    'm', 'u', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_aam(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { '<', 'm', 'u', '2', '>', '5', '0', '<', '/',
    'm', 'u', '2', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_j2(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[8] = { '<', '/', 'o', 'd', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_h(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { '<', '/', 'f', 'r', 'i', 'c', 't', 'i', 'o',
    'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_f(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', 'b', 'o', 'u', 'n', 'c', 'e', '/', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_nd1(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', 'c', 'o', 'n', 't', 'a', 'c', 't', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dm(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[8] = { '<', 'o', 'd', 'e', '/', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_g3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { '<', '/', 'c', 'o', 'n', 't', 'a', 'c', 't',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kl(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { '<', '/', 's', 'u', 'r', 'f', 'a', 'c', 'e',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_iu(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[33] = { '<', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't',
    'a', 'c', 't', 's', '>', '1', '0', '<', '/', 'm', 'a', 'x', '_', 'c', 'o',
    'n', 't', 'a', 'c', 't', 's', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ne(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { '<', '/', 'c', 'o', 'l', 'l', 'i', 's', 'i',
    'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_o(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[24] = { '<', 'v', 'i', 's', 'u', 'a', 'l', ' ', 'n',
    'a', 'm', 'e', '=', '\'', 'v', 'i', 's', 'u', 'a', 'l', '\'', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_iuw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[32] = { '<', 'c', 'a', 's', 't', '_', 's', 'h', 'a',
    'd', 'o', 'w', 's', '>', '0', '<', '/', 'c', 'a', 's', 't', '_', 's', 'h',
    'a', 'd', 'o', 'w', 's', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_hi(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { '<', 'm', 'a', 't', 'e', 'r', 'i', 'a', 'l',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ld(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', 's', 'c', 'r', 'i', 'p', 't', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_cb(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[59] = { '<', 'u', 'r', 'i', '>', 'f', 'i', 'l', 'e',
    ':', '/', '/', 'm', 'e', 'd', 'i', 'a', '/', 'm', 'a', 't', 'e', 'r', 'i',
    'a', 'l', 's', '/', 's', 'c', 'r', 'i', 'p', 't', 's', '/', 'g', 'a', 'z',
    'e', 'b', 'o', '.', 'm', 'a', 't', 'e', 'r', 'i', 'a', 'l', '<', '/', 'u',
    'r', 'i', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_jf(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { '<', 'n', 'a', 'm', 'e', '>', 'G', 'a', 'z',
    'e', 'b', 'o', '/', 'G', 'r', 'e', 'y', '<', '/', 'n', 'a', 'm', 'e', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_hb(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', '/', 's', 'c', 'r', 'i', 'p', 't', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ox(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { '<', '/', 'm', 'a', 't', 'e', 'r', 'i', 'a',
    'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dn(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', '/', 'v', 'i', 's', 'u', 'a', 'l', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gx(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { '<', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y',
    '_', 'd', 'e', 'c', 'a', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_d3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[20] = { '<', 'l', 'i', 'n', 'e', 'a', 'r', '>', '0',
    '<', '/', 'l', 'i', 'n', 'e', 'a', 'r', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ie(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[22] = { '<', 'a', 'n', 'g', 'u', 'l', 'a', 'r', '>',
    '0', '<', '/', 'a', 'n', 'g', 'u', 'l', 'a', 'r', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ib(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[19] = { '<', '/', 'v', 'e', 'l', 'o', 'c', 'i', 't',
    'y', '_', 'd', 'e', 'c', 'a', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_iq(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[32] = { '<', 's', 'e', 'l', 'f', '_', 'c', 'o', 'l',
    'l', 'i', 'd', 'e', '>', '0', '<', '/', 's', 'e', 'l', 'f', '_', 'c', 'o',
    'l', 'l', 'i', 'd', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_l0(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { '<', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i',
    'c', '>', '0', '<', '/', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_o4(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[22] = { '<', 'g', 'r', 'a', 'v', 'i', 't', 'y', '>',
    '1', '<', '/', 'g', 'r', 'a', 'v', 'i', 't', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_f4(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[9] = { '<', '/', 'l', 'i', 'n', 'k', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_jp(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', '/', 'm', 'o', 'd', 'e', 'l', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_klq(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[22] = { '<', 'p', 'h', 'y', 's', 'i', 'c', 's', ' ',
    't', 'y', 'p', 'e', '=', '\'', 'o', 'd', 'e', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_lf(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[38] = { '<', 'm', 'a', 'x', '_', 's', 't', 'e', 'p',
    '_', 's', 'i', 'z', 'e', '>', '0', '.', '0', '0', '1', '<', '/', 'm', 'a',
    'x', '_', 's', 't', 'e', 'p', '_', 's', 'i', 'z', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_nx(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[40] = { '<', 'r', 'e', 'a', 'l', '_', 't', 'i', 'm',
    'e', '_', 'f', 'a', 'c', 't', 'o', 'r', '>', '1', '<', '/', 'r', 'e', 'a',
    'l', '_', 't', 'i', 'm', 'e', '_', 'f', 'a', 'c', 't', 'o', 'r', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ol(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[53] = { '<', 'r', 'e', 'a', 'l', '_', 't', 'i', 'm',
    'e', '_', 'u', 'p', 'd', 'a', 't', 'e', '_', 'r', 'a', 't', 'e', '>', '1',
    '0', '0', '0', '<', '/', 'r', 'e', 'a', 'l', '_', 't', 'i', 'm', 'e', '_',
    'u', 'p', 'd', 'a', 't', 'e', '_', 'r', 'a', 't', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_e(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[29] = { '<', 'g', 'r', 'a', 'v', 'i', 't', 'y', '>',
    '0', ' ', '0', ' ', '-', '9', '.', '8', '<', '/', 'g', 'r', 'a', 'v', 'i',
    't', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_fy(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { '<', '/', 'p', 'h', 'y', 's', 'i', 'c', 's',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_p(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[9] = { '<', 's', 'c', 'e', 'n', 'e', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_cl(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[34] = { '<', 'a', 'm', 'b', 'i', 'e', 'n', 't', '>',
    '0', '.', '4', ' ', '0', '.', '4', ' ', '0', '.', '4', ' ', '1', '<', '/',
    'a', 'm', 'b', 'i', 'e', 'n', 't', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_p1(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[40] = { '<', 'b', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
    'n', 'd', '>', '0', '.', '7', ' ', '0', '.', '7', ' ', '0', '.', '7', ' ',
    '1', '<', '/', 'b', 'a', 'c', 'k', 'g', 'r', 'o', 'u', 'n', 'd', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dmo(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[22] = { '<', 's', 'h', 'a', 'd', 'o', 'w', 's', '>',
    '1', '<', '/', 's', 'h', 'a', 'd', 'o', 'w', 's', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kd(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', '/', 's', 'c', 'e', 'n', 'e', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_li(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[25] = { '<', 's', 'p', 'h', 'e', 'r', 'i', 'c', 'a',
    'l', '_', 'c', 'o', 'o', 'r', 'd', 'i', 'n', 'a', 't', 'e', 's', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ga(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[44] = { '<', 's', 'u', 'r', 'f', 'a', 'c', 'e', '_',
    'm', 'o', 'd', 'e', 'l', '>', 'E', 'A', 'R', 'T', 'H', '_', 'W', 'G', 'S',
    '8', '4', '<', '/', 's', 'u', 'r', 'f', 'a', 'c', 'e', '_', 'm', 'o', 'd',
    'e', 'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_nz(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[32] = { '<', 'l', 'a', 't', 'i', 't', 'u', 'd', 'e',
    '_', 'd', 'e', 'g', '>', '0', '<', '/', 'l', 'a', 't', 'i', 't', 'u', 'd',
    'e', '_', 'd', 'e', 'g', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_o5(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[34] = { '<', 'l', 'o', 'n', 'g', 'i', 't', 'u', 'd',
    'e', '_', 'd', 'e', 'g', '>', '0', '<', '/', 'l', 'o', 'n', 'g', 'i', 't',
    'u', 'd', 'e', '_', 'd', 'e', 'g', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_no(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { '<', 'e', 'l', 'e', 'v', 'a', 't', 'i', 'o',
    'n', '>', '0', '<', '/', 'e', 'l', 'e', 'v', 'a', 't', 'i', 'o', 'n', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pq(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[30] = { '<', 'h', 'e', 'a', 'd', 'i', 'n', 'g', '_',
    'd', 'e', 'g', '>', '0', '<', '/', 'h', 'e', 'a', 'd', 'i', 'n', 'g', '_',
    'd', 'e', 'g', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_c0(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { '<', '/', 's', 'p', 'h', 'e', 'r', 'i', 'c',
    'a', 'l', '_', 'c', 'o', 'o', 'r', 'd', 'i', 'n', 'a', 't', 'e', 's', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ip(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[30] = { '<', 's', 't', 'a', 't', 'e', ' ', 'w', 'o',
    'r', 'l', 'd', '_', 'n', 'a', 'm', 'e', '=', '\'', 'd', 'e', 'f', 'a', 'u',
    'l', 't', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pp(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[37] = { '<', 's', 'i', 'm', '_', 't', 'i', 'm', 'e',
    '>', '3', '4', '3', '7', ' ', '1', '6', '4', '0', '0', '0', '0', '0', '0',
    '<', '/', 's', 'i', 'm', '_', 't', 'i', 'm', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pv(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[39] = { '<', 'r', 'e', 'a', 'l', '_', 't', 'i', 'm',
    'e', '>', '3', '4', '9', '6', ' ', '3', '3', '1', '5', '0', '3', '4', '0',
    '5', '<', '/', 'r', 'e', 'a', 'l', '_', 't', 'i', 'm', 'e', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_cw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[45] = { '<', 'w', 'a', 'l', 'l', '_', 't', 'i', 'm',
    'e', '>', '1', '4', '9', '0', '9', '9', '6', '6', '6', '9', ' ', '5', '0',
    '0', '3', '7', '9', '6', '4', '3', '<', '/', 'w', 'a', 'l', 'l', '_', 't',
    'i', 'm', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_od(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[27] = { '<', 'p', 'o', 's', 'e', '>', '0', ' ', '0',
    ' ', '0', ' ', '0', ' ', '-', '0', ' ', '0', '<', '/', 'p', 'o', 's', 'e',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_g0(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[35] = { '<', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y',
    '>', '0', ' ', '0', ' ', '0', ' ', '0', ' ', '-', '0', ' ', '0', '<', '/',
    'v', 'e', 'l', 'o', 'c', 'i', 't', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_jfk(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[43] = { '<', 'a', 'c', 'c', 'e', 'l', 'e', 'r', 'a',
    't', 'i', 'o', 'n', '>', '0', ' ', '0', ' ', '0', ' ', '0', ' ', '-', '0',
    ' ', '0', '<', '/', 'a', 'c', 'c', 'e', 'l', 'e', 'r', 'a', 't', 'i', 'o',
    'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[31] = { '<', 'w', 'r', 'e', 'n', 'c', 'h', '>', '0',
    ' ', '0', ' ', '0', ' ', '0', ' ', '-', '0', ' ', '0', '<', '/', 'w', 'r',
    'e', 'n', 'c', 'h', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ll(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', '/', 's', 't', 'a', 't', 'e', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_mz(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[22] = { '<', 'g', 'u', 'i', ' ', 'f', 'u', 'l', 'l',
    's', 'c', 'r', 'e', 'e', 'n', '=', '\'', '0', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_im(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[29] = { '<', 'c', 'a', 'm', 'e', 'r', 'a', ' ', 'n',
    'a', 'm', 'e', '=', '\'', 'u', 's', 'e', 'r', '_', 'c', 'a', 'm', 'e', 'r',
    'a', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_lx(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[67] = { '<', 'p', 'o', 's', 'e', '>', '2', '6', '.',
    '0', '4', '1', '6', ' ', '-', '2', '3', '.', '4', '9', '4', '9', ' ', '2',
    '8', '.', '1', '4', '1', ' ', '3', '.', '5', '3', '4', '4', '7', 'e', '-',
    '1', '7', ' ', '0', '.', '6', '6', '7', '6', '4', '3', ' ', '2', '.', '3',
    '8', '8', '1', '9', '<', '/', 'p', 'o', 's', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_mx(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[42] = { '<', 'v', 'i', 'e', 'w', '_', 'c', 'o', 'n',
    't', 'r', 'o', 'l', 'l', 'e', 'r', '>', 'o', 'r', 'b', 'i', 't', '<', '/',
    'v', 'i', 'e', 'w', '_', 'c', 'o', 'n', 't', 'r', 'o', 'l', 'l', 'e', 'r',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ad(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', '/', 'c', 'a', 'm', 'e', 'r', 'a', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gz(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[8] = { '<', '/', 'g', 'u', 'i', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gs(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { '<', '/', 'w', 'o', 'r', 'l', 'd', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kp(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[8] = { '<', '/', 's', 'd', 'f', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldGenerator_fileManager_ik(void)
{
  int32_T f;
  int32_T cst;
  int8_T j;
  f = 0;
  for (j = 0; j < 20; j++) {
    if (worldGenerator_DW.eml_openfiles[j] != NULL) {
      cst = fclose(worldGenerator_DW.eml_openfiles[j]);
      if (cst == 0) {
        worldGenerator_DW.eml_openfiles[j] = NULL;
        worldGenerator_DW.eml_autoflush[j] = true;
      } else {
        f = -1;
      }
    }
  }

  return f;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static void worldGenerator_fclose(void)
{
  worldGenerator_fileManager_ik();
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_i3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[23] = { '<', 'm', 'o', 'd', 'e', 'l', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'u', 'n', 'i', 't', '_', 'b', 'o', 'x', '_', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_h4(real_T fileID, int8_T varargin_1)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[3] = { '%', 'd', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_he(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[4] = { '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kj(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[8] = { ' ', '<', 'p', 'o', 's', 'e', '>', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dx(real_T fileID, real_T varargin_1)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[3] = { '%', 'f', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_iu2(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[2] = { ' ', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_js(real_T fileID, real_T varargin_1)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[4] = { '-', '%', 'f', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt, varargin_1);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_al(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[9] = { '<', '/', 'p', 'o', 's', 'e', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[21] = { ' ', '<', 'l', 'i', 'n', 'k', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'l', 'i', 'n', 'k', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_als(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { ' ', ' ', '<', 'i', 'n', 'e', 'r', 't', 'i',
    'a', 'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dxl(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[19] = { ' ', ' ', ' ', '<', 'm', 'a', 's', 's', '>',
    '1', '<', '/', 'm', 'a', 's', 's', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_p3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { ' ', ' ', ' ', '<', 'i', 'n', 'e', 'r', 't',
    'i', 'a', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ge(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { ' ', ' ', ' ', ' ', '<', 'i', 'x', 'x', '>',
    '1', '<', '/', 'i', 'x', 'x', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_oc(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { ' ', ' ', ' ', ' ', '<', 'i', 'x', 'y', '>',
    '0', '<', '/', 'i', 'x', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kg(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { ' ', ' ', ' ', ' ', '<', 'i', 'x', 'z', '>',
    '0', '<', '/', 'i', 'x', 'z', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ny(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { ' ', ' ', ' ', ' ', '<', 'i', 'y', 'y', '>',
    '1', '<', '/', 'i', 'y', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_f3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { ' ', ' ', ' ', ' ', '<', 'i', 'y', 'z', '>',
    '0', '<', '/', 'i', 'y', 'z', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gp(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[18] = { ' ', ' ', ' ', ' ', '<', 'i', 'z', 'z', '>',
    '1', '<', '/', 'i', 'z', 'z', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ej(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', '<', '/', 'i', 'n', 'e', 'r',
    't', 'i', 'a', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ly(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', '<', '/', 'i', 'n', 'e', 'r', 't',
    'i', 'a', 'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ev(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[32] = { ' ', ' ', '<', 'c', 'o', 'l', 'l', 'i', 's',
    'i', 'o', 'n', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'c', 'o', 'l', 'l', 'i',
    's', 'i', 'o', 'n', '\'', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_eq(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', '<', 'g', 'e', 'o', 'm', 'e',
    't', 'r', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_a5(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { ' ', ' ', ' ', ' ', '<', 'b', 'o', 'x', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_lw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { ' ', ' ', ' ', ' ', ' ', '<', 's', 'i', 'z',
    'e', '>', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pl(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[9] = { '<', '/', 's', 'i', 'z', 'e', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_cn(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[12] = { ' ', ' ', ' ', ' ', '<', '/', 'b', 'o', 'x',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gn(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[16] = { ' ', ' ', ' ', '<', '/', 'g', 'e', 'o', 'm',
    'e', 't', 'r', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kr(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[36] = { ' ', ' ', ' ', '<', 'm', 'a', 'x', '_', 'c',
    'o', 'n', 't', 'a', 'c', 't', 's', '>', '1', '0', '<', '/', 'm', 'a', 'x',
    '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_j0(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { ' ', ' ', ' ', '<', 's', 'u', 'r', 'f', 'a',
    'c', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_j1(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', ' ', '<', 'b', 'o', 'u', 'n',
    'c', 'e', '/', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_fvz(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[16] = { ' ', ' ', ' ', ' ', '<', 'f', 'r', 'i', 'c',
    't', 'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_n2(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { ' ', ' ', ' ', ' ', ' ', '<', 'o', 'd', 'e',
    '/', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_k4(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[17] = { ' ', ' ', ' ', ' ', '<', '/', 'f', 'r', 'i',
    'c', 't', 'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_aly(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', ' ', '<', 'c', 'o', 'n', 't',
    'a', 'c', 't', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_fw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[16] = { ' ', ' ', ' ', ' ', '<', '/', 'c', 'o', 'n',
    't', 'a', 'c', 't', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_i1(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', '<', '/', 's', 'u', 'r', 'f',
    'a', 'c', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ndp(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[16] = { ' ', ' ', '<', '/', 'c', 'o', 'l', 'l', 'i',
    's', 'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_dk(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { ' ', ' ', '<', 'v', 'i', 's', 'u', 'a', 'l',
    ' ', 'n', 'a', 'm', 'e', '=', '\'', 'v', 'i', 's', 'u', 'a', 'l', '\'', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ln(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', '<', 'm', 'a', 't', 'e', 'r',
    'i', 'a', 'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_fa(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { ' ', ' ', ' ', ' ', '<', 's', 'c', 'r', 'i',
    'p', 't', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_je(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[64] = { ' ', ' ', ' ', ' ', ' ', '<', 'u', 'r', 'i',
    '>', 'f', 'i', 'l', 'e', ':', '/', '/', 'm', 'e', 'd', 'i', 'a', '/', 'm',
    'a', 't', 'e', 'r', 'i', 'a', 'l', 's', '/', 's', 'c', 'r', 'i', 'p', 't',
    's', '/', 'g', 'a', 'z', 'e', 'b', 'o', '.', 'm', 'a', 't', 'e', 'r', 'i',
    'a', 'l', '<', '/', 'u', 'r', 'i', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_eu(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[31] = { ' ', ' ', ' ', ' ', ' ', '<', 'n', 'a', 'm',
    'e', '>', 'G', 'a', 'z', 'e', 'b', 'o', '/', 'G', 'r', 'e', 'y', '<', '/',
    'n', 'a', 'm', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_aab(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', ' ', '<', '/', 's', 'c', 'r',
    'i', 'p', 't', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_hto(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[16] = { ' ', ' ', ' ', '<', '/', 'm', 'a', 't', 'e',
    'r', 'i', 'a', 'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_mw(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { ' ', ' ', '<', '/', 'v', 'i', 's', 'u', 'a',
    'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ms(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[20] = { ' ', ' ', '<', 'v', 'e', 'l', 'o', 'c', 'i',
    't', 'y', '_', 'd', 'e', 'c', 'a', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_eqk(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[23] = { ' ', ' ', ' ', '<', 'l', 'i', 'n', 'e', 'a',
    'r', '>', '0', '<', '/', 'l', 'i', 'n', 'e', 'a', 'r', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ap(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[25] = { ' ', ' ', ' ', '<', 'a', 'n', 'g', 'u', 'l',
    'a', 'r', '>', '0', '<', '/', 'a', 'n', 'g', 'u', 'l', 'a', 'r', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pv3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[21] = { ' ', ' ', '<', '/', 'v', 'e', 'l', 'o', 'c',
    'i', 't', 'y', '_', 'd', 'e', 'c', 'a', 'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pj(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[34] = { ' ', ' ', '<', 's', 'e', 'l', 'f', '_', 'c',
    'o', 'l', 'l', 'i', 'd', 'e', '>', '0', '<', '/', 's', 'e', 'l', 'f', '_',
    'c', 'o', 'l', 'l', 'i', 'd', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_kz(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[28] = { ' ', ' ', '<', 'k', 'i', 'n', 'e', 'm', 'a',
    't', 'i', 'c', '>', '0', '<', '/', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i',
    'c', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_k34(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[24] = { ' ', ' ', '<', 'g', 'r', 'a', 'v', 'i', 't',
    'y', '>', '1', '<', '/', 'g', 'r', 'a', 'v', 'i', 't', 'y', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_fv(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[10] = { ' ', '<', '/', 'l', 'i', 'n', 'k', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_m4(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[21] = { ' ', '<', 's', 't', 'a', 't', 'i', 'c', '>',
    '0', '<', '/', 's', 't', 'a', 't', 'i', 'c', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_an(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { '<', 'm', 'o', 'd', 'e', 'l', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'u', 'n', 'i', 't', '_', 's', 'p', 'h', 'e', 'r', 'e',
    '_', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_hl(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[14] = { ' ', ' ', ' ', ' ', '<', 's', 'p', 'h', 'e',
    'r', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_de(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[26] = { ' ', ' ', ' ', ' ', '<', 'r', 'a', 'd', 'i',
    'u', 's', '>', '0', '.', '5', '<', '/', 'r', 'a', 'd', 'i', 'u', 's', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_b4(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[15] = { ' ', ' ', ' ', ' ', '<', '/', 's', 'p', 'h',
    'e', 'r', 'e', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_fc(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[27] = { ' ', ' ', ' ', ' ', ' ', '<', 'r', 'a', 'd',
    'i', 'u', 's', '>', '0', '.', '5', '<', '/', 'r', 'a', 'd', 'i', 'u', 's',
    '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_ht(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[34] = { '<', 'm', 'o', 'd', 'e', 'l', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'C', 'o', 'n', 's', 't', 'r', 'u', 'c', 't', 'i', 'o',
    'n', ' ', 'B', 'a', 'r', 'r', 'e', 'l', '_', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_clc(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[772] = { '<', 'l', 'i', 'n', 'k', ' ', 'n', 'a', 'm',
    'e', '=', '\'', 'l', 'i', 'n', 'k', '\'', '>', '\x0a', '<', 'i', 'n', 'e',
    'r', 't', 'i', 'a', 'l', '>', '\x0a', '<', 'p', 'o', 's', 'e', '>', '0', ' ',
    '0', ' ', '0', '.', '4', ' ', '0', ' ', '-', '0', ' ', '0', '<', '/', 'p',
    'o', 's', 'e', '>', '\x0a', '<', 'm', 'a', 's', 's', '>', '5', '0', '0', '<',
    '/', 'm', 'a', 's', 's', '>', '\x0a', '<', 'i', 'n', 'e', 'r', 't', 'i', 'a',
    '>', '\x0a', '<', 'i', 'x', 'x', '>', '5', '1', '.', '2', '0', '9', '6', '<',
    '/', 'i', 'x', 'x', '>', '\x0a', '<', 'i', 'y', 'y', '>', '5', '1', '.', '2',
    '0', '9', '6', '<', '/', 'i', 'y', 'y', '>', '\x0a', '<', 'i', 'z', 'z', '>',
    '2', '5', '<', '/', 'i', 'z', 'z', '>', '\x0a', '<', 'i', 'x', 'y', '>', '0',
    '<', '/', 'i', 'x', 'y', '>', '\x0a', '<', 'i', 'x', 'z', '>', '0', '<', '/',
    'i', 'x', 'z', '>', '\x0a', '<', 'i', 'y', 'z', '>', '0', '<', '/', 'i', 'y',
    'z', '>', '\x0a', '<', '/', 'i', 'n', 'e', 'r', 't', 'i', 'a', '>', '\x0a',
    '<', '/', 'i', 'n', 'e', 'r', 't', 'i', 'a', 'l', '>', '\x0a', '<', 'c', 'o',
    'l', 'l', 'i', 's', 'i', 'o', 'n', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'c',
    'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', '\'', '>', '\x0a', '<', 'g', 'e',
    'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'm', 'e', 's', 'h', '>',
    '\x0a', '<', 'u', 'r', 'i', '>', 'm', 'o', 'd', 'e', 'l', ':', '/', '/', 'c',
    'o', 'n', 's', 't', 'r', 'u', 'c', 't', 'i', 'o', 'n', '_', 'b', 'a', 'r',
    'r', 'e', 'l', '/', 'm', 'e', 's', 'h', 'e', 's', '/', 'c', 'o', 'n', 's',
    't', 'r', 'u', 'c', 't', 'i', 'o', 'n', '_', 'b', 'a', 'r', 'r', 'e', 'l',
    '.', 'd', 'a', 'e', '<', '/', 'u', 'r', 'i', '>', '\x0a', '<', '/', 'm', 'e',
    's', 'h', '>', '\x0a', '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>',
    '\x0a', '<', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>',
    '1', '0', '<', '/', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't',
    's', '>', '\x0a', '<', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<',
    'b', 'o', 'u', 'n', 'c', 'e', '/', '>', '\x0a', '<', 'f', 'r', 'i', 'c', 't',
    'i', 'o', 'n', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/',
    'f', 'r', 'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o', 'n', 't',
    'a', 'c', 't', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/',
    'c', 'o', 'n', 't', 'a', 'c', 't', '>', '\x0a', '<', '/', 's', 'u', 'r', 'f',
    'a', 'c', 'e', '>', '\x0a', '<', '/', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o',
    'n', '>', '\x0a', '<', 'v', 'i', 's', 'u', 'a', 'l', ' ', 'n', 'a', 'm', 'e',
    '=', '\'', 'v', 'i', 's', 'u', 'a', 'l', '\'', '>', '\x0a', '<', 'g', 'e',
    'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'm', 'e', 's', 'h', '>',
    '\x0a', '<', 'u', 'r', 'i', '>', 'm', 'o', 'd', 'e', 'l', ':', '/', '/', 'c',
    'o', 'n', 's', 't', 'r', 'u', 'c', 't', 'i', 'o', 'n', '_', 'b', 'a', 'r',
    'r', 'e', 'l', '/', 'm', 'e', 's', 'h', 'e', 's', '/', 'c', 'o', 'n', 's',
    't', 'r', 'u', 'c', 't', 'i', 'o', 'n', '_', 'b', 'a', 'r', 'r', 'e', 'l',
    '.', 'd', 'a', 'e', '<', '/', 'u', 'r', 'i', '>', '\x0a', '<', '/', 'm', 'e',
    's', 'h', '>', '\x0a', '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>',
    '\x0a', '<', '/', 'v', 'i', 's', 'u', 'a', 'l', '>', '\x0a', '<', 'v', 'e',
    'l', 'o', 'c', 'i', 't', 'y', '_', 'd', 'e', 'c', 'a', 'y', '>', '\x0a', '<',
    'l', 'i', 'n', 'e', 'a', 'r', '>', '0', '<', '/', 'l', 'i', 'n', 'e', 'a',
    'r', '>', '\x0a', '<', 'a', 'n', 'g', 'u', 'l', 'a', 'r', '>', '0', '<', '/',
    'a', 'n', 'g', 'u', 'l', 'a', 'r', '>', '\x0a', '<', '/', 'v', 'e', 'l', 'o',
    'c', 'i', 't', 'y', '_', 'd', 'e', 'c', 'a', 'y', '>', '\x0a', '<', 's', 'e',
    'l', 'f', '_', 'c', 'o', 'l', 'l', 'i', 'd', 'e', '>', '0', '<', '/', 's',
    'e', 'l', 'f', '_', 'c', 'o', 'l', 'l', 'i', 'd', 'e', '>', '\x0a', '<', 'k',
    'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', '>', '0', '<', '/', 'k', 'i', 'n',
    'e', 'm', 'a', 't', 'i', 'c', '>', '\x0a', '<', 'g', 'r', 'a', 'v', 'i', 't',
    'y', '>', '1', '<', '/', 'g', 'r', 'a', 'v', 'i', 't', 'y', '>', '\x0a', '<',
    '/', 'l', 'i', 'n', 'k', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_is(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[29] = { '<', 's', 't', 'a', 't', 'i', 'c', '>', '0',
    '<', '/', 's', 't', 'a', 't', 'i', 'c', '>', '\x0a', '<', '/', 'm', 'o', 'd',
    'e', 'l', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_k3(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[29] = { '<', 'm', 'o', 'd', 'e', 'l', ' ', 'n', 'a',
    'm', 'e', '=', '\'', 'j', 'e', 'r', 's', 'e', 'y', '_', 'b', 'a', 'r', 'r',
    'i', 'e', 'r', '_', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_af(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[1905] = { '<', 's', 't', 'a', 't', 'i', 'c', '>', '1',
    '<', '/', 's', 't', 'a', 't', 'i', 'c', '>', '\x0a', '<', 'l', 'i', 'n', 'k',
    ' ', 'n', 'a', 'm', 'e', '=', '\'', 'l', 'i', 'n', 'k', '\'', '>', '\x0a',
    '<', 'v', 'i', 's', 'u', 'a', 'l', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'v',
    'i', 's', 'u', 'a', 'l', '\'', '>', '\x0a', '<', 'g', 'e', 'o', 'm', 'e',
    't', 'r', 'y', '>', '\x0a', '<', 'm', 'e', 's', 'h', '>', '\x0a', '<', 'u',
    'r', 'i', '>', 'm', 'o', 'd', 'e', 'l', ':', '/', '/', 'j', 'e', 'r', 's',
    'e', 'y', '_', 'b', 'a', 'r', 'r', 'i', 'e', 'r', '/', 'm', 'e', 's', 'h',
    'e', 's', '/', 'j', 'e', 'r', 's', 'e', 'y', '_', 'b', 'a', 'r', 'r', 'i',
    'e', 'r', '.', 'd', 'a', 'e', '<', '/', 'u', 'r', 'i', '>', '\x0a', '<', '/',
    'm', 'e', 's', 'h', '>', '\x0a', '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r',
    'y', '>', '\x0a', '<', '/', 'v', 'i', 's', 'u', 'a', 'l', '>', '\x0a', '<',
    'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', ' ', 'n', 'a', 'm', 'e', '=',
    '\'', 'u', 'p', 'r', 'i', 'g', 'h', 't', '\'', '>', '\x0a', '<', 'p', 'o',
    's', 'e', '>', '0', ' ', '0', ' ', '0', '.', '5', '7', '1', '5', ' ', '0',
    ' ', '-', '0', ' ', '0', '<', '/', 'p', 'o', 's', 'e', '>', '\x0a', '<', 'g',
    'e', 'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'b', 'o', 'x', '>',
    '\x0a', '<', 's', 'i', 'z', 'e', '>', '4', '.', '0', '6', '5', '4', '2', ' ',
    '0', '.', '3', '0', '6', '3', ' ', '1', '.', '1', '4', '3', '<', '/', 's',
    'i', 'z', 'e', '>', '\x0a', '<', '/', 'b', 'o', 'x', '>', '\x0a', '<', '/',
    'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'm', 'a', 'x', '_',
    'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '1', '0', '<', '/', 'm', 'a',
    'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '\x0a', '<', 's', 'u',
    'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<', 'b', 'o', 'u', 'n', 'c', 'e', '/',
    '>', '\x0a', '<', 'f', 'r', 'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<',
    'o', 'd', 'e', '/', '>', '\x0a', '<', '/', 'f', 'r', 'i', 'c', 't', 'i', 'o',
    'n', '>', '\x0a', '<', 'c', 'o', 'n', 't', 'a', 'c', 't', '>', '\x0a', '<',
    'o', 'd', 'e', '/', '>', '\x0a', '<', '/', 'c', 'o', 'n', 't', 'a', 'c', 't',
    '>', '\x0a', '<', '/', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<',
    '/', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o',
    'l', 'l', 'i', 's', 'i', 'o', 'n', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'b',
    'a', 's', 'e', '\'', '>', '\x0a', '<', 'p', 'o', 's', 'e', '>', '0', ' ',
    '0', ' ', '0', '.', '0', '3', '2', '2', '5', '8', ' ', '0', ' ', '-', '0',
    ' ', '0', '<', '/', 'p', 'o', 's', 'e', '>', '\x0a', '<', 'g', 'e', 'o', 'm',
    'e', 't', 'r', 'y', '>', '\x0a', '<', 'b', 'o', 'x', '>', '\x0a', '<', 's',
    'i', 'z', 'e', '>', '4', '.', '0', '6', '5', '4', '2', ' ', '0', '.', '8',
    '1', '0', '7', ' ', '0', '.', '0', '6', '4', '5', '1', '6', '<', '/', 's',
    'i', 'z', 'e', '>', '\x0a', '<', '/', 'b', 'o', 'x', '>', '\x0a', '<', '/',
    'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'm', 'a', 'x', '_',
    'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '1', '0', '<', '/', 'm', 'a',
    'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '\x0a', '<', 's', 'u',
    'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<', 'b', 'o', 'u', 'n', 'c', 'e', '/',
    '>', '\x0a', '<', 'f', 'r', 'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<',
    'o', 'd', 'e', '/', '>', '\x0a', '<', '/', 'f', 'r', 'i', 'c', 't', 'i', 'o',
    'n', '>', '\x0a', '<', 'c', 'o', 'n', 't', 'a', 'c', 't', '>', '\x0a', '<',
    'o', 'd', 'e', '/', '>', '\x0a', '<', '/', 'c', 'o', 'n', 't', 'a', 'c', 't',
    '>', '\x0a', '<', '/', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<',
    '/', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o',
    'l', 'l', 'i', 's', 'i', 'o', 'n', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'b',
    'a', 's', 'e', '2', '\'', '>', '\x0a', '<', 'p', 'o', 's', 'e', '>', '0',
    ' ', '0', ' ', '0', '.', '1', ' ', '0', ' ', '-', '0', ' ', '0', '<', '/',
    'p', 'o', 's', 'e', '>', '\x0a', '<', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y',
    '>', '\x0a', '<', 'b', 'o', 'x', '>', '\x0a', '<', 's', 'i', 'z', 'e', '>',
    '4', '.', '0', '6', '5', '4', '2', ' ', '0', '.', '6', '5', ' ', '0', '.',
    '1', '<', '/', 's', 'i', 'z', 'e', '>', '\x0a', '<', '/', 'b', 'o', 'x', '>',
    '\x0a', '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<',
    'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '1', '0',
    '<', '/', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>',
    '\x0a', '<', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<', 'b', 'o',
    'u', 'n', 'c', 'e', '/', '>', '\x0a', '<', 'f', 'r', 'i', 'c', 't', 'i', 'o',
    'n', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/', 'f', 'r',
    'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o', 'n', 't', 'a', 'c',
    't', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/', 'c', 'o',
    'n', 't', 'a', 'c', 't', '>', '\x0a', '<', '/', 's', 'u', 'r', 'f', 'a', 'c',
    'e', '>', '\x0a', '<', '/', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', '>',
    '\x0a', '<', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', ' ', 'n', 'a', 'm',
    'e', '=', '\'', 'b', 'a', 's', 'e', '3', '\'', '>', '\x0a', '<', 'p', 'o',
    's', 'e', '>', '0', ' ', '0', ' ', '0', '.', '2', ' ', '0', ' ', '-', '0',
    ' ', '0', '<', '/', 'p', 'o', 's', 'e', '>', '\x0a', '<', 'g', 'e', 'o', 'm',
    'e', 't', 'r', 'y', '>', '\x0a', '<', 'b', 'o', 'x', '>', '\x0a', '<', 's',
    'i', 'z', 'e', '>', '4', '.', '0', '6', '5', '4', '2', ' ', '0', '.', '5',
    ' ', '0', '.', '1', '<', '/', 's', 'i', 'z', 'e', '>', '\x0a', '<', '/', 'b',
    'o', 'x', '>', '\x0a', '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>',
    '\x0a', '<', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>',
    '1', '0', '<', '/', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't',
    's', '>', '\x0a', '<', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<',
    'b', 'o', 'u', 'n', 'c', 'e', '/', '>', '\x0a', '<', 'f', 'r', 'i', 'c', 't',
    'i', 'o', 'n', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/',
    'f', 'r', 'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o', 'n', 't',
    'a', 'c', 't', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/',
    'c', 'o', 'n', 't', 'a', 'c', 't', '>', '\x0a', '<', '/', 's', 'u', 'r', 'f',
    'a', 'c', 'e', '>', '\x0a', '<', '/', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o',
    'n', '>', '\x0a', '<', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', ' ', 'n',
    'a', 'm', 'e', '=', '\'', 'l', 'e', 'f', 't', '-', 'a', 'n', 'g', 'l', 'e',
    '\'', '>', '\x0a', '<', 'p', 'o', 's', 'e', '>', '0', ' ', '-', '0', '.',
    '2', '2', '4', ' ', '0', '.', '2', '4', '0', '1', ' ', '0', '.', '9', ' ',
    '-', '0', ' ', '0', '<', '/', 'p', 'o', 's', 'e', '>', '\x0a', '<', 'g', 'e',
    'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'b', 'o', 'x', '>', '\x0a',
    '<', 's', 'i', 'z', 'e', '>', '4', '.', '0', '6', '5', '4', '2', ' ', '0',
    '.', '5', ' ', '0', '.', '0', '6', '4', '5', '1', '6', '<', '/', 's', 'i',
    'z', 'e', '>', '\x0a', '<', '/', 'b', 'o', 'x', '>', '\x0a', '<', '/', 'g',
    'e', 'o', 'm', 'e', 't', 'r', 'y', '>', '\x0a', '<', 'm', 'a', 'x', '_', 'c',
    'o', 'n', 't', 'a', 'c', 't', 's', '>', '1', '0', '<', '/', 'm', 'a', 'x',
    '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>', '\x0a', '<', 's', 'u', 'r',
    'f', 'a', 'c', 'e', '>', '\x0a', '<', 'b', 'o', 'u', 'n', 'c', 'e', '/', '>',
    '\x0a', '<', 'f', 'r', 'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<', 'o',
    'd', 'e', '/', '>', '\x0a', '<', '/', 'f', 'r', 'i', 'c', 't', 'i', 'o', 'n',
    '>', '\x0a', '<', 'c', 'o', 'n', 't', 'a', 'c', 't', '>', '\x0a', '<', 'o',
    'd', 'e', '/', '>', '\x0a', '<', '/', 'c', 'o', 'n', 't', 'a', 'c', 't', '>',
    '\x0a', '<', '/', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<', '/',
    'c', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o', 'l',
    'l', 'i', 's', 'i', 'o', 'n', ' ', 'n', 'a', 'm', 'e', '=', '\'', 'r', 'i',
    'g', 'h', 't', '-', 'a', 'n', 'g', 'l', 'e', '\'', '>', '\x0a', '<', 'p',
    'o', 's', 'e', '>', '0', ' ', '0', '.', '2', '2', '4', ' ', '0', '.', '2',
    '4', '0', '1', ' ', '-', '0', '.', '9', ' ', '0', ' ', '0', '<', '/', 'p',
    'o', 's', 'e', '>', '\x0a', '<', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>',
    '\x0a', '<', 'b', 'o', 'x', '>', '\x0a', '<', 's', 'i', 'z', 'e', '>', '4',
    '.', '0', '6', '5', '4', '2', ' ', '0', '.', '5', ' ', '0', '.', '0', '6',
    '4', '5', '1', '6', '<', '/', 's', 'i', 'z', 'e', '>', '\x0a', '<', '/', 'b',
    'o', 'x', '>', '\x0a', '<', '/', 'g', 'e', 'o', 'm', 'e', 't', 'r', 'y', '>',
    '\x0a', '<', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't', 's', '>',
    '1', '0', '<', '/', 'm', 'a', 'x', '_', 'c', 'o', 'n', 't', 'a', 'c', 't',
    's', '>', '\x0a', '<', 's', 'u', 'r', 'f', 'a', 'c', 'e', '>', '\x0a', '<',
    'b', 'o', 'u', 'n', 'c', 'e', '/', '>', '\x0a', '<', 'f', 'r', 'i', 'c', 't',
    'i', 'o', 'n', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/',
    'f', 'r', 'i', 'c', 't', 'i', 'o', 'n', '>', '\x0a', '<', 'c', 'o', 'n', 't',
    'a', 'c', 't', '>', '\x0a', '<', 'o', 'd', 'e', '/', '>', '\x0a', '<', '/',
    'c', 'o', 'n', 't', 'a', 'c', 't', '>', '\x0a', '<', '/', 's', 'u', 'r', 'f',
    'a', 'c', 'e', '>', '\x0a', '<', '/', 'c', 'o', 'l', 'l', 'i', 's', 'i', 'o',
    'n', '>', '\x0a', '<', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y', '_', 'd', 'e',
    'c', 'a', 'y', '>', '\x0a', '<', 'l', 'i', 'n', 'e', 'a', 'r', '>', '0', '<',
    '/', 'l', 'i', 'n', 'e', 'a', 'r', '>', '\x0a', '<', 'a', 'n', 'g', 'u', 'l',
    'a', 'r', '>', '0', '<', '/', 'a', 'n', 'g', 'u', 'l', 'a', 'r', '>', '\x0a',
    '<', '/', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y', '_', 'd', 'e', 'c', 'a',
    'y', '>', '\x0a', '<', 's', 'e', 'l', 'f', '_', 'c', 'o', 'l', 'l', 'i', 'd',
    'e', '>', '0', '<', '/', 's', 'e', 'l', 'f', '_', 'c', 'o', 'l', 'l', 'i',
    'd', 'e', '>', '\x0a', '<', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', '>',
    '0', '<', '/', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', '>', '\x0a', '<',
    'g', 'r', 'a', 'v', 'i', 't', 'y', '>', '1', '<', '/', 'g', 'r', 'a', 'v',
    'i', 't', 'y', '>', '\x0a', '<', '/', 'l', 'i', 'n', 'k', '>', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_g2(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[9] = { ' ', ' ', '<', 'p', 'o', 's', 'e', '>', '\x00'
  };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_aj(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { ' ', ' ', '<', 'v', 'e', 'l', 'o', 'c', 'i',
    't', 'y', '>', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_gd(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[13] = { '<', '/', 'v', 'e', 'l', 'o', 'c', 'i', 't',
    'y', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_m(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[17] = { ' ', ' ', '<', 'a', 'c', 'c', 'e', 'l', 'e',
    'r', 'a', 't', 'i', 'o', 'n', '>', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_by(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[17] = { '<', '/', 'a', 'c', 'c', 'e', 'l', 'e', 'r',
    'a', 't', 'i', 'o', 'n', '>', '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_k1(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { ' ', ' ', '<', 'w', 'r', 'e', 'n', 'c', 'h',
    '>', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Function for MATLAB Function: '<Root>/Generate_file'
static int32_T worldG_cfprintf_pp5(real_T fileID)
{
  int32_T nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char_T cfmt[11] = { '<', '/', 'w', 'r', 'e', 'n', 'c', 'h', '>',
    '\x0a', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  worldGenerator_fileManager_i(fileID, &filestar, &autoflush);
  if (!(filestar == b_NULL)) {
    nbytesint = fprintf(filestar, cfmt);
    if (autoflush) {
      fflush(filestar);
    }
  }

  return nbytesint;
}

// Model step function
void worldGenerator_step(void)
{
  real_T sameNumX;
  real_T sameNumY;
  boolean_T flag;
  int32_T k;
  int32_T b_i;
  real_T a;
  int32_T b_k;
  boolean_T p;
  real_T absxk;
  int32_T b_exponent;
  SL_Bus_worldGenerator_std_msgs_Bool varargout_2;
  int8_T tmp;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   Inport: '<S6>/In1'
  //   MATLABSystem: '<S3>/SourceBlock'

  flag = Sub_worldGenerator_4.getLatestMessage(&varargout_2);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S6>/Enable'

  if (flag) {
    worldGenerator_B.In1_c = varargout_2;
  }

  // End of Start for MATLABSystem: '<S3>/SourceBlock'
  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S2>/SourceBlock' incorporates:
  //   Inport: '<S5>/In1'
  //   MATLABSystem: '<S2>/SourceBlock'

  flag = Sub_worldGenerator_1.getLatestMessage(&worldGenerator_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (flag) {
    worldGenerator_B.In1 = worldGenerator_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S2>/SourceBlock'
  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/store_array' incorporates:
  //   Memory: '<Root>/Memory'
  //   Memory: '<Root>/Memory1'
  //   Memory: '<Root>/Memory2'
  //   Memory: '<Root>/Memory5'

  worldGenerator_B.counter = worldGenerator_DW.Memory_PreviousInput;
  memcpy(&worldGenerator_B.x_aNext[0], &worldGenerator_DW.Memory1_PreviousInput
         [0], 20U * sizeof(real_T));
  memcpy(&worldGenerator_B.y_aNext[0], &worldGenerator_DW.Memory2_PreviousInput
         [0], 20U * sizeof(real_T));
  memcpy(&worldGenerator_B.class_next[0],
         &worldGenerator_DW.Memory5_PreviousInput[0], 20U * sizeof(real_T));

  // MATLAB Function 'store_array': '<S4>:1'
  // '<S4>:1:2' size = 0;
  worldGenerator_B.size = 0.0;

  // '<S4>:1:3' tmpX = 0;
  worldGenerator_B.tmpX = 0.0;

  // '<S4>:1:4' tmpY = 0;
  worldGenerator_B.tmpY = 0.0;

  // '<S4>:1:5' for k = 1:length(Points(:))
  k = 0;
  while ((k < 32) && (!((worldGenerator_B.In1.Polygon.Points[k].X ==
                         worldGenerator_B.tmpX) &&
                        (worldGenerator_B.In1.Polygon.Points[k].Y ==
                         worldGenerator_B.tmpY)))) {
    // '<S4>:1:6' if(double(Points(k).X) == tmpX && double(Points(k).Y) == tmpY) 
    // '<S4>:1:8' else
    // '<S4>:1:9' size = size + 1;
    worldGenerator_B.size++;

    // '<S4>:1:10' tmpX = double(Points(k).X);
    worldGenerator_B.tmpX = worldGenerator_B.In1.Polygon.Points[k].X;

    // '<S4>:1:11' tmpY = double(Points(k).Y);
    worldGenerator_B.tmpY = worldGenerator_B.In1.Polygon.Points[k].Y;
    k++;
  }

  // '<S4>:1:14' x_pose = 0;
  worldGenerator_B.tmpX = 0.0;

  // '<S4>:1:15' y_pose = 0;
  worldGenerator_B.tmpY = 0.0;

  // '<S4>:1:17' x_test = zeros(32, 1);
  // '<S4>:1:18' y_test = zeros(32, 1);
  memset(&worldGenerator_B.x_test[0], 0, sizeof(real_T) << 5U);
  memset(&worldGenerator_B.y_test[0], 0, sizeof(real_T) << 5U);

  // '<S4>:1:20' if(size ~= 0)
  if (worldGenerator_B.size != 0.0) {
    // '<S4>:1:21' x_max = double(Points(1).X);
    worldGenerator_B.x_max = worldGenerator_B.In1.Polygon.Points[0].X;

    // '<S4>:1:22' x_min = double(Points(1).X);
    worldGenerator_B.x_min = worldGenerator_B.In1.Polygon.Points[0].X;

    // '<S4>:1:23' y_max = double(Points(1).Y);
    worldGenerator_B.y_max = worldGenerator_B.In1.Polygon.Points[0].Y;

    // '<S4>:1:24' y_min = double(Points(1).Y);
    worldGenerator_B.y_min = worldGenerator_B.In1.Polygon.Points[0].Y;
  } else {
    // '<S4>:1:25' else
    // '<S4>:1:26' x_max = 0;
    worldGenerator_B.x_max = 0.0;

    // '<S4>:1:27' x_min = 0;
    worldGenerator_B.x_min = 0.0;

    // '<S4>:1:28' y_max = 0;
    worldGenerator_B.y_max = 0.0;

    // '<S4>:1:29' y_min = 0;
    worldGenerator_B.y_min = 0.0;
  }

  // '<S4>:1:31' sameNumX = 0;
  sameNumX = 0.0;

  // '<S4>:1:32' sameNumY = 0;
  sameNumY = 0.0;

  // '<S4>:1:33' for i = 1:size
  for (k = 0; k < (int32_T)worldGenerator_B.size; k++) {
    // '<S4>:1:34' x_test(i) = double(Points(i).X);
    worldGenerator_B.x_test[k] = worldGenerator_B.In1.Polygon.Points[k].X;

    // '<S4>:1:35' y_test(i) = double(Points(i).Y);
    worldGenerator_B.y_test[k] = worldGenerator_B.In1.Polygon.Points[k].Y;

    // '<S4>:1:36' x_pose = x_pose + double(Points(i).X);
    worldGenerator_B.tmpX += worldGenerator_B.In1.Polygon.Points[k].X;

    // '<S4>:1:37' y_pose = y_pose + double(Points(i).Y);
    worldGenerator_B.tmpY += worldGenerator_B.In1.Polygon.Points[k].Y;

    // '<S4>:1:38' if(ismember(double(Points(i).X), x_test(:)))
    a = worldGenerator_B.In1.Polygon.Points[k].X;
    flag = false;
    b_k = 0;
    exitg3 = false;
    while ((!exitg3) && (b_k + 1 < 33)) {
      absxk = fabs(worldGenerator_B.x_test[b_k] / 2.0);
      if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &b_i);
          absxk = ldexp(1.0, b_i - 53);
        }
      } else {
        absxk = (rtNaN);
      }

      if ((fabs(worldGenerator_B.x_test[b_k] - a) < absxk) || (rtIsInf(a) &&
           rtIsInf(worldGenerator_B.x_test[b_k]) && ((a > 0.0) ==
            (worldGenerator_B.x_test[b_k] > 0.0)))) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        flag = true;
        exitg3 = true;
      } else {
        b_k++;
      }
    }

    if (flag) {
      // '<S4>:1:39' sameNumX = sameNumX + 1;
      sameNumX++;
    }

    // '<S4>:1:41' if(ismember(double(Points(i).Y), y_test(:)))
    a = worldGenerator_B.In1.Polygon.Points[k].Y;
    flag = false;
    b_k = 0;
    exitg2 = false;
    while ((!exitg2) && (b_k + 1 < 33)) {
      absxk = fabs(worldGenerator_B.y_test[b_k] / 2.0);
      if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &b_exponent);
          absxk = ldexp(1.0, b_exponent - 53);
        }
      } else {
        absxk = (rtNaN);
      }

      if ((fabs(worldGenerator_B.y_test[b_k] - a) < absxk) || (rtIsInf(a) &&
           rtIsInf(worldGenerator_B.y_test[b_k]) && ((a > 0.0) ==
            (worldGenerator_B.y_test[b_k] > 0.0)))) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        flag = true;
        exitg2 = true;
      } else {
        b_k++;
      }
    }

    if (flag) {
      // '<S4>:1:42' sameNumY = sameNumY + 1;
      sameNumY++;
    }

    // '<S4>:1:44' if(i ~= 1)
    if (1.0 + (real_T)k != 1.0) {
      // '<S4>:1:45' if(double(Points(i).X) > x_max)
      if (worldGenerator_B.In1.Polygon.Points[k].X > worldGenerator_B.x_max) {
        // '<S4>:1:46' x_max = double(Points(i).X);
        worldGenerator_B.x_max = worldGenerator_B.In1.Polygon.Points[k].X;
      }

      // '<S4>:1:48' if(double(Points(i).X) < x_min)
      if (worldGenerator_B.In1.Polygon.Points[k].X < worldGenerator_B.x_min) {
        // '<S4>:1:49' x_min = double(Points(i).X);
        worldGenerator_B.x_min = worldGenerator_B.In1.Polygon.Points[k].X;
      }

      // '<S4>:1:51' if(double(Points(i).Y) > y_max)
      if (worldGenerator_B.In1.Polygon.Points[k].Y > worldGenerator_B.y_max) {
        // '<S4>:1:52' y_max = double(Points(i).Y);
        worldGenerator_B.y_max = worldGenerator_B.In1.Polygon.Points[k].Y;
      }

      // '<S4>:1:54' if(double(Points(i).Y) < y_min)
      if (worldGenerator_B.In1.Polygon.Points[k].Y < worldGenerator_B.y_min) {
        // '<S4>:1:55' y_min = double(Points(i).Y);
        worldGenerator_B.y_min = worldGenerator_B.In1.Polygon.Points[k].Y;
      }
    }
  }

  // '<S4>:1:62' if(size == 0)
  if (worldGenerator_B.size == 0.0) {
    // '<S4>:1:63' x_pose = 0;
    worldGenerator_B.tmpX = 0.0;

    // '<S4>:1:64' y_pose = 0;
    worldGenerator_B.tmpY = 0.0;
  } else {
    // '<S4>:1:65' else
    // '<S4>:1:66' x_pose = x_pose / size;
    worldGenerator_B.tmpX /= worldGenerator_B.size;

    // '<S4>:1:67' y_pose = y_pose / size;
    worldGenerator_B.tmpY /= worldGenerator_B.size;
  }

  // '<S4>:1:71' if(counter == 0 && (x_pose ~= 0 || y_pose ~= 0))
  if ((worldGenerator_DW.Memory_PreviousInput == 0.0) && ((worldGenerator_B.tmpX
        != 0.0) || (worldGenerator_B.tmpY != 0.0))) {
    // '<S4>:1:72' class_next = class;
    // '<S4>:1:73' x_aNext = x_a;
    // '<S4>:1:74' y_aNext = y_a;
    // '<S4>:1:75' x_a(counter+1) = x_pose;
    worldGenerator_B.x_aNext[(int32_T)(worldGenerator_DW.Memory_PreviousInput +
      1.0) - 1] = worldGenerator_B.tmpX;

    // '<S4>:1:76' y_a(counter+1) = y_pose;
    worldGenerator_B.y_aNext[(int32_T)(worldGenerator_DW.Memory_PreviousInput +
      1.0) - 1] = worldGenerator_B.tmpY;

    //  Construction Barrier
    // '<S4>:1:78' if(abs(x_max - x_min) < 0.5 && abs(y_max - y_min) < 0.5)
    if ((fabs(worldGenerator_B.x_max - worldGenerator_B.x_min) < 0.5) && (fabs
         (worldGenerator_B.y_max - worldGenerator_B.y_min) < 0.5)) {
      // '<S4>:1:79' class(counter + 1) = 1;
      worldGenerator_B.class_next[(int32_T)
        (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 1.0;

      //  Box
    } else if (((sameNumX >= 2.0) || (sameNumY >= 2.0)) &&
               (worldGenerator_B.size < 16.0)) {
      // '<S4>:1:81' elseif((sameNumX  >= 2 || sameNumY >= 2) && size < 16)
      // '<S4>:1:82' class(counter + 1) = 2;
      worldGenerator_B.class_next[(int32_T)
        (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 2.0;

      //  Sphere
    } else if ((sameNumX != 0.0) && (sameNumY != 0.0) && (fabs
                (worldGenerator_B.x_max - worldGenerator_B.x_min) >= 0.5) &&
               (fabs(worldGenerator_B.y_max - worldGenerator_B.y_min) >= 0.5)) {
      // '<S4>:1:84' elseif((sameNumX ~= 0 && sameNumY ~= 0) && abs(x_max - x_min) >= 0.5 && abs(y_max - y_min) >= 0.5) 
      // '<S4>:1:85' class(counter + 1) = 3;
      worldGenerator_B.class_next[(int32_T)
        (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 3.0;

      //  Jersey Barrier
    } else if (worldGenerator_B.size >= 16.0) {
      // '<S4>:1:87' elseif(size >= 16)
      // '<S4>:1:88' class(counter + 1) = 4;
      worldGenerator_B.class_next[(int32_T)
        (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 4.0;
    } else {
      // '<S4>:1:89' else
      // '<S4>:1:90' class(counter + 1) = 2;
      worldGenerator_B.class_next[(int32_T)
        (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 2.0;
    }

    // '<S4>:1:92' x_aNext = x_a;
    // '<S4>:1:93' y_aNext = y_a;
    // '<S4>:1:94' class_next = class;
    // '<S4>:1:95' counter = counter + 1;
    worldGenerator_B.counter = worldGenerator_DW.Memory_PreviousInput + 1.0;
  } else if ((worldGenerator_B.tmpX != 0.0) || (worldGenerator_B.tmpY != 0.0)) {
    // '<S4>:1:96' elseif(x_pose ~= 0 || y_pose ~= 0)
    // '<S4>:1:97' flag = false;
    flag = false;

    // '<S4>:1:98' for i = 1:counter
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)worldGenerator_DW.Memory_PreviousInput
                         - 1)) {
      // '<S4>:1:99' if(abs(x_a(i)-x_pose) <= 3 && abs(y_a(i)-y_pose) <= 3)
      if ((fabs(worldGenerator_DW.Memory1_PreviousInput[b_i] -
                worldGenerator_B.tmpX) <= 3.0) && (fabs
           (worldGenerator_DW.Memory2_PreviousInput[b_i] - worldGenerator_B.tmpY)
           <= 3.0)) {
        // '<S4>:1:100' flag = true;
        flag = true;
        exitg1 = true;
      } else {
        b_i++;
      }
    }

    // '<S4>:1:104' if(flag && size >= 16)
    if (flag && (worldGenerator_B.size >= 16.0)) {
      // '<S4>:1:105' class(counter) = 4;
      worldGenerator_B.class_next[(int32_T)
        worldGenerator_DW.Memory_PreviousInput - 1] = 4.0;
    }

    // '<S4>:1:107' if(flag == false)
    if (!flag) {
      //  Construction Barrier
      // '<S4>:1:109' if(sameNumX ~= 0 && sameNumY ~= 0 && abs(x_max - x_min) < 0.5 && abs(y_max - y_min) < 0.5) 
      if ((sameNumX != 0.0) && (sameNumY != 0.0) && (fabs(worldGenerator_B.x_max
            - worldGenerator_B.x_min) < 0.5) && (fabs(worldGenerator_B.y_max -
            worldGenerator_B.y_min) < 0.5)) {
        // '<S4>:1:110' class(counter + 1) = 3;
        worldGenerator_B.class_next[(int32_T)
          (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 3.0;

        //  Box
      } else if (((sameNumX >= 2.0) || (sameNumY >= 2.0)) &&
                 (worldGenerator_B.size < 16.0)) {
        // '<S4>:1:112' elseif((sameNumX  >= 2 || sameNumY >= 2) && size < 16)
        // '<S4>:1:113' class(counter + 1) = 1;
        worldGenerator_B.class_next[(int32_T)
          (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 1.0;

        //  Sphere
      } else if ((sameNumX != 0.0) && (sameNumY != 0.0) && (fabs
                  (worldGenerator_B.x_max - worldGenerator_B.x_min) >= 0.5) &&
                 (fabs(worldGenerator_B.y_max - worldGenerator_B.y_min) >= 0.5))
      {
        // '<S4>:1:115' elseif((sameNumX ~= 0 && sameNumY ~= 0) && abs(x_max - x_min) >= 0.5 && abs(y_max - y_min) >= 0.5) 
        // '<S4>:1:116' class(counter + 1) = 2;
        worldGenerator_B.class_next[(int32_T)
          (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 2.0;

        //  Jersey Barrier
      } else if (worldGenerator_B.size >= 16.0) {
        // '<S4>:1:118' elseif(size >= 16)
        // '<S4>:1:119' class(counter + 1) = 4;
        worldGenerator_B.class_next[(int32_T)
          (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 4.0;
      } else {
        // '<S4>:1:120' else
        // '<S4>:1:121' class(counter + 1) = 3;
        worldGenerator_B.class_next[(int32_T)
          (worldGenerator_DW.Memory_PreviousInput + 1.0) - 1] = 3.0;
      }

      // '<S4>:1:123' x_a(counter+1) = x_pose;
      worldGenerator_B.x_aNext[(int32_T)(worldGenerator_DW.Memory_PreviousInput
        + 1.0) - 1] = worldGenerator_B.tmpX;

      // '<S4>:1:124' y_a(counter+1) = y_pose;
      worldGenerator_B.y_aNext[(int32_T)(worldGenerator_DW.Memory_PreviousInput
        + 1.0) - 1] = worldGenerator_B.tmpY;

      // '<S4>:1:125' counter = counter + 1;
      worldGenerator_B.counter = worldGenerator_DW.Memory_PreviousInput + 1.0;
    }

    // '<S4>:1:127' class_next = class;
    // '<S4>:1:128' x_aNext = x_a;
    // '<S4>:1:129' y_aNext = y_a;
  } else {
    // '<S4>:1:130' else
    // '<S4>:1:131' class_next = class;
    // '<S4>:1:132' x_aNext = x_a;
    // '<S4>:1:133' y_aNext = y_a;
  }

  // MATLAB Function: '<Root>/Generate_file' incorporates:
  //   Memory: '<Root>/Memory3'

  // '<S4>:1:135' counter_next = counter;
  // MATLAB Function 'Generate_file': '<S1>:1'
  // '<S1>:1:4' if(stop && counter == 0)
  if (worldGenerator_B.In1_c.Data && (worldGenerator_DW.Memory3_PreviousInput ==
       0.0)) {
    // '/home/jupan/cvchallenge_task3_ws/src/cvchallenge_task3/worlds/test.world' 
    // '<S1>:1:6' fid = fopen('gazebo_output.world', 'w+');
    worldGenerator_B.size = worldGenerator_fopen();

    //  Fixed phase 1
    //  <sdf version='1.4'>
    // '<S1>:1:10' fprintf(fid, '<sdf version=''1.4''>\n');
    worldGenerator_cfprintf(worldGenerator_B.size);

    //    <world name='default'>
    // '<S1>:1:12' fprintf(fid, '<world name=''default''>\n');
    worldGenerator_cfprintf_j(worldGenerator_B.size);

    //      <light name='sun' type='directional'>
    // '<S1>:1:14' fprintf(fid, '<light name=''sun'' type=''directional''>\n');
    worldGenerator_cfprintf_jz(worldGenerator_B.size);

    //        <cast_shadows>1</cast_shadows>
    // '<S1>:1:16' fprintf(fid, '<cast_shadows>1</cast_shadows>\n');
    worldGenerator_cfprintf_jzm(worldGenerator_B.size);

    //        <pose>0 0 10 0 -0 0</pose>
    // '<S1>:1:18' fprintf(fid, '<pose>0 0 10 0 -0 0</pose>\n');
    worldGenerator_cfprintf_jzm3(worldGenerator_B.size);

    //        <diffuse>0.8 0.8 0.8 1</diffuse>
    // '<S1>:1:20' fprintf(fid, '<diffuse>0.8 0.8 0.8 1</diffuse>\n');
    worldGenerator_cfprintf_jzm3p(worldGenerator_B.size);

    //        <specular>0.2 0.2 0.2 1</specular>
    // '<S1>:1:22' fprintf(fid, '<specular>0.2 0.2 0.2 1</specular>\n');
    worldGenerator_cfprintf_jzm3pq(worldGenerator_B.size);

    //        <attenuation>
    // '<S1>:1:24' fprintf(fid, '<attenuation>\n');
    worldGenerator_cfprintf_jzm3pqu(worldGenerator_B.size);

    //          <range>1000</range>
    // '<S1>:1:26' fprintf(fid, '<range>1000</range>\n');
    worldGenerato_cfprintf_jzm3pquv(worldGenerator_B.size);

    //          <constant>0.9</constant>
    // '<S1>:1:28' fprintf(fid, '<constant>0.9</constant>\n');
    worldGenerat_cfprintf_jzm3pquva(worldGenerator_B.size);

    //          <linear>0.01</linear>
    // '<S1>:1:30' fprintf(fid, '<linear>0.01</linear>\n');
    worldGenera_cfprintf_jzm3pquvai(worldGenerator_B.size);

    //          <quadratic>0.001</quadratic>
    // '<S1>:1:32' fprintf(fid, '<quadratic>0.001</quadratic>\n');
    worldGener_cfprintf_jzm3pquvai5(worldGenerator_B.size);

    //        </attenuation>
    // '<S1>:1:34' fprintf(fid, '</attenuation>\n');
    worldGene_cfprintf_jzm3pquvai5o(worldGenerator_B.size);

    //        <direction>-0.5 0.1 -0.9</direction>
    // '<S1>:1:36' fprintf(fid, '<direction>-0.5 0.1 -0.9</direction>\n');
    worldGen_cfprintf_jzm3pquvai5ov(worldGenerator_B.size);

    //      </light>
    // '<S1>:1:38' fprintf(fid, '</light>\n');
    worldGe_cfprintf_jzm3pquvai5ovv(worldGenerator_B.size);

    //      <model name='ground_plane'>
    // '<S1>:1:40' fprintf(fid, '<model name=''ground_plane''>\n');
    worldG_cfprintf_jzm3pquvai5ovv5(worldGenerator_B.size);

    //        <static>1</static>
    // '<S1>:1:42' fprintf(fid, '<static>1</static>\n');
    worldG_cfprintf_d(worldGenerator_B.size);

    //        <link name='link'>
    // '<S1>:1:44' fprintf(fid, '<link name=''link''>\n');
    worldG_cfprintf_a(worldGenerator_B.size);

    //          <collision name='collision'>
    // '<S1>:1:46' fprintf(fid, '<collision name=''collision''>\n');
    worldG_cfprintf_n(worldGenerator_B.size);

    //            <geometry>
    // '<S1>:1:48' fprintf(fid, '<geometry>\n');
    worldG_cfprintf_g(worldGenerator_B.size);

    //              <plane>
    // '<S1>:1:50' fprintf(fid, '<plane>\n');
    worldG_cfprintf_j(worldGenerator_B.size);

    //                <normal>0 0 1</normal>
    // '<S1>:1:52' fprintf(fid, '<normal>0 0 1</normal>\n');
    worldG_cfprintf_nd(worldGenerator_B.size);

    //                <size>100 100</size>
    // '<S1>:1:54' fprintf(fid, '<size>100 100</size>\n');
    worldG_cfprintf_aa(worldGenerator_B.size);

    //              </plane>
    // '<S1>:1:56' fprintf(fid, '</plane>\n');
    worldG_cfprintf_b(worldGenerator_B.size);

    //            </geometry>
    // '<S1>:1:58' fprintf(fid, '</geometry>\n');
    worldG_cfprintf_i(worldGenerator_B.size);

    //            <surface>
    // '<S1>:1:60' fprintf(fid, '<surface>\n');
    worldG_cfprintf_c(worldGenerator_B.size);

    //              <friction>
    // '<S1>:1:62' fprintf(fid, '<friction>\n');
    worldG_cfprintf_nj(worldGenerator_B.size);

    //                <ode>
    // '<S1>:1:64' fprintf(fid, '<ode>\n');
    worldG_cfprintf_k(worldGenerator_B.size);

    //                  <mu>100</mu>
    // '<S1>:1:66' fprintf(fid, '<mu>100</mu>\n');
    worldG_cfprintf_l(worldGenerator_B.size);

    //                  <mu2>50</mu2>
    // '<S1>:1:68' fprintf(fid, '<mu2>50</mu2>\n');
    worldG_cfprintf_aam(worldGenerator_B.size);

    //                </ode>
    // '<S1>:1:70' fprintf(fid, '</ode>\n');
    worldG_cfprintf_j2(worldGenerator_B.size);

    //              </friction>
    // '<S1>:1:72' fprintf(fid, '</friction>\n');
    worldG_cfprintf_h(worldGenerator_B.size);

    //              <bounce/>
    // '<S1>:1:74' fprintf(fid, '<bounce/>\n');
    worldG_cfprintf_f(worldGenerator_B.size);

    //              <contact>
    // '<S1>:1:76' fprintf(fid, '<contact>\n');
    worldG_cfprintf_nd1(worldGenerator_B.size);

    //                <ode/>
    // '<S1>:1:78' fprintf(fid, '<ode/>\n');
    worldG_cfprintf_dm(worldGenerator_B.size);

    //              </contact>
    // '<S1>:1:80' fprintf(fid, '</contact>\n');
    worldG_cfprintf_g3(worldGenerator_B.size);

    //            </surface>
    // '<S1>:1:82' fprintf(fid, '</surface>\n');
    worldG_cfprintf_kl(worldGenerator_B.size);

    //            <max_contacts>10</max_contacts>
    // '<S1>:1:84' fprintf(fid, '<max_contacts>10</max_contacts>\n');
    worldG_cfprintf_iu(worldGenerator_B.size);

    //          </collision>
    // '<S1>:1:86' fprintf(fid, '</collision>\n');
    worldG_cfprintf_ne(worldGenerator_B.size);

    //          <visual name='visual'>
    // '<S1>:1:88' fprintf(fid, '<visual name=''visual''>\n');
    worldG_cfprintf_o(worldGenerator_B.size);

    //            <cast_shadows>0</cast_shadows>
    // '<S1>:1:90' fprintf(fid, '<cast_shadows>0</cast_shadows>\n');
    worldG_cfprintf_iuw(worldGenerator_B.size);

    //            <geometry>
    // '<S1>:1:92' fprintf(fid, '<geometry>\n');
    worldG_cfprintf_g(worldGenerator_B.size);

    //              <plane>
    // '<S1>:1:94' fprintf(fid, '<plane>\n');
    worldG_cfprintf_j(worldGenerator_B.size);

    //                <normal>0 0 1</normal>
    // '<S1>:1:96' fprintf(fid, '<normal>0 0 1</normal>\n');
    worldG_cfprintf_nd(worldGenerator_B.size);

    //                <size>100 100</size>
    // '<S1>:1:98' fprintf(fid, '<size>100 100</size>\n');
    worldG_cfprintf_aa(worldGenerator_B.size);

    //              </plane>
    // '<S1>:1:100' fprintf(fid, '</plane>\n');
    worldG_cfprintf_b(worldGenerator_B.size);

    //            </geometry>
    // '<S1>:1:102' fprintf(fid, '</geometry>\n');
    worldG_cfprintf_i(worldGenerator_B.size);

    //            <material>
    // '<S1>:1:104' fprintf(fid, '<material>\n');
    worldG_cfprintf_hi(worldGenerator_B.size);

    //              <script>
    // '<S1>:1:106' fprintf(fid, '<script>\n');
    worldG_cfprintf_ld(worldGenerator_B.size);

    //                <uri>file://media/materials/scripts/gazebo.material</uri>
    // '<S1>:1:108' fprintf(fid, '<uri>file://media/materials/scripts/gazebo.material</uri>\n'); 
    worldG_cfprintf_cb(worldGenerator_B.size);

    //                <name>Gazebo/Grey</name>
    // '<S1>:1:110' fprintf(fid, '<name>Gazebo/Grey</name>\n');
    worldG_cfprintf_jf(worldGenerator_B.size);

    //              </script>
    // '<S1>:1:112' fprintf(fid, '</script>\n');
    worldG_cfprintf_hb(worldGenerator_B.size);

    //            </material>
    // '<S1>:1:114' fprintf(fid, '</material>\n');
    worldG_cfprintf_ox(worldGenerator_B.size);

    //          </visual>
    // '<S1>:1:116' fprintf(fid, '</visual>\n');
    worldG_cfprintf_dn(worldGenerator_B.size);

    //          <velocity_decay>
    // '<S1>:1:118' fprintf(fid, '<velocity_decay>\n');
    worldG_cfprintf_gx(worldGenerator_B.size);

    //            <linear>0</linear>
    // '<S1>:1:120' fprintf(fid, '<linear>0</linear>\n');
    worldG_cfprintf_d3(worldGenerator_B.size);

    //            <angular>0</angular>
    // '<S1>:1:122' fprintf(fid, '<angular>0</angular>\n');
    worldG_cfprintf_ie(worldGenerator_B.size);

    //          </velocity_decay>
    // '<S1>:1:124' fprintf(fid, '</velocity_decay>\n');
    worldG_cfprintf_ib(worldGenerator_B.size);

    //          <self_collide>0</self_collide>
    // '<S1>:1:126' fprintf(fid, '<self_collide>0</self_collide>\n');
    worldG_cfprintf_iq(worldGenerator_B.size);

    //          <kinematic>0</kinematic>
    // '<S1>:1:128' fprintf(fid, '<kinematic>0</kinematic>\n');
    worldG_cfprintf_l0(worldGenerator_B.size);

    //          <gravity>1</gravity>
    // '<S1>:1:130' fprintf(fid, '<gravity>1</gravity>\n');
    worldG_cfprintf_o4(worldGenerator_B.size);

    //        </link>
    // '<S1>:1:132' fprintf(fid, '</link>\n');
    worldG_cfprintf_f4(worldGenerator_B.size);

    //      </model>
    // '<S1>:1:134' fprintf(fid, '</model>\n');
    worldG_cfprintf_jp(worldGenerator_B.size);

    //      <physics type='ode'>
    // '<S1>:1:136' fprintf(fid, '<physics type=''ode''>\n');
    worldG_cfprintf_klq(worldGenerator_B.size);

    //        <max_step_size>0.001</max_step_size>
    // '<S1>:1:138' fprintf(fid, '<max_step_size>0.001</max_step_size>\n');
    worldG_cfprintf_lf(worldGenerator_B.size);

    //        <real_time_factor>1</real_time_factor>
    // '<S1>:1:140' fprintf(fid, '<real_time_factor>1</real_time_factor>\n');
    worldG_cfprintf_nx(worldGenerator_B.size);

    //        <real_time_update_rate>1000</real_time_update_rate>
    // '<S1>:1:142' fprintf(fid, '<real_time_update_rate>1000</real_time_update_rate>\n'); 
    worldG_cfprintf_ol(worldGenerator_B.size);

    //        <gravity>0 0 -9.8</gravity>
    // '<S1>:1:144' fprintf(fid, '<gravity>0 0 -9.8</gravity>\n');
    worldG_cfprintf_e(worldGenerator_B.size);

    //      </physics>
    // '<S1>:1:146' fprintf(fid, '</physics>\n');
    worldG_cfprintf_fy(worldGenerator_B.size);

    //      <scene>
    // '<S1>:1:148' fprintf(fid, '<scene>\n');
    worldG_cfprintf_p(worldGenerator_B.size);

    //        <ambient>0.4 0.4 0.4 1</ambient>
    // '<S1>:1:150' fprintf(fid, '<ambient>0.4 0.4 0.4 1</ambient>\n');
    worldG_cfprintf_cl(worldGenerator_B.size);

    //        <background>0.7 0.7 0.7 1</background>
    // '<S1>:1:152' fprintf(fid, '<background>0.7 0.7 0.7 1</background>\n');
    worldG_cfprintf_p1(worldGenerator_B.size);

    //        <shadows>1</shadows>
    // '<S1>:1:154' fprintf(fid, '<shadows>1</shadows>\n');
    worldG_cfprintf_dmo(worldGenerator_B.size);

    //      </scene>
    // '<S1>:1:156' fprintf(fid, '</scene>\n');
    worldG_cfprintf_kd(worldGenerator_B.size);

    //      <spherical_coordinates>
    // '<S1>:1:158' fprintf(fid, '<spherical_coordinates>\n');
    worldG_cfprintf_li(worldGenerator_B.size);

    //        <surface_model>EARTH_WGS84</surface_model>
    // '<S1>:1:160' fprintf(fid, '<surface_model>EARTH_WGS84</surface_model>\n'); 
    worldG_cfprintf_ga(worldGenerator_B.size);

    //        <latitude_deg>0</latitude_deg>
    // '<S1>:1:162' fprintf(fid, '<latitude_deg>0</latitude_deg>\n');
    worldG_cfprintf_nz(worldGenerator_B.size);

    //        <longitude_deg>0</longitude_deg>
    // '<S1>:1:164' fprintf(fid, '<longitude_deg>0</longitude_deg>\n');
    worldG_cfprintf_o5(worldGenerator_B.size);

    //        <elevation>0</elevation>
    // '<S1>:1:166' fprintf(fid, '<elevation>0</elevation>\n');
    worldG_cfprintf_no(worldGenerator_B.size);

    //        <heading_deg>0</heading_deg>
    // '<S1>:1:168' fprintf(fid, '<heading_deg>0</heading_deg>\n');
    worldG_cfprintf_pq(worldGenerator_B.size);

    //      </spherical_coordinates>
    // '<S1>:1:170' fprintf(fid, '</spherical_coordinates>\n');
    worldG_cfprintf_c0(worldGenerator_B.size);

    //      <state world_name='default'>
    // '<S1>:1:172' fprintf(fid, '<state world_name=''default''>\n');
    worldG_cfprintf_ip(worldGenerator_B.size);

    //        <sim_time>3437 164000000</sim_time>
    // '<S1>:1:174' fprintf(fid, '<sim_time>3437 164000000</sim_time>\n');
    worldG_cfprintf_pp(worldGenerator_B.size);

    //        <real_time>3496 331503405</real_time>
    // '<S1>:1:176' fprintf(fid, '<real_time>3496 331503405</real_time>\n');
    worldG_cfprintf_pv(worldGenerator_B.size);

    //        <wall_time>1490996669 500379643</wall_time>
    // '<S1>:1:178' fprintf(fid, '<wall_time>1490996669 500379643</wall_time>\n'); 
    worldG_cfprintf_cw(worldGenerator_B.size);

    //        <model name='ground_plane'>
    // '<S1>:1:180' fprintf(fid, '<model name=''ground_plane''>\n');
    worldG_cfprintf_jzm3pquvai5ovv5(worldGenerator_B.size);

    //          <pose>0 0 0 0 -0 0</pose>
    // '<S1>:1:182' fprintf(fid, '<pose>0 0 0 0 -0 0</pose>\n');
    worldG_cfprintf_od(worldGenerator_B.size);

    //          <link name='link'>
    // '<S1>:1:184' fprintf(fid, '<link name=''link''>\n');
    worldG_cfprintf_a(worldGenerator_B.size);

    //            <pose>0 0 0 0 -0 0</pose>
    // '<S1>:1:186' fprintf(fid, '<pose>0 0 0 0 -0 0</pose>\n');
    worldG_cfprintf_od(worldGenerator_B.size);

    //            <velocity>0 0 0 0 -0 0</velocity>
    // '<S1>:1:188' fprintf(fid, '<velocity>0 0 0 0 -0 0</velocity>\n');
    worldG_cfprintf_g0(worldGenerator_B.size);

    //            <acceleration>0 0 0 0 -0 0</acceleration>
    // '<S1>:1:190' fprintf(fid, '<acceleration>0 0 0 0 -0 0</acceleration>\n'); 
    worldG_cfprintf_jfk(worldGenerator_B.size);

    //            <wrench>0 0 0 0 -0 0</wrench>
    // '<S1>:1:192' fprintf(fid, '<wrench>0 0 0 0 -0 0</wrench>\n');
    worldG_cfprintf_gw(worldGenerator_B.size);

    //          </link>
    // '<S1>:1:194' fprintf(fid, '</link>\n');
    worldG_cfprintf_f4(worldGenerator_B.size);

    //        </model>
    // '<S1>:1:196' fprintf(fid, '</model>\n');
    worldG_cfprintf_jp(worldGenerator_B.size);

    // '<S1>:1:199' counter1 = 1;
    worldGenerator_B.tmpX = 1.0;

    // '<S1>:1:200' counter2 = 1;
    worldGenerator_B.tmpY = 1.0;

    // '<S1>:1:201' counter7 = 1;
    worldGenerator_B.x_max = 1.0;

    // '<S1>:1:202' counter8 = 1;
    worldGenerator_B.x_min = 1.0;

    //  First phase
    // '<S1>:1:204' for i = 1:20
    for (k = 0; k < 20; k++) {
      // '<S1>:1:205' if(x_aNext(i) ~= 0 && y_aNext(i) ~= 0)
      if ((worldGenerator_B.x_aNext[k] != 0.0) && (worldGenerator_B.y_aNext[k]
           != 0.0)) {
        // '<S1>:1:206' switch class(i)
        switch ((int32_T)worldGenerator_B.class_next[k]) {
         case 1:
          // '<S1>:1:207' case 1 % unit_box
          //  unit_box
          //  <model name='unit_box_1'>
          // '<S1>:1:209' fprintf(fid, '<model name=''unit_box_');
          worldG_cfprintf_i3(worldGenerator_B.size);

          // '<S1>:1:210' fprintf(fid, '%d', int8(counter1));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.tmpX);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:211' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:213' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:214' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:214' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:215' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:215' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:216' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:216' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:217' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:217' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:218' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:218' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:219' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:220' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <link name='link'>
          // '<S1>:1:222' fprintf(fid, ' <link name=''link''>\n');
          worldG_cfprintf_dw(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:224' fprintf(fid, '  <pose>');
          worldG_cfprintf_g2(worldGenerator_B.size);

          // '<S1>:1:225' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:225' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:226' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:226' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:227' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:227' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:228' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:228' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:229' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:229' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:230' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:231' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <velocity>0 0 0 0 -0 0</velocity>
          // '<S1>:1:233' fprintf(fid, '  <velocity>');
          worldG_cfprintf_aj(worldGenerator_B.size);

          // '<S1>:1:234' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:234' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:235' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:235' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:236' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:236' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:237' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:237' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:238' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:238' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:239' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:240' fprintf(fid, '</velocity>\n');
          worldG_cfprintf_gd(worldGenerator_B.size);

          //  <acceleration>0 0 0 0 -0 0</acceleration>
          // '<S1>:1:242' fprintf(fid, '  <acceleration>');
          worldG_cfprintf_m(worldGenerator_B.size);

          // '<S1>:1:243' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:243' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:244' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:244' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:245' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:245' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:246' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:246' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:247' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:247' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:248' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:249' fprintf(fid, '</acceleration>\n');
          worldG_cfprintf_by(worldGenerator_B.size);

          //  <wrench>0 0 0 0 -0 0</wrench>
          // '<S1>:1:251' fprintf(fid, '  <wrench>');
          worldG_cfprintf_k1(worldGenerator_B.size);

          // '<S1>:1:252' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:252' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:253' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:253' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:254' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:254' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:255' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:255' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:256' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:256' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:257' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:258' fprintf(fid, '</wrench>\n');
          worldG_cfprintf_pp5(worldGenerator_B.size);

          //  </link>
          // '<S1>:1:260' fprintf(fid, ' </link>\n');
          worldG_cfprintf_fv(worldGenerator_B.size);

          //  </model>
          // '<S1>:1:262' fprintf(fid, '</model>\n');
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:263' counter1 = counter1 + 1;
          worldGenerator_B.tmpX++;
          break;

         case 2:
          // '<S1>:1:264' case 2 % unit_sphere
          //  unit_sphere
          //  <model name='unit_box_1'>
          // '<S1>:1:266' fprintf(fid, '<model name=''unit_sphere_');
          worldG_cfprintf_an(worldGenerator_B.size);

          // '<S1>:1:267' fprintf(fid, '%d', int8(counter2));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.tmpY);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:268' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:270' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:271' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:271' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:272' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:272' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:273' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:273' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:274' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:274' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:275' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:275' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:276' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:277' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <link name='link'>
          // '<S1>:1:279' fprintf(fid, ' <link name=''link''>\n');
          worldG_cfprintf_dw(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:281' fprintf(fid, '  <pose>');
          worldG_cfprintf_g2(worldGenerator_B.size);

          // '<S1>:1:282' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:282' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:283' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:283' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:284' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:284' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:285' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:285' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:286' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:286' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:287' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:288' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <velocity>0 0 0 0 -0 0</velocity>
          // '<S1>:1:290' fprintf(fid, '  <velocity>');
          worldG_cfprintf_aj(worldGenerator_B.size);

          // '<S1>:1:291' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:291' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:292' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:292' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:293' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:293' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:294' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:294' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:295' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:295' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:296' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:297' fprintf(fid, '</velocity>\n');
          worldG_cfprintf_gd(worldGenerator_B.size);

          //  <acceleration>0 0 0 0 -0 0</acceleration>
          // '<S1>:1:299' fprintf(fid, '  <acceleration>');
          worldG_cfprintf_m(worldGenerator_B.size);

          // '<S1>:1:300' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:300' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:301' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:301' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:302' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:302' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:303' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:303' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:304' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:304' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:305' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:306' fprintf(fid, '</acceleration>\n');
          worldG_cfprintf_by(worldGenerator_B.size);

          //  <wrench>0 0 0 0 -0 0</wrench>
          // '<S1>:1:308' fprintf(fid, '  <wrench>');
          worldG_cfprintf_k1(worldGenerator_B.size);

          // '<S1>:1:309' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:309' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:310' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:310' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:311' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:311' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:312' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:312' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:313' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:313' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:314' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:315' fprintf(fid, '</wrench>\n');
          worldG_cfprintf_pp5(worldGenerator_B.size);

          //  </link>
          // '<S1>:1:317' fprintf(fid, ' </link>\n');
          worldG_cfprintf_fv(worldGenerator_B.size);

          //  </model>
          // '<S1>:1:319' fprintf(fid, '</model>\n');
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:320' counter2 = counter2 + 1;
          worldGenerator_B.tmpY++;
          break;

         case 3:
          // '<S1>:1:321' case 3
          //  <model name='unit_box_1'>
          // '<S1>:1:323' fprintf(fid, '<model name=''Construction Barrel_');
          worldG_cfprintf_ht(worldGenerator_B.size);

          // '<S1>:1:324' fprintf(fid, '%d', int8(counter7));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.x_max);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:325' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:327' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:328' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:328' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:329' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:329' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:330' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:330' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:331' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:331' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:332' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:332' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:333' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:334' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <link name='link'>
          // '<S1>:1:336' fprintf(fid, ' <link name=''link''>\n');
          worldG_cfprintf_dw(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:338' fprintf(fid, '  <pose>');
          worldG_cfprintf_g2(worldGenerator_B.size);

          // '<S1>:1:339' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:339' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:340' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:340' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:341' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:341' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:342' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:342' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:343' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:343' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:344' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:345' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <velocity>0 0 0 0 -0 0</velocity>
          // '<S1>:1:347' fprintf(fid, '  <velocity>');
          worldG_cfprintf_aj(worldGenerator_B.size);

          // '<S1>:1:348' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:348' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:349' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:349' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:350' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:350' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:351' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:351' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:352' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:352' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:353' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:354' fprintf(fid, '</velocity>\n');
          worldG_cfprintf_gd(worldGenerator_B.size);

          //  <acceleration>0 0 0 0 -0 0</acceleration>
          // '<S1>:1:356' fprintf(fid, '  <acceleration>');
          worldG_cfprintf_m(worldGenerator_B.size);

          // '<S1>:1:357' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:357' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:358' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:358' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:359' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:359' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:360' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:360' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:361' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:361' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:362' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:363' fprintf(fid, '</acceleration>\n');
          worldG_cfprintf_by(worldGenerator_B.size);

          //  <wrench>0 0 0 0 -0 0</wrench>
          // '<S1>:1:365' fprintf(fid, '  <wrench>');
          worldG_cfprintf_k1(worldGenerator_B.size);

          // '<S1>:1:366' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:366' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:367' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:367' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:368' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:368' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:369' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:369' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:370' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:370' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:371' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:372' fprintf(fid, '</wrench>\n');
          worldG_cfprintf_pp5(worldGenerator_B.size);

          //  </link>
          // '<S1>:1:374' fprintf(fid, ' </link>\n');
          worldG_cfprintf_fv(worldGenerator_B.size);

          //  </model>
          // '<S1>:1:376' fprintf(fid, '</model>\n');
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:377' counter7 = counter7 + 1;
          worldGenerator_B.x_max++;
          break;

         case 4:
          // '<S1>:1:378' case 4
          //  <model name='unit_box_1'>
          // '<S1>:1:380' fprintf(fid, '<model name=''jersey_barrier_');
          worldG_cfprintf_k3(worldGenerator_B.size);

          // '<S1>:1:381' fprintf(fid, '%d', int8(counter8));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.x_min);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:382' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:384' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:385' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:385' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:386' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:386' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:387' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:387' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:388' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:388' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:389' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:389' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:390' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:391' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <link name='link'>
          // '<S1>:1:393' fprintf(fid, ' <link name=''link''>\n');
          worldG_cfprintf_dw(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:395' fprintf(fid, '  <pose>');
          worldG_cfprintf_g2(worldGenerator_B.size);

          // '<S1>:1:396' fprintf(fid, '%f', x_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[k]);

          // '<S1>:1:396' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:397' fprintf(fid, '%f', y_aNext(i));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[k]);

          // '<S1>:1:397' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:398' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:398' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:399' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:399' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:400' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:400' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:401' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:402' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <velocity>0 0 0 0 -0 0</velocity>
          // '<S1>:1:404' fprintf(fid, '  <velocity>');
          worldG_cfprintf_aj(worldGenerator_B.size);

          // '<S1>:1:405' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:405' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:406' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:406' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:407' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:407' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:408' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:408' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:409' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:409' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:410' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:411' fprintf(fid, '</velocity>\n');
          worldG_cfprintf_gd(worldGenerator_B.size);

          //  <acceleration>0 0 0 0 -0 0</acceleration>
          // '<S1>:1:413' fprintf(fid, '  <acceleration>');
          worldG_cfprintf_m(worldGenerator_B.size);

          // '<S1>:1:414' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:414' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:415' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:415' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:416' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:416' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:417' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:417' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:418' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:418' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:419' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:420' fprintf(fid, '</acceleration>\n');
          worldG_cfprintf_by(worldGenerator_B.size);

          //  <wrench>0 0 0 0 -0 0</wrench>
          // '<S1>:1:422' fprintf(fid, '  <wrench>');
          worldG_cfprintf_k1(worldGenerator_B.size);

          // '<S1>:1:423' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:423' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:424' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:424' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:425' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:425' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:426' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:426' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:427' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:427' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:428' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:429' fprintf(fid, '</wrench>\n');
          worldG_cfprintf_pp5(worldGenerator_B.size);

          //  </link>
          // '<S1>:1:431' fprintf(fid, ' </link>\n');
          worldG_cfprintf_fv(worldGenerator_B.size);

          //  </model>
          // '<S1>:1:433' fprintf(fid, '</model>\n');
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:434' counter8 = counter8 + 1;
          worldGenerator_B.x_min++;
          break;

         default:
          // '<S1>:1:435' otherwise
          // '<S1>:1:436' disp('This class does not exist!')
          break;
        }
      }
    }

    //  </state>
    // '<S1>:1:441' fprintf(fid, '</state>\n');
    worldG_cfprintf_ll(worldGenerator_B.size);

    // '<S1>:1:443' counter3 = 1;
    worldGenerator_B.tmpX = 1.0;

    // '<S1>:1:444' counter4 = 1;
    worldGenerator_B.tmpY = 1.0;

    // '<S1>:1:445' counter5 = 1;
    worldGenerator_B.x_max = 1.0;

    // '<S1>:1:446' counter6 = 1;
    worldGenerator_B.x_min = 1.0;

    //  Second phase
    // '<S1>:1:448' for j = 1:20
    for (b_i = 0; b_i < 20; b_i++) {
      // '<S1>:1:449' if(x_aNext(j) ~= 0 && y_aNext(j) ~= 0)
      if ((worldGenerator_B.x_aNext[b_i] != 0.0) &&
          (worldGenerator_B.y_aNext[b_i] != 0.0)) {
        // '<S1>:1:450' switch class(j)
        switch ((int32_T)worldGenerator_B.class_next[b_i]) {
         case 1:
          // '<S1>:1:451' case 1 % unit_box
          //  unit_box
          //  <model name='unit_box_1'>
          // '<S1>:1:453' fprintf(fid, '<model name=''unit_box_');
          worldG_cfprintf_i3(worldGenerator_B.size);

          // '<S1>:1:454' fprintf(fid, '%d', int8(counter3));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.tmpX);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:455' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:457' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:458' fprintf(fid, '%f', x_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[b_i]);

          // '<S1>:1:458' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:459' fprintf(fid, '%f', y_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[b_i]);

          // '<S1>:1:459' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:460' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:460' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:461' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:461' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:462' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:462' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:463' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:464' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <link name='link'>
          // '<S1>:1:466' fprintf(fid, ' <link name=''link''>\n');
          worldG_cfprintf_dw(worldGenerator_B.size);

          //  <inertial>
          // '<S1>:1:468' fprintf(fid, '  <inertial>\n');
          worldG_cfprintf_als(worldGenerator_B.size);

          //  <mass>1</mass>
          // '<S1>:1:470' fprintf(fid, '   <mass>1</mass>\n');
          worldG_cfprintf_dxl(worldGenerator_B.size);

          //  <inertia>
          // '<S1>:1:472' fprintf(fid, '   <inertia>\n');
          worldG_cfprintf_p3(worldGenerator_B.size);

          //  <ixx>1</ixx>
          // '<S1>:1:474' fprintf(fid, '    <ixx>1</ixx>\n');
          worldG_cfprintf_ge(worldGenerator_B.size);

          // '<S1>:1:475' fprintf(fid, '    <ixy>0</ixy>\n');
          worldG_cfprintf_oc(worldGenerator_B.size);

          // '<S1>:1:476' fprintf(fid, '    <ixz>0</ixz>\n');
          worldG_cfprintf_kg(worldGenerator_B.size);

          // '<S1>:1:477' fprintf(fid, '    <iyy>1</iyy>\n');
          worldG_cfprintf_ny(worldGenerator_B.size);

          // '<S1>:1:478' fprintf(fid, '    <iyz>0</iyz>\n');
          worldG_cfprintf_f3(worldGenerator_B.size);

          // '<S1>:1:479' fprintf(fid, '    <izz>1</izz>\n');
          worldG_cfprintf_gp(worldGenerator_B.size);

          //  </inertia>
          // '<S1>:1:481' fprintf(fid, '   </inertia>\n');
          worldG_cfprintf_ej(worldGenerator_B.size);

          //  </inertial>
          // '<S1>:1:483' fprintf(fid, '  </inertial>\n');
          worldG_cfprintf_ly(worldGenerator_B.size);

          //  <collision name='collision'>
          // '<S1>:1:485' fprintf(fid, '  <collision name=''collision''>\n');
          worldG_cfprintf_ev(worldGenerator_B.size);

          //  <geometry>
          // '<S1>:1:487' fprintf(fid, '   <geometry>\n');
          worldG_cfprintf_eq(worldGenerator_B.size);

          //  <box>
          // '<S1>:1:489' fprintf(fid, '    <box>\n');
          worldG_cfprintf_a5(worldGenerator_B.size);

          //  <size>1 1 1</size>
          // '<S1>:1:491' fprintf(fid, '     <size>');
          worldG_cfprintf_lw(worldGenerator_B.size);

          // '<S1>:1:492' fprintf(fid, '%d', int8(1));
          worldG_cfprintf_h4(worldGenerator_B.size, 1);

          // '<S1>:1:492' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:493' fprintf(fid, '%d', int8(1));
          worldG_cfprintf_h4(worldGenerator_B.size, 1);

          // '<S1>:1:493' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:494' fprintf(fid, '%d', int8(1));
          worldG_cfprintf_h4(worldGenerator_B.size, 1);

          // '<S1>:1:495' fprintf(fid, '</size>\n');
          worldG_cfprintf_pl(worldGenerator_B.size);

          //  </box>
          // '<S1>:1:497' fprintf(fid, '    </box>\n');
          worldG_cfprintf_cn(worldGenerator_B.size);

          //  </geometry>
          // '<S1>:1:499' fprintf(fid, '   </geometry>\n');
          worldG_cfprintf_gn(worldGenerator_B.size);

          //  <max_contacts>10</max_contacts>
          // '<S1>:1:501' fprintf(fid, '   <max_contacts>10</max_contacts>\n');
          worldG_cfprintf_kr(worldGenerator_B.size);

          //  <surface>
          // '<S1>:1:503' fprintf(fid, '   <surface>\n');
          worldG_cfprintf_j0(worldGenerator_B.size);

          //  <bounce/>
          // '<S1>:1:505' fprintf(fid, '    <bounce/>\n');
          worldG_cfprintf_j1(worldGenerator_B.size);

          //  <friction>
          // '<S1>:1:507' fprintf(fid, '    <friction>\n');
          worldG_cfprintf_fvz(worldGenerator_B.size);

          //  <ode/>
          // '<S1>:1:509' fprintf(fid, '     <ode/>\n');
          worldG_cfprintf_n2(worldGenerator_B.size);

          //  </friction>
          // '<S1>:1:511' fprintf(fid, '    </friction>\n');
          worldG_cfprintf_k4(worldGenerator_B.size);

          //  <contact>
          // '<S1>:1:513' fprintf(fid, '    <contact>\n');
          worldG_cfprintf_aly(worldGenerator_B.size);

          //  <ode/>
          // '<S1>:1:515' fprintf(fid, '     <ode/>\n');
          worldG_cfprintf_n2(worldGenerator_B.size);

          //  </contact>
          // '<S1>:1:517' fprintf(fid, '    </contact>\n');
          worldG_cfprintf_fw(worldGenerator_B.size);

          //  </surface>
          // '<S1>:1:519' fprintf(fid, '   </surface>\n');
          worldG_cfprintf_i1(worldGenerator_B.size);

          //  </collision>
          // '<S1>:1:521' fprintf(fid, '  </collision>\n');
          worldG_cfprintf_ndp(worldGenerator_B.size);

          //  <visual name='visual'>
          // '<S1>:1:523' fprintf(fid, '  <visual name=''visual''>\n');
          worldG_cfprintf_dk(worldGenerator_B.size);

          //  <geometry>
          // '<S1>:1:525' fprintf(fid, '   <geometry>\n');
          worldG_cfprintf_eq(worldGenerator_B.size);

          //  <box>
          // '<S1>:1:527' fprintf(fid, '    <box>\n');
          worldG_cfprintf_a5(worldGenerator_B.size);

          //  <size>1 1 1</size>
          // '<S1>:1:529' fprintf(fid, '     <size>');
          worldG_cfprintf_lw(worldGenerator_B.size);

          // '<S1>:1:530' fprintf(fid, '%d', int8(1));
          worldG_cfprintf_h4(worldGenerator_B.size, 1);

          // '<S1>:1:530' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:531' fprintf(fid, '%d', int8(1));
          worldG_cfprintf_h4(worldGenerator_B.size, 1);

          // '<S1>:1:531' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:532' fprintf(fid, '%d', int8(1));
          worldG_cfprintf_h4(worldGenerator_B.size, 1);

          // '<S1>:1:533' fprintf(fid, '</size>\n');
          worldG_cfprintf_pl(worldGenerator_B.size);

          //  </box>
          // '<S1>:1:535' fprintf(fid, '    </box>\n');
          worldG_cfprintf_cn(worldGenerator_B.size);

          //  </geometry>
          // '<S1>:1:537' fprintf(fid, '   </geometry>\n');
          worldG_cfprintf_gn(worldGenerator_B.size);

          //  <material>
          // '<S1>:1:539' fprintf(fid, '   <material>\n');
          worldG_cfprintf_ln(worldGenerator_B.size);

          //  <script>
          // '<S1>:1:541' fprintf(fid, '    <script>\n');
          worldG_cfprintf_fa(worldGenerator_B.size);

          //  <uri>file://media/materials/scripts/gazebo.material</uri>
          // '<S1>:1:543' fprintf(fid, '     <uri>file://media/materials/scripts/gazebo.material</uri>\n'); 
          worldG_cfprintf_je(worldGenerator_B.size);

          //  <name>Gazebo/Grey</name>
          // '<S1>:1:545' fprintf(fid, '     <name>Gazebo/Grey</name>\n');
          worldG_cfprintf_eu(worldGenerator_B.size);

          //  </script>
          // '<S1>:1:547' fprintf(fid, '    </script>\n');
          worldG_cfprintf_aab(worldGenerator_B.size);

          //  </material>
          // '<S1>:1:549' fprintf(fid, '   </material>\n');
          worldG_cfprintf_hto(worldGenerator_B.size);

          //  </visual>
          // '<S1>:1:551' fprintf(fid, '  </visual>\n');
          worldG_cfprintf_mw(worldGenerator_B.size);

          //  <velocity_decay>
          // '<S1>:1:553' fprintf(fid, '  <velocity_decay>\n');
          worldG_cfprintf_ms(worldGenerator_B.size);

          //  <linear>0</linear>
          // '<S1>:1:555' fprintf(fid, '   <linear>0</linear>\n');
          worldG_cfprintf_eqk(worldGenerator_B.size);

          //  <angular>0</angular>
          // '<S1>:1:557' fprintf(fid, '   <angular>0</angular>\n');
          worldG_cfprintf_ap(worldGenerator_B.size);

          //  </velocity_decay>
          // '<S1>:1:559' fprintf(fid, '  </velocity_decay>\n');
          worldG_cfprintf_pv3(worldGenerator_B.size);

          //  <self_collide>0</self_collide>
          // '<S1>:1:561' fprintf(fid, '  <self_collide>0</self_collide>\n');
          worldG_cfprintf_pj(worldGenerator_B.size);

          //  <kinematic>0</kinematic>
          // '<S1>:1:563' fprintf(fid, '  <kinematic>0</kinematic>\n');
          worldG_cfprintf_kz(worldGenerator_B.size);

          //  <gravity>1</gravity>
          // '<S1>:1:565' fprintf(fid, '  <gravity>1</gravity>\n');
          worldG_cfprintf_k34(worldGenerator_B.size);

          //  </link>
          // '<S1>:1:567' fprintf(fid, ' </link>\n');
          worldG_cfprintf_fv(worldGenerator_B.size);

          //  <static>0</static>
          // '<S1>:1:569' fprintf(fid, ' <static>0</static>\n');
          worldG_cfprintf_m4(worldGenerator_B.size);

          //  </model>
          // '<S1>:1:571' fprintf(fid, '</model>\n');
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:572' counter3 = counter3 + 1;
          worldGenerator_B.tmpX++;
          break;

         case 2:
          // '<S1>:1:573' case 2 % unit_sphere
          //  unit_sphere
          //  <model name='unit_sphere_1'>
          // '<S1>:1:575' fprintf(fid, '<model name=''unit_sphere_');
          worldG_cfprintf_an(worldGenerator_B.size);

          // '<S1>:1:576' fprintf(fid, '%d', int8(counter4));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.tmpY);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:577' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          //  <pose>-4 2 0.5 0 -0 0</pose>
          // '<S1>:1:579' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:580' fprintf(fid, '%f', x_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[b_i]);

          // '<S1>:1:580' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:581' fprintf(fid, '%f', y_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[b_i]);

          // '<S1>:1:581' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:582' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:582' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:583' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:583' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:584' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:584' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:585' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:586' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          //  <link name='link'>
          // '<S1>:1:588' fprintf(fid, ' <link name=''link''>\n');
          worldG_cfprintf_dw(worldGenerator_B.size);

          //  <inertial>
          // '<S1>:1:590' fprintf(fid, '  <inertial>\n');
          worldG_cfprintf_als(worldGenerator_B.size);

          //  <mass>1</mass>
          // '<S1>:1:592' fprintf(fid, '   <mass>1</mass>\n');
          worldG_cfprintf_dxl(worldGenerator_B.size);

          //  <inertia>
          // '<S1>:1:594' fprintf(fid, '   <inertia>\n');
          worldG_cfprintf_p3(worldGenerator_B.size);

          //  <ixx>1</ixx>
          // '<S1>:1:596' fprintf(fid, '    <ixx>1</ixx>\n');
          worldG_cfprintf_ge(worldGenerator_B.size);

          // '<S1>:1:597' fprintf(fid, '    <ixy>0</ixy>\n');
          worldG_cfprintf_oc(worldGenerator_B.size);

          // '<S1>:1:598' fprintf(fid, '    <ixz>0</ixz>\n');
          worldG_cfprintf_kg(worldGenerator_B.size);

          // '<S1>:1:599' fprintf(fid, '    <iyy>1</iyy>\n');
          worldG_cfprintf_ny(worldGenerator_B.size);

          // '<S1>:1:600' fprintf(fid, '    <iyz>0</iyz>\n');
          worldG_cfprintf_f3(worldGenerator_B.size);

          // '<S1>:1:601' fprintf(fid, '    <izz>1</izz>\n');
          worldG_cfprintf_gp(worldGenerator_B.size);

          //  </inertia>
          // '<S1>:1:603' fprintf(fid, '   </inertia>\n');
          worldG_cfprintf_ej(worldGenerator_B.size);

          //  </inertial>
          // '<S1>:1:605' fprintf(fid, '  </inertial>\n');
          worldG_cfprintf_ly(worldGenerator_B.size);

          //  <collision name='collision'>
          // '<S1>:1:607' fprintf(fid, '  <collision name=''collision''>\n');
          worldG_cfprintf_ev(worldGenerator_B.size);

          //  <geometry>
          // '<S1>:1:609' fprintf(fid, '   <geometry>\n');
          worldG_cfprintf_eq(worldGenerator_B.size);

          //  <box>
          // '<S1>:1:611' fprintf(fid, '    <sphere>\n');
          worldG_cfprintf_hl(worldGenerator_B.size);

          //  <size>1 1 1</size>
          // '<S1>:1:613' fprintf(fid, '    <radius>0.5</radius>\n');
          worldG_cfprintf_de(worldGenerator_B.size);

          //  </box>
          // '<S1>:1:615' fprintf(fid, '    </sphere>\n');
          worldG_cfprintf_b4(worldGenerator_B.size);

          //  </geometry>
          // '<S1>:1:617' fprintf(fid, '   </geometry>\n');
          worldG_cfprintf_gn(worldGenerator_B.size);

          //  <max_contacts>10</max_contacts>
          // '<S1>:1:619' fprintf(fid, '   <max_contacts>10</max_contacts>\n');
          worldG_cfprintf_kr(worldGenerator_B.size);

          //  <surface>
          // '<S1>:1:621' fprintf(fid, '   <surface>\n');
          worldG_cfprintf_j0(worldGenerator_B.size);

          //  <bounce/>
          // '<S1>:1:623' fprintf(fid, '    <bounce/>\n');
          worldG_cfprintf_j1(worldGenerator_B.size);

          //  <friction>
          // '<S1>:1:625' fprintf(fid, '    <friction>\n');
          worldG_cfprintf_fvz(worldGenerator_B.size);

          //  <ode/>
          // '<S1>:1:627' fprintf(fid, '     <ode/>\n');
          worldG_cfprintf_n2(worldGenerator_B.size);

          //  </friction>
          // '<S1>:1:629' fprintf(fid, '    </friction>\n');
          worldG_cfprintf_k4(worldGenerator_B.size);

          //  <contact>
          // '<S1>:1:631' fprintf(fid, '    <contact>\n');
          worldG_cfprintf_aly(worldGenerator_B.size);

          //  <ode/>
          // '<S1>:1:633' fprintf(fid, '     <ode/>\n');
          worldG_cfprintf_n2(worldGenerator_B.size);

          //  </contact>
          // '<S1>:1:635' fprintf(fid, '    </contact>\n');
          worldG_cfprintf_fw(worldGenerator_B.size);

          //  </surface>
          // '<S1>:1:637' fprintf(fid, '   </surface>\n');
          worldG_cfprintf_i1(worldGenerator_B.size);

          //  </collision>
          // '<S1>:1:639' fprintf(fid, '  </collision>\n');
          worldG_cfprintf_ndp(worldGenerator_B.size);

          //  <visual name='visual'>
          // '<S1>:1:641' fprintf(fid, '  <visual name=''visual''>\n');
          worldG_cfprintf_dk(worldGenerator_B.size);

          //  <geometry>
          // '<S1>:1:643' fprintf(fid, '   <geometry>\n');
          worldG_cfprintf_eq(worldGenerator_B.size);

          //  <sphere>
          // '<S1>:1:645' fprintf(fid, '    <sphere>\n');
          worldG_cfprintf_hl(worldGenerator_B.size);

          //  <radius>0.5</radius>
          // '<S1>:1:647' fprintf(fid, '     <radius>0.5</radius>\n');
          worldG_cfprintf_fc(worldGenerator_B.size);

          //  </sphere>
          // '<S1>:1:649' fprintf(fid, '    </sphere>\n');
          worldG_cfprintf_b4(worldGenerator_B.size);

          //  </geometry>
          // '<S1>:1:651' fprintf(fid, '   </geometry>\n');
          worldG_cfprintf_gn(worldGenerator_B.size);

          //  <material>
          // '<S1>:1:653' fprintf(fid, '   <material>\n');
          worldG_cfprintf_ln(worldGenerator_B.size);

          //  <script>
          // '<S1>:1:655' fprintf(fid, '    <script>\n');
          worldG_cfprintf_fa(worldGenerator_B.size);

          //  <uri>file://media/materials/scripts/gazebo.material</uri>
          // '<S1>:1:657' fprintf(fid, '     <uri>file://media/materials/scripts/gazebo.material</uri>\n'); 
          worldG_cfprintf_je(worldGenerator_B.size);

          //  <name>Gazebo/Grey</name>
          // '<S1>:1:659' fprintf(fid, '     <name>Gazebo/Grey</name>\n');
          worldG_cfprintf_eu(worldGenerator_B.size);

          //  </script>
          // '<S1>:1:661' fprintf(fid, '    </script>\n');
          worldG_cfprintf_aab(worldGenerator_B.size);

          //  </material>
          // '<S1>:1:663' fprintf(fid, '   </material>\n');
          worldG_cfprintf_hto(worldGenerator_B.size);

          //  </visual>
          // '<S1>:1:665' fprintf(fid, '  </visual>\n');
          worldG_cfprintf_mw(worldGenerator_B.size);

          //  <velocity_decay>
          // '<S1>:1:667' fprintf(fid, '  <velocity_decay>\n');
          worldG_cfprintf_ms(worldGenerator_B.size);

          //  <linear>0</linear>
          // '<S1>:1:669' fprintf(fid, '   <linear>0</linear>\n');
          worldG_cfprintf_eqk(worldGenerator_B.size);

          //  <angular>0</angular>
          // '<S1>:1:671' fprintf(fid, '   <angular>0</angular>\n');
          worldG_cfprintf_ap(worldGenerator_B.size);

          //  </velocity_decay>
          // '<S1>:1:673' fprintf(fid, '  </velocity_decay>\n');
          worldG_cfprintf_pv3(worldGenerator_B.size);

          //  <self_collide>0</self_collide>
          // '<S1>:1:675' fprintf(fid, '  <self_collide>0</self_collide>\n');
          worldG_cfprintf_pj(worldGenerator_B.size);

          //  <kinematic>0</kinematic>
          // '<S1>:1:677' fprintf(fid, '  <kinematic>0</kinematic>\n');
          worldG_cfprintf_kz(worldGenerator_B.size);

          //  <gravity>1</gravity>
          // '<S1>:1:679' fprintf(fid, '  <gravity>1</gravity>\n');
          worldG_cfprintf_k34(worldGenerator_B.size);

          //  </link>
          // '<S1>:1:681' fprintf(fid, ' </link>\n');
          worldG_cfprintf_fv(worldGenerator_B.size);

          //  <static>0</static>
          // '<S1>:1:683' fprintf(fid, ' <static>0</static>\n');
          worldG_cfprintf_m4(worldGenerator_B.size);

          //  </model>
          // '<S1>:1:685' fprintf(fid, '</model>\n');
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:686' counter4 = counter4 + 1;
          worldGenerator_B.tmpY++;
          break;

         case 3:
          // '<S1>:1:687' case 3
          //  Construction Barrel
          // '<S1>:1:689' fprintf(fid, '<model name=''Construction Barrel_');
          worldG_cfprintf_ht(worldGenerator_B.size);

          // '<S1>:1:690' fprintf(fid, '%d', int8(counter5));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.x_max);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:691' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          // '<S1>:1:692' fprintf(fid, ['<link name=''link''>\n'...
          // '<S1>:1:693'                             ,'<inertial>\n'...
          // '<S1>:1:694'                              , '<pose>0 0 0.4 0 -0 0</pose>\n'... 
          // '<S1>:1:695'                               ,'<mass>500</mass>\n'... 
          // '<S1>:1:696'                               ,'<inertia>\n'...
          // '<S1>:1:697'                                 ,'<ixx>51.2096</ixx>\n'... 
          // '<S1>:1:698'                                 ,'<iyy>51.2096</iyy>\n'... 
          // '<S1>:1:699'                                 ,'<izz>25</izz>\n'...
          // '<S1>:1:700'                                 ,'<ixy>0</ixy>\n'...
          // '<S1>:1:701'                                 ,'<ixz>0</ixz>\n'...
          // '<S1>:1:702'                                 ,'<iyz>0</iyz>\n'...
          // '<S1>:1:703'                               ,'</inertia>\n'...
          // '<S1>:1:704'                             ,'</inertial>\n'...
          // '<S1>:1:705'                             ,'<collision name=''collision''>\n'... 
          // '<S1>:1:706'                               ,'<geometry>\n'...
          // '<S1>:1:707'                                 ,'<mesh>\n'...
          // '<S1>:1:708'                                   ,'<uri>model://construction_barrel/meshes/construction_barrel.dae</uri>\n'... 
          // '<S1>:1:709'                                 ,'</mesh>\n'...
          // '<S1>:1:710'                               ,'</geometry>\n'...
          // '<S1>:1:711'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:712'                               ,'<surface>\n'...
          // '<S1>:1:713'                                 ,'<bounce/>\n'...
          // '<S1>:1:714'                                 ,'<friction>\n'...
          // '<S1>:1:715'                                   ,'<ode/>\n'...
          // '<S1>:1:716'                                 ,'</friction>\n'...
          // '<S1>:1:717'                                 ,'<contact>\n'...
          // '<S1>:1:718'                                   ,'<ode/>\n'...
          // '<S1>:1:719'                                 ,'</contact>\n'...
          // '<S1>:1:720'                               ,'</surface>\n'...
          // '<S1>:1:721'                             ,'</collision>\n'...
          // '<S1>:1:722'                             ,'<visual name=''visual''>\n'... 
          // '<S1>:1:723'                               ,'<geometry>\n'...
          // '<S1>:1:724'                                 ,'<mesh>\n'...
          // '<S1>:1:725'                                   ,'<uri>model://construction_barrel/meshes/construction_barrel.dae</uri>\n'... 
          // '<S1>:1:726'                                 ,'</mesh>\n'...
          // '<S1>:1:727'                               ,'</geometry>\n'...
          // '<S1>:1:728'                             ,'</visual>\n'...
          // '<S1>:1:729'                             ,'<velocity_decay>\n'...
          // '<S1>:1:730'                               ,'<linear>0</linear>\n'... 
          // '<S1>:1:731'                               ,'<angular>0</angular>\n'... 
          // '<S1>:1:732'                             ,'</velocity_decay>\n'...
          // '<S1>:1:733'                             ,'<self_collide>0</self_collide>\n'... 
          // '<S1>:1:734'                             ,'<kinematic>0</kinematic>\n'... 
          // '<S1>:1:735'                             ,'<gravity>1</gravity>\n'... 
          // '<S1>:1:736'                           ,'</link>\n']);
          worldG_cfprintf_clc(worldGenerator_B.size);

          // '<S1>:1:737' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:738' fprintf(fid, '%f', x_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[b_i]);

          // '<S1>:1:738' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:739' fprintf(fid, '%f', y_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[b_i]);

          // '<S1>:1:739' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:740' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:740' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:741' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:741' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:742' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:742' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:743' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:744' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          // '<S1>:1:745' fprintf(fid, ['<static>0</static>\n'...
          // '<S1>:1:746'                     ,'</model>\n']);
          worldG_cfprintf_is(worldGenerator_B.size);

          // '<S1>:1:747' counter5 = counter5 + 1;
          worldGenerator_B.x_max++;
          break;

         case 4:
          // '<S1>:1:748' case 4
          //  jersey barrier
          // '<S1>:1:750' fprintf(fid, '<model name=''jersey_barrier_');
          worldG_cfprintf_k3(worldGenerator_B.size);

          // '<S1>:1:751' fprintf(fid, '%d', int8(counter6));
          worldGenerator_B.y_max = rt_roundd_snf(worldGenerator_B.x_min);
          if (worldGenerator_B.y_max < 128.0) {
            tmp = (int8_T)worldGenerator_B.y_max;
          } else {
            tmp = MAX_int8_T;
          }

          worldG_cfprintf_h4(worldGenerator_B.size, tmp);

          // '<S1>:1:752' fprintf(fid, '''>\n');
          worldG_cfprintf_he(worldGenerator_B.size);

          // '<S1>:1:753' fprintf(fid, ['<static>1</static>\n'...
          // '<S1>:1:754'                           ,'<link name=''link''>\n'... 
          // '<S1>:1:755'                             ,'<visual name=''visual''>\n'... 
          // '<S1>:1:756'                              ,'<geometry>\n'...
          // '<S1>:1:757'                                 ,'<mesh>\n'...
          // '<S1>:1:758'                                   ,'<uri>model://jersey_barrier/meshes/jersey_barrier.dae</uri>\n'... 
          // '<S1>:1:759'                                 ,'</mesh>\n'...
          // '<S1>:1:760'                               ,'</geometry>\n'...
          // '<S1>:1:761'                             ,'</visual>\n'...
          // '<S1>:1:762'                             ,'<collision name=''upright''>\n'... 
          // '<S1>:1:763'                               ,'<pose>0 0 0.5715 0 -0 0</pose>\n'... 
          // '<S1>:1:764'                               ,'<geometry>\n'...
          // '<S1>:1:765'                                 ,'<box>\n'...
          // '<S1>:1:766'                                   ,'<size>4.06542 0.3063 1.143</size>\n'... 
          // '<S1>:1:767'                                 ,'</box>\n'...
          // '<S1>:1:768'                               ,'</geometry>\n'...
          // '<S1>:1:769'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:770'                               ,'<surface>\n'...
          // '<S1>:1:771'                                 ,'<bounce/>\n'...
          // '<S1>:1:772'                                 ,'<friction>\n'...
          // '<S1>:1:773'                                   ,'<ode/>\n'...
          // '<S1>:1:774'                                 ,'</friction>\n'...
          // '<S1>:1:775'                                 ,'<contact>\n'...
          // '<S1>:1:776'                                   ,'<ode/>\n'...
          // '<S1>:1:777'                                 ,'</contact>\n'...
          // '<S1>:1:778'                               ,'</surface>\n'...
          // '<S1>:1:779'                             ,'</collision>\n'...
          // '<S1>:1:780'                             ,'<collision name=''base''>\n'... 
          // '<S1>:1:781'                               ,'<pose>0 0 0.032258 0 -0 0</pose>\n'... 
          // '<S1>:1:782'                               ,'<geometry>\n'...
          // '<S1>:1:783'                                 ,'<box>\n'...
          // '<S1>:1:784'                                   ,'<size>4.06542 0.8107 0.064516</size>\n'... 
          // '<S1>:1:785'                                 ,'</box>\n'...
          // '<S1>:1:786'                               ,'</geometry>\n'...
          // '<S1>:1:787'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:788'                               ,'<surface>\n'...
          // '<S1>:1:789'                                 ,'<bounce/>\n'...
          // '<S1>:1:790'                                 ,'<friction>\n'...
          // '<S1>:1:791'                                   ,'<ode/>\n'...
          // '<S1>:1:792'                                 ,'</friction>\n'...
          // '<S1>:1:793'                                 ,'<contact>\n'...
          // '<S1>:1:794'                                   ,'<ode/>\n'...
          // '<S1>:1:795'                                 ,'</contact>\n'...
          // '<S1>:1:796'                               ,'</surface>\n'...
          // '<S1>:1:797'                             ,'</collision>\n'...
          // '<S1>:1:798'                             ,'<collision name=''base2''>\n'... 
          // '<S1>:1:799'                               ,'<pose>0 0 0.1 0 -0 0</pose>\n'... 
          // '<S1>:1:800'                               ,'<geometry>\n'...
          // '<S1>:1:801'                                 ,'<box>\n'...
          // '<S1>:1:802'                                   ,'<size>4.06542 0.65 0.1</size>\n'... 
          // '<S1>:1:803'                                 ,'</box>\n'...
          // '<S1>:1:804'                               ,'</geometry>\n'...
          // '<S1>:1:805'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:806'                               ,'<surface>\n'...
          // '<S1>:1:807'                                 ,'<bounce/>\n'...
          // '<S1>:1:808'                                 ,'<friction>\n'...
          // '<S1>:1:809'                                   ,'<ode/>\n'...
          // '<S1>:1:810'                                 ,'</friction>\n'...
          // '<S1>:1:811'                                 ,'<contact>\n'...
          // '<S1>:1:812'                                   ,'<ode/>\n'...
          // '<S1>:1:813'                                 ,'</contact>\n'...
          // '<S1>:1:814'                               ,'</surface>\n'...
          // '<S1>:1:815'                             ,'</collision>\n'...
          // '<S1>:1:816'                             ,'<collision name=''base3''>\n'... 
          // '<S1>:1:817'                               ,'<pose>0 0 0.2 0 -0 0</pose>\n'... 
          // '<S1>:1:818'                               ,'<geometry>\n'...
          // '<S1>:1:819'                                 ,'<box>\n'...
          // '<S1>:1:820'                                   ,'<size>4.06542 0.5 0.1</size>\n'... 
          // '<S1>:1:821'                                 ,'</box>\n'...
          // '<S1>:1:822'                               ,'</geometry>\n'...
          // '<S1>:1:823'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:824'                               ,'<surface>\n'...
          // '<S1>:1:825'                                 ,'<bounce/>\n'...
          // '<S1>:1:826'                                 ,'<friction>\n'...
          // '<S1>:1:827'                                   ,'<ode/>\n'...
          // '<S1>:1:828'                                 ,'</friction>\n'...
          // '<S1>:1:829'                                 ,'<contact>\n'...
          // '<S1>:1:830'                                   ,'<ode/>\n'...
          // '<S1>:1:831'                                 ,'</contact>\n'...
          // '<S1>:1:832'                               ,'</surface>\n'...
          // '<S1>:1:833'                             ,'</collision>\n'...
          // '<S1>:1:834'                             ,'<collision name=''left-angle''>\n'... 
          // '<S1>:1:835'                               ,'<pose>0 -0.224 0.2401 0.9 -0 0</pose>\n'... 
          // '<S1>:1:836'                               ,'<geometry>\n'...
          // '<S1>:1:837'                                 ,'<box>\n'...
          // '<S1>:1:838'                                   ,'<size>4.06542 0.5 0.064516</size>\n'... 
          // '<S1>:1:839'                                 ,'</box>\n'...
          // '<S1>:1:840'                               ,'</geometry>\n'...
          // '<S1>:1:841'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:842'                               ,'<surface>\n'...
          // '<S1>:1:843'                                 ,'<bounce/>\n'...
          // '<S1>:1:844'                                 ,'<friction>\n'...
          // '<S1>:1:845'                                   ,'<ode/>\n'...
          // '<S1>:1:846'                                 ,'</friction>\n'...
          // '<S1>:1:847'                                 ,'<contact>\n'...
          // '<S1>:1:848'                                   ,'<ode/>\n'...
          // '<S1>:1:849'                                 ,'</contact>\n'...
          // '<S1>:1:850'                               ,'</surface>\n'...
          // '<S1>:1:851'                             ,'</collision>\n'...
          // '<S1>:1:852'                             ,'<collision name=''right-angle''>\n'... 
          // '<S1>:1:853'                               ,'<pose>0 0.224 0.2401 -0.9 0 0</pose>\n'... 
          // '<S1>:1:854'                               ,'<geometry>\n'...
          // '<S1>:1:855'                                 ,'<box>\n'...
          // '<S1>:1:856'                                   ,'<size>4.06542 0.5 0.064516</size>\n'... 
          // '<S1>:1:857'                                 ,'</box>\n'...
          // '<S1>:1:858'                               ,'</geometry>\n'...
          // '<S1>:1:859'                               ,'<max_contacts>10</max_contacts>\n'... 
          // '<S1>:1:860'                               ,'<surface>\n'...
          // '<S1>:1:861'                                 ,'<bounce/>\n'...
          // '<S1>:1:862'                                 ,'<friction>\n'...
          // '<S1>:1:863'                                   ,'<ode/>\n'...
          // '<S1>:1:864'                                 ,'</friction>\n'...
          // '<S1>:1:865'                                 ,'<contact>\n'...
          // '<S1>:1:866'                                   ,'<ode/>\n'...
          // '<S1>:1:867'                                 ,'</contact>\n'...
          // '<S1>:1:868'                               ,'</surface>\n'...
          // '<S1>:1:869'                             ,'</collision>\n'...
          // '<S1>:1:870'                             ,'<velocity_decay>\n'...
          // '<S1>:1:871'                               ,'<linear>0</linear>\n'... 
          // '<S1>:1:872'                               ,'<angular>0</angular>\n'... 
          // '<S1>:1:873'                             ,'</velocity_decay>\n'...
          // '<S1>:1:874'                             ,'<self_collide>0</self_collide>\n'... 
          // '<S1>:1:875'                             ,'<kinematic>0</kinematic>\n'... 
          // '<S1>:1:876'                             ,'<gravity>1</gravity>\n'... 
          // '<S1>:1:877'                           ,'</link>\n']);
          worldG_cfprintf_af(worldGenerator_B.size);

          // '<S1>:1:878' fprintf(fid, ' <pose>');
          worldG_cfprintf_kj(worldGenerator_B.size);

          // '<S1>:1:879' fprintf(fid, '%f', x_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.x_aNext[b_i]);

          // '<S1>:1:879' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:880' fprintf(fid, '%f', y_aNext(j));
          worldG_cfprintf_dx(worldGenerator_B.size, worldGenerator_B.y_aNext[b_i]);

          // '<S1>:1:880' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:881' fprintf(fid, '%f', 0.5);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.5);

          // '<S1>:1:881' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:882' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:882' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:883' fprintf(fid, '-%f', 0);
          worldG_cfprintf_js(worldGenerator_B.size, 0.0);

          // '<S1>:1:883' fprintf(fid, ' ');
          worldG_cfprintf_iu2(worldGenerator_B.size);

          // '<S1>:1:884' fprintf(fid, '%f', 0);
          worldG_cfprintf_dx(worldGenerator_B.size, 0.0);

          // '<S1>:1:885' fprintf(fid, '</pose>\n');
          worldG_cfprintf_al(worldGenerator_B.size);

          // '<S1>:1:886' fprintf(fid, ['</model>\n']);
          worldG_cfprintf_jp(worldGenerator_B.size);

          // '<S1>:1:887' counter6 = counter6 + 1;
          worldGenerator_B.x_min++;
          break;

         default:
          // '<S1>:1:888' otherwise
          // '<S1>:1:889' disp('This class does not exist!')
          break;
        }
      }
    }

    //  Fixed phase 2
    //  <gui fullscreen='0'>
    // '<S1>:1:897' fprintf(fid, '<gui fullscreen=''0''>\n');
    worldG_cfprintf_mz(worldGenerator_B.size);

    //        <camera name='user_camera'>
    // '<S1>:1:899' fprintf(fid, '<camera name=''user_camera''>\n');
    worldG_cfprintf_im(worldGenerator_B.size);

    //          <pose>26.0416 -23.4949 28.141 3.53447e-17 0.667643 2.38819</pose> 
    // '<S1>:1:901' fprintf(fid, '<pose>26.0416 -23.4949 28.141 3.53447e-17 0.667643 2.38819</pose>\n'); 
    worldG_cfprintf_lx(worldGenerator_B.size);

    //          <view_controller>orbit</view_controller>
    // '<S1>:1:903' fprintf(fid, '<view_controller>orbit</view_controller>\n');
    worldG_cfprintf_mx(worldGenerator_B.size);

    //        </camera>
    // '<S1>:1:905' fprintf(fid, '</camera>\n');
    worldG_cfprintf_ad(worldGenerator_B.size);

    //      </gui>
    // '<S1>:1:907' fprintf(fid, '</gui>\n');
    worldG_cfprintf_gz(worldGenerator_B.size);

    //    </world>
    // '<S1>:1:909' fprintf(fid, '</world>\n');
    worldG_cfprintf_gs(worldGenerator_B.size);

    //  </sdf>
    // '<S1>:1:911' fprintf(fid, '</sdf>\n');
    worldG_cfprintf_kp(worldGenerator_B.size);

    // '<S1>:1:913' fclose('all');
    worldGenerator_fclose();

    // '<S1>:1:915' counter = 1;
    // '<S1>:1:916' counter_next = counter;
    b_i = 1;
  } else if (!worldGenerator_B.In1_c.Data) {
    // '<S1>:1:917' elseif(~stop)
    // '<S1>:1:918' counter_next = 0;
    b_i = 0;
  } else {
    // '<S1>:1:919' else
    // '<S1>:1:920' counter_next = 1;
    b_i = 1;
  }

  // Update for Memory: '<Root>/Memory3' incorporates:
  //   MATLAB Function: '<Root>/Generate_file'

  worldGenerator_DW.Memory3_PreviousInput = b_i;

  // Update for Memory: '<Root>/Memory' incorporates:
  //   MATLAB Function: '<Root>/store_array'

  worldGenerator_DW.Memory_PreviousInput = worldGenerator_B.counter;

  // Update for Memory: '<Root>/Memory1'
  memcpy(&worldGenerator_DW.Memory1_PreviousInput[0], &worldGenerator_B.x_aNext
         [0], 20U * sizeof(real_T));

  // Update for Memory: '<Root>/Memory2'
  memcpy(&worldGenerator_DW.Memory2_PreviousInput[0], &worldGenerator_B.y_aNext
         [0], 20U * sizeof(real_T));

  // Update for Memory: '<Root>/Memory5'
  memcpy(&worldGenerator_DW.Memory5_PreviousInput[0],
         &worldGenerator_B.class_next[0], 20U * sizeof(real_T));
}

// Model initialize function
void worldGenerator_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(worldGenerator_M, (NULL));

  // block I/O
  (void) memset(((void *) &worldGenerator_B), 0,
                sizeof(B_worldGenerator_T));

  // states (dwork)
  (void) memset((void *)&worldGenerator_DW, 0,
                sizeof(DW_worldGenerator_T));

  {
    FILE * a;
    int32_T i;
    static const char_T tmp[11] = { '/', 'd', 'e', 't', 'e', 'c', 't', 'i', 'o',
      'n', 's' };

    static const char_T tmp_0[5] = { '/', 'd', 'o', 'I', 't' };

    char_T tmp_1[12];
    char_T tmp_2[6];

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S3>/SourceBlock'
    worldGenerator_DW.obj.isInitialized = 0;
    worldGenerator_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[5] = '\x00';
    Sub_worldGenerator_4.createSubscriber(tmp_2, worldGenerator_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S2>/SourceBlock'
    worldGenerator_DW.obj_n.isInitialized = 0;
    worldGenerator_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[11] = '\x00';
    Sub_worldGenerator_1.createSubscriber(tmp_1, worldGenerator_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // InitializeConditions for Memory: '<Root>/Memory3'
    worldGenerator_DW.Memory3_PreviousInput = worldGenerator_P.Memory3_X0;

    // InitializeConditions for Memory: '<Root>/Memory'
    worldGenerator_DW.Memory_PreviousInput = worldGenerator_P.Memory_X0;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S6>/Out1'
    worldGenerator_B.In1_c = worldGenerator_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S5>/Out1'
    worldGenerator_B.In1 = worldGenerator_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for MATLAB Function: '<Root>/Generate_file'
    a = NULL;
    for (i = 0; i < 20; i++) {
      // InitializeConditions for Memory: '<Root>/Memory1'
      worldGenerator_DW.Memory1_PreviousInput[i] = worldGenerator_P.Memory1_X0;

      // InitializeConditions for Memory: '<Root>/Memory2'
      worldGenerator_DW.Memory2_PreviousInput[i] = worldGenerator_P.Memory2_X0;

      // InitializeConditions for Memory: '<Root>/Memory5'
      worldGenerator_DW.Memory5_PreviousInput[i] = worldGenerator_P.Memory5_X0;

      // SystemInitialize for MATLAB Function: '<Root>/Generate_file'
      worldGenerator_DW.eml_autoflush[i] = false;
      worldGenerator_DW.eml_openfiles[i] = a;
    }
  }
}

// Model terminate function
void worldGenerator_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SourceBlock'

  if (worldGenerator_DW.obj.isInitialized == 1) {
    worldGenerator_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S2>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SourceBlock'

  if (worldGenerator_DW.obj_n.isInitialized == 1) {
    worldGenerator_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'
}

//
// File trailer for generated code.
//
// [EOF]
//
