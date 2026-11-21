/*
 * mpower_T8Egixj1.c
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
#include "mpower_T8Egixj1.h"

/* Function for MATLAB Function: '<S95>/Setup' */
void mpower_T8Egixj1(const real_T a[4], real_T b, real_T c[4])
{
  real_T aBuffer[4];
  real_T b_a[4];
  real_T cBuffer[4];
  real_T cBuffer_0[4];
  real_T cBuffer_1[4];
  real_T cBuffer_2;
  real_T cBuffer_3;
  real_T y;
  int32_T b_n;
  int32_T n;
  int32_T nb;
  int32_T nbitson;
  boolean_T aBufferInUse;
  boolean_T cBufferInUse;
  boolean_T first;
  if (b == b) {
    b_a[0] = a[0];
    b_a[1] = a[1];
    b_a[2] = a[2];
    b_a[3] = a[3];
    y = fabs(b);
    n = (int32_T)fabs(b);
    b_n = (int32_T)y;
    nbitson = 0;
    nb = -2;
    while (b_n > 0) {
      nb++;
      if ((b_n & 1U) != 0U) {
        nbitson++;
      }

      b_n >>= 1;
    }

    if ((int32_T)y <= 2) {
      if (b == 2.0) {
        for (nbitson = 0; nbitson < 2; nbitson++) {
          c[nbitson << 1] = 0.0;
          y = c[nbitson << 1];
          y += a[nbitson << 1] * a[0];
          c[nbitson << 1] = y;
          y = c[nbitson << 1];
          y += a[(nbitson << 1) + 1] * a[2];
          c[nbitson << 1] = y;
          c[(nbitson << 1) + 1] = 0.0;
          y = c[(nbitson << 1) + 1];
          y += a[nbitson << 1] * a[1];
          c[(nbitson << 1) + 1] = y;
          y = c[(nbitson << 1) + 1];
          y += a[(nbitson << 1) + 1] * a[3];
          c[(nbitson << 1) + 1] = y;
        }
      } else if (b == 1.0) {
        c[0] = a[0];
        c[1] = a[1];
        c[2] = a[2];
        c[3] = a[3];
      } else {
        c[1] = 0.0;
        c[2] = 0.0;
        c[0] = 1.0;
        c[3] = 1.0;
      }
    } else {
      first = true;
      aBufferInUse = false;
      cBufferInUse = ((nbitson & 1U) == 0U);
      for (b_n = 0; b_n <= nb; b_n++) {
        if ((n & 1U) != 0U) {
          if (first) {
            first = false;
            if (cBufferInUse) {
              if (aBufferInUse) {
                cBuffer[0] = aBuffer[0];
                cBuffer[1] = aBuffer[1];
                cBuffer[2] = aBuffer[2];
                cBuffer[3] = aBuffer[3];
              } else {
                cBuffer[0] = b_a[0];
                cBuffer[1] = b_a[1];
                cBuffer[2] = b_a[2];
                cBuffer[3] = b_a[3];
              }
            } else if (aBufferInUse) {
              c[0] = aBuffer[0];
              c[1] = aBuffer[1];
              c[2] = aBuffer[2];
              c[3] = aBuffer[3];
            } else {
              c[0] = b_a[0];
              c[1] = b_a[1];
              c[2] = b_a[2];
              c[3] = b_a[3];
            }
          } else {
            if (aBufferInUse) {
              if (cBufferInUse) {
                for (nbitson = 0; nbitson < 2; nbitson++) {
                  c[nbitson] = 0.0;
                  y = c[nbitson];
                  y += cBuffer[nbitson] * aBuffer[0];
                  c[nbitson] = y;
                  y = c[nbitson];
                  y += cBuffer[nbitson + 2] * aBuffer[1];
                  c[nbitson] = y;
                  c[nbitson + 2] = 0.0;
                  y = c[nbitson + 2];
                  y += cBuffer[nbitson] * aBuffer[2];
                  c[nbitson + 2] = y;
                  y = c[nbitson + 2];
                  y += cBuffer[nbitson + 2] * aBuffer[3];
                  c[nbitson + 2] = y;
                }
              } else {
                for (nbitson = 0; nbitson < 2; nbitson++) {
                  cBuffer[nbitson] = 0.0;
                  y = cBuffer[nbitson];
                  y += c[nbitson] * aBuffer[0];
                  cBuffer[nbitson] = y;
                  y = cBuffer[nbitson];
                  y += c[nbitson + 2] * aBuffer[1];
                  cBuffer[nbitson] = y;
                  cBuffer[nbitson + 2] = 0.0;
                  y = cBuffer[nbitson + 2];
                  y += c[nbitson] * aBuffer[2];
                  cBuffer[nbitson + 2] = y;
                  y = cBuffer[nbitson + 2];
                  y += c[nbitson + 2] * aBuffer[3];
                  cBuffer[nbitson + 2] = y;
                }
              }
            } else if (cBufferInUse) {
              for (nbitson = 0; nbitson < 2; nbitson++) {
                c[nbitson] = 0.0;
                y = c[nbitson];
                y += cBuffer[nbitson] * b_a[0];
                c[nbitson] = y;
                y = c[nbitson];
                y += cBuffer[nbitson + 2] * b_a[1];
                c[nbitson] = y;
                c[nbitson + 2] = 0.0;
                y = c[nbitson + 2];
                y += cBuffer[nbitson] * b_a[2];
                c[nbitson + 2] = y;
                y = c[nbitson + 2];
                y += cBuffer[nbitson + 2] * b_a[3];
                c[nbitson + 2] = y;
              }
            } else {
              for (nbitson = 0; nbitson < 2; nbitson++) {
                cBuffer[nbitson] = 0.0;
                y = cBuffer[nbitson];
                y += c[nbitson] * b_a[0];
                cBuffer[nbitson] = y;
                y = cBuffer[nbitson];
                y += c[nbitson + 2] * b_a[1];
                cBuffer[nbitson] = y;
                cBuffer[nbitson + 2] = 0.0;
                y = cBuffer[nbitson + 2];
                y += c[nbitson] * b_a[2];
                cBuffer[nbitson + 2] = y;
                y = cBuffer[nbitson + 2];
                y += c[nbitson + 2] * b_a[3];
                cBuffer[nbitson + 2] = y;
              }
            }

            cBufferInUse = !cBufferInUse;
          }
        }

        n >>= 1;
        if (aBufferInUse) {
          for (nbitson = 0; nbitson < 2; nbitson++) {
            b_a[nbitson] = 0.0;
            y = b_a[nbitson];
            y += aBuffer[nbitson] * aBuffer[0];
            b_a[nbitson] = y;
            y = b_a[nbitson];
            y += aBuffer[nbitson + 2] * aBuffer[1];
            b_a[nbitson] = y;
            b_a[nbitson + 2] = 0.0;
            y = b_a[nbitson + 2];
            y += aBuffer[nbitson] * aBuffer[2];
            b_a[nbitson + 2] = y;
            y = b_a[nbitson + 2];
            y += aBuffer[nbitson + 2] * aBuffer[3];
            b_a[nbitson + 2] = y;
          }
        } else {
          for (nbitson = 0; nbitson < 2; nbitson++) {
            aBuffer[nbitson] = 0.0;
            y = aBuffer[nbitson];
            y += b_a[nbitson] * b_a[0];
            aBuffer[nbitson] = y;
            y = aBuffer[nbitson];
            y += b_a[nbitson + 2] * b_a[1];
            aBuffer[nbitson] = y;
            aBuffer[nbitson + 2] = 0.0;
            y = aBuffer[nbitson + 2];
            y += b_a[nbitson] * b_a[2];
            aBuffer[nbitson + 2] = y;
            y = aBuffer[nbitson + 2];
            y += b_a[nbitson + 2] * b_a[3];
            aBuffer[nbitson + 2] = y;
          }
        }

        aBufferInUse = !aBufferInUse;
      }

      for (nbitson = 0; nbitson < 2; nbitson++) {
        cBuffer_0[nbitson << 1] = 0.0;
        cBuffer_1[nbitson << 1] = 0.0;
        y = cBuffer_1[nbitson << 1];
        cBuffer_3 = cBuffer[0];
        cBuffer_2 = cBuffer_0[nbitson << 1];
        cBuffer_2 += aBuffer[nbitson << 1] * cBuffer_3;
        y += b_a[nbitson << 1] * cBuffer_3;
        cBuffer_0[nbitson << 1] = cBuffer_2;
        cBuffer_1[nbitson << 1] = y;
        y = cBuffer_1[nbitson << 1];
        cBuffer_3 = cBuffer[2];
        cBuffer_2 = cBuffer_0[nbitson << 1];
        cBuffer_2 += aBuffer[(nbitson << 1) + 1] * cBuffer_3;
        y += b_a[(nbitson << 1) + 1] * cBuffer_3;
        cBuffer_0[nbitson << 1] = cBuffer_2;
        cBuffer_1[nbitson << 1] = y;
        cBuffer_0[(nbitson << 1) + 1] = 0.0;
        cBuffer_1[(nbitson << 1) + 1] = 0.0;
        y = cBuffer_1[(nbitson << 1) + 1];
        cBuffer_3 = cBuffer[1];
        cBuffer_2 = cBuffer_0[(nbitson << 1) + 1];
        cBuffer_2 += aBuffer[nbitson << 1] * cBuffer_3;
        y += b_a[nbitson << 1] * cBuffer_3;
        cBuffer_0[(nbitson << 1) + 1] = cBuffer_2;
        cBuffer_1[(nbitson << 1) + 1] = y;
        y = cBuffer_1[(nbitson << 1) + 1];
        cBuffer_3 = cBuffer[3];
        cBuffer_2 = cBuffer_0[(nbitson << 1) + 1];
        cBuffer_2 += aBuffer[(nbitson << 1) + 1] * cBuffer_3;
        y += b_a[(nbitson << 1) + 1] * cBuffer_3;
        cBuffer_0[(nbitson << 1) + 1] = cBuffer_2;
        cBuffer_1[(nbitson << 1) + 1] = y;
      }

      if (first) {
        if (aBufferInUse) {
          c[0] = aBuffer[0];
          c[1] = aBuffer[1];
          c[2] = aBuffer[2];
          c[3] = aBuffer[3];
        } else {
          c[0] = b_a[0];
          c[1] = b_a[1];
          c[2] = b_a[2];
          c[3] = b_a[3];
        }
      } else if (aBufferInUse) {
        c[0] = cBuffer_0[0];
        c[1] = cBuffer_0[1];
        c[2] = cBuffer_0[2];
        c[3] = cBuffer_0[3];
      } else {
        c[0] = cBuffer_1[0];
        c[1] = cBuffer_1[1];
        c[2] = cBuffer_1[2];
        c[3] = cBuffer_1[3];
      }
    }
  } else {
    c[0] = (rtNaN);
    c[1] = (rtNaN);
    c[2] = (rtNaN);
    c[3] = (rtNaN);
  }
}
