/*
 * intrp4d_l_pw.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "DrivetrainHevP4".
 *
 * Model version              : 1.972
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:33:49 2022
 * Created for block: DrivetrainHevP4
 */

#include "rtwtypes.h"
#include "intrp4d_l_pw.h"

real_T intrp4d_l_pw(const uint32_T bpIndex[], const real_T frac[], const real_T
                    table[], const uint32_T stride[])
{
  real_T yL_0d0;
  real_T yL_1d;
  real_T yL_2d;
  real_T yL_3d;
  uint32_T offset_0d;
  uint32_T offset_1d;
  uint32_T offset_3d;

  /* Column-major Interpolation 4-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  offset_3d = ((bpIndex[3U] * stride[3U] + bpIndex[2U] * stride[2U]) + bpIndex
               [1U] * stride[1U]) + bpIndex[0U];
  yL_0d0 = table[offset_3d];
  yL_1d = (table[offset_3d + 1U] - yL_0d0) * frac[0U] + yL_0d0;
  offset_0d = offset_3d + stride[1U];
  yL_0d0 = table[offset_0d];
  yL_2d = (((table[offset_0d + 1U] - yL_0d0) * frac[0U] + yL_0d0) - yL_1d) *
    frac[1U] + yL_1d;
  offset_1d = offset_3d + stride[2U];
  yL_0d0 = table[offset_1d];
  yL_1d = (table[offset_1d + 1U] - yL_0d0) * frac[0U] + yL_0d0;
  offset_0d = offset_1d + stride[1U];
  yL_0d0 = table[offset_0d];
  yL_3d = (((((table[offset_0d + 1U] - yL_0d0) * frac[0U] + yL_0d0) - yL_1d) *
            frac[1U] + yL_1d) - yL_2d) * frac[2U] + yL_2d;
  offset_1d = offset_3d + stride[3U];
  yL_0d0 = table[offset_1d];
  yL_1d = (table[offset_1d + 1U] - yL_0d0) * frac[0U] + yL_0d0;
  offset_0d = offset_1d + stride[1U];
  yL_0d0 = table[offset_0d];
  yL_2d = (((table[offset_0d + 1U] - yL_0d0) * frac[0U] + yL_0d0) - yL_1d) *
    frac[1U] + yL_1d;
  offset_1d += stride[2U];
  yL_0d0 = table[offset_1d];
  yL_1d = (table[offset_1d + 1U] - yL_0d0) * frac[0U] + yL_0d0;
  offset_0d = offset_1d + stride[1U];
  yL_0d0 = table[offset_0d];
  return (((((((table[offset_0d + 1U] - yL_0d0) * frac[0U] + yL_0d0) - yL_1d) *
             frac[1U] + yL_1d) - yL_2d) * frac[2U] + yL_2d) - yL_3d) * frac[3U]
    + yL_3d;
}
