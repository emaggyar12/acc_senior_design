/*
 * plook_u32d_binckpa.c
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
#include "binsearch_u32d_prevIdx.h"
#include "plook_u32d_binckpa.h"

uint32_T plook_u32d_binckpa(real_T u, const real_T bp[], uint32_T maxIndex,
  uint32_T *prevIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'on'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d_prevIdx(u, bp, *prevIndex, maxIndex);
  } else {
    bpIndex = maxIndex;
  }

  *prevIndex = bpIndex;
  return bpIndex;
}
