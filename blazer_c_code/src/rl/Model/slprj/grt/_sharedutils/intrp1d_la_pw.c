/*
 * intrp1d_la_pw.c
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
#include "intrp1d_la_pw.h"

real_T intrp1d_la_pw(uint32_T bpIndex, real_T frac, const real_T table[],
                     uint32_T maxIndex)
{
  real_T y;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  if (bpIndex == maxIndex) {
    y = table[bpIndex];
  } else {
    y = (table[bpIndex + 1U] - table[bpIndex]) * frac + table[bpIndex];
  }

  return y;
}
