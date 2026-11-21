/*
 * intrp3d_la_pw.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "HSC_Model".
 *
 * Model version              : 1.77
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Jan 19 13:30:36 2022
 * Created for block: HSC_Model
 */

#include "rtwtypes.h"
#include "intrp3d_la_pw.h"

real_T intrp3d_la_pw(const uint32_T bpIndex[], const real_T frac[], const real_T
                     table[], const uint32_T stride[], const uint32_T maxIndex[])
{
  real_T y;
  uint32_T offset_2d;
  real_T yR_1d;
  uint32_T offset_0d;
  real_T yL_1d;

  /* Column-major Interpolation 3-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  offset_2d = (bpIndex[2U] * stride[2U] + bpIndex[1U] * stride[1U]) + bpIndex[0U];
  if (bpIndex[0U] == maxIndex[0U]) {
    y = table[offset_2d];
  } else {
    y = (table[offset_2d + 1U] - table[offset_2d]) * frac[0U] + table[offset_2d];
  }

  if (bpIndex[1U] == maxIndex[1U]) {
  } else {
    offset_0d = offset_2d + stride[1U];
    if (bpIndex[0U] == maxIndex[0U]) {
      yR_1d = table[offset_0d];
    } else {
      yR_1d = (table[offset_0d + 1U] - table[offset_0d]) * frac[0U] +
        table[offset_0d];
    }

    y += (yR_1d - y) * frac[1U];
  }

  if (bpIndex[2U] == maxIndex[2U]) {
  } else {
    offset_2d += stride[2U];
    if (bpIndex[0U] == maxIndex[0U]) {
      yL_1d = table[offset_2d];
    } else {
      yL_1d = (table[offset_2d + 1U] - table[offset_2d]) * frac[0U] +
        table[offset_2d];
    }

    if (bpIndex[1U] == maxIndex[1U]) {
    } else {
      offset_0d = offset_2d + stride[1U];
      if (bpIndex[0U] == maxIndex[0U]) {
        yR_1d = table[offset_0d];
      } else {
        yR_1d = (table[offset_0d + 1U] - table[offset_0d]) * frac[0U] +
          table[offset_0d];
      }

      yL_1d += (yR_1d - yL_1d) * frac[1U];
    }

    y += (yL_1d - y) * frac[2U];
  }

  return y;
}
