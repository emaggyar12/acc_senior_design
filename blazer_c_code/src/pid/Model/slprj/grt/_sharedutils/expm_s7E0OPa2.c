/*
 * expm_s7E0OPa2.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Blazer_Plant_Model".
 *
 * Model version              : 1.1045
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:56:41 2022
 * Created for block: Blazer_Plant_Model
 */

#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "PadeApproximantOfDegree_dzDfS9dX.h"
#include "rt_powd_snf.h"
#include "expm_s7E0OPa2.h"

/* Function for MATLAB Function: '<S95>/Vehicle' */
void expm_s7E0OPa2(real_T A[4], real_T F[4])
{
  real_T F_0[4];
  real_T b_s;
  real_T normA;
  int32_T b_j;
  int32_T eint;
  static const real_T theta[5] = { 0.01495585217958292, 0.253939833006323,
    0.95041789961629319, 2.097847961257068, 5.3719203511481517 };

  static const uint8_T b[5] = { 3U, 5U, 7U, 9U, 13U };

  boolean_T exitg1;
  normA = 0.0;
  b_j = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j < 2)) {
    b_s = fabs(A[b_j << 1]);
    b_s += fabs(A[(b_j << 1) + 1]);
    if (rtIsNaN(b_s)) {
      normA = (rtNaN);
      exitg1 = true;
    } else {
      if (b_s > normA) {
        normA = b_s;
      }

      b_j++;
    }
  }

  if (normA <= 5.3719203511481517) {
    b_j = 0;
    exitg1 = false;
    while ((!exitg1) && (b_j < 5)) {
      if (normA <= theta[b_j]) {
        PadeApproximantOfDegree_dzDfS9dX(A, b[b_j], F);
        exitg1 = true;
      } else {
        b_j++;
      }
    }
  } else {
    b_s = normA / 5.3719203511481517;
    if ((!rtIsInf(b_s)) && (!rtIsNaN(b_s))) {
      b_s = frexp(b_s, &eint);
    } else {
      eint = 0;
    }

    normA = eint;
    if (b_s == 0.5) {
      normA = (real_T)eint - 1.0;
    }

    b_s = rt_powd_snf(2.0, normA);
    A[0] /= b_s;
    A[1] /= b_s;
    A[2] /= b_s;
    A[3] /= b_s;
    PadeApproximantOfDegree_dzDfS9dX(A, 13, F);
    for (b_j = 0; b_j < (int32_T)normA; b_j++) {
      for (eint = 0; eint < 2; eint++) {
        F_0[eint] = 0.0;
        b_s = F_0[eint];
        b_s += F[eint] * F[0];
        F_0[eint] = b_s;
        b_s = F_0[eint];
        b_s += F[eint + 2] * F[1];
        F_0[eint] = b_s;
        F_0[eint + 2] = 0.0;
        b_s = F_0[eint + 2];
        b_s += F[eint] * F[2];
        F_0[eint + 2] = b_s;
        b_s = F_0[eint + 2];
        b_s += F[eint + 2] * F[3];
        F_0[eint + 2] = b_s;
      }

      F[0] = F_0[0];
      F[1] = F_0[1];
      F[2] = F_0[2];
      F[3] = F_0[3];
    }
  }
}
