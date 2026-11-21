/*
 * automldiffopen_u6iyhC3R.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "DrivetrainHevP4".
 *
 * Model version              : 1.954
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Jan 19 13:29:25 2022
 * Created for block: DrivetrainHevP4
 */

#include "rtwtypes.h"
#include "automldiffopen_u6iyhC3R.h"

/* Function for MATLAB Function: '<S19>/Open Differential' */
void automldiffopen_u6iyhC3R(const real_T u[3], real_T bw1, real_T bd, real_T
  bw2, real_T Ndiff, real_T shaftSwitch, real_T Jd, real_T Jw1, real_T Jw2,
  const real_T x[2], real_T y[3], real_T xdot[2])
{
  real_T NbdTerm;
  int32_T diffDir;
  real_T term1;
  real_T term2;
  real_T invJ[4];
  real_T diffDir_0[6];
  real_T invJ_0[6];
  real_T invJ_1[4];
  real_T invJ_2[2];
  real_T invJ_3[2];
  real_T diffDir_1[6];
  int32_T i;
  real_T invJ_4;
  real_T bw1_idx_1;
  NbdTerm = Ndiff * Ndiff * bd / 4.0;
  if (shaftSwitch != 0.0) {
    diffDir = -1;
  } else {
    diffDir = 1;
  }

  term1 = Ndiff * Ndiff * Jd;
  term2 = (4.0 * Jw1 * Jw2 + term1 * Jw1) + Jw2 * term1;
  invJ[0] = (Jw2 * 4.0 + term1) / term2;
  invJ[2] = -term1 / term2;
  invJ[1] = -term1 / term2;
  invJ[3] = (Jw1 * 4.0 + term1) / term2;
  diffDir_0[0] = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_0[2] = -1.0;
  diffDir_0[4] = 0.0;
  diffDir_0[1] = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_0[3] = 0.0;
  diffDir_0[5] = -1.0;
  term1 = -(bw1 + NbdTerm);
  term2 = -NbdTerm;
  bw1_idx_1 = -NbdTerm;
  NbdTerm = -(NbdTerm + bw2);
  diffDir_1[0] = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_1[3] = (real_T)diffDir / 2.0 * Ndiff;
  for (diffDir = 0; diffDir < 2; diffDir++) {
    for (i = 0; i < 3; i++) {
      invJ_0[diffDir + (i << 1)] = 0.0;
      invJ_4 = invJ_0[(i << 1) + diffDir];
      invJ_4 += diffDir_0[i << 1] * invJ[diffDir];
      invJ_0[diffDir + (i << 1)] = invJ_4;
      invJ_4 = invJ_0[(i << 1) + diffDir];
      invJ_4 += diffDir_0[(i << 1) + 1] * invJ[diffDir + 2];
      invJ_0[diffDir + (i << 1)] = invJ_4;
    }

    invJ_1[diffDir] = 0.0;
    invJ_4 = invJ_1[diffDir];
    invJ_4 += invJ[diffDir] * term1;
    invJ_1[diffDir] = invJ_4;
    invJ_4 = invJ_1[diffDir];
    invJ_4 += invJ[diffDir + 2] * bw1_idx_1;
    invJ_1[diffDir] = invJ_4;
    invJ_1[diffDir + 2] = 0.0;
    invJ_4 = invJ_1[diffDir + 2];
    invJ_4 += invJ[diffDir] * term2;
    invJ_1[diffDir + 2] = invJ_4;
    invJ_4 = invJ_1[diffDir + 2];
    invJ_4 += invJ[diffDir + 2] * NbdTerm;
    invJ_1[diffDir + 2] = invJ_4;
    invJ_2[diffDir] = 0.0;
    invJ_4 = invJ_2[diffDir];
    invJ_4 += invJ_0[diffDir] * u[0];
    invJ_2[diffDir] = invJ_4;
    invJ_4 = invJ_2[diffDir];
    invJ_4 += invJ_0[diffDir + 2] * u[1];
    invJ_2[diffDir] = invJ_4;
    invJ_4 = invJ_2[diffDir];
    invJ_4 += invJ_0[diffDir + 4] * u[2];
    invJ_2[diffDir] = invJ_4;
    invJ_3[diffDir] = 0.0;
    invJ_4 = invJ_3[diffDir];
    invJ_4 += invJ_1[diffDir] * x[0];
    invJ_3[diffDir] = invJ_4;
    invJ_4 = invJ_3[diffDir];
    invJ_4 += invJ_1[diffDir + 2] * x[1];
    invJ_3[diffDir] = invJ_4;
    xdot[diffDir] = invJ_2[diffDir] + invJ_3[diffDir];
    diffDir_1[3 * diffDir + 1] = (real_T)diffDir + -1.0;
    diffDir_1[3 * diffDir + 2] = 0.0 - (real_T)diffDir;
  }

  for (diffDir = 0; diffDir < 3; diffDir++) {
    NbdTerm = diffDir_1[diffDir] * x[0];
    NbdTerm += diffDir_1[diffDir + 3] * x[1];
    term1 = 0.0 * u[0];
    term1 += 0.0 * u[1];
    term1 += 0.0 * u[2];
    y[diffDir] = NbdTerm + term1;
  }
}
