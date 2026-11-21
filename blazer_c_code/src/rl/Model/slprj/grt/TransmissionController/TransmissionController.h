/*
 * Code generation for system model 'TransmissionController'
 * For more details, see corresponding source file TransmissionController.c
 *
 */

#ifndef RTW_HEADER_TransmissionController_h_
#define RTW_HEADER_TransmissionController_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef TransmissionController_COMMON_INCLUDES_
# define TransmissionController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                             /* TransmissionController_COMMON_INCLUDES_ */

#include "TransmissionController_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for system '<S2>/calc' */
typedef struct {
  real_T CalculateUpshiftThreshold;    /* '<S3>/Calculate Upshift Threshold' */
  real_T Add1;                         /* '<S3>/Add1' */
  real_T CalculateDownshiftThreshold;/* '<S3>/Calculate  Downshift Threshold' */
  real_T Add3;                         /* '<S3>/Add3' */
  real_T Add4;                         /* '<S3>/Add4' */
} B_calc_TransmissionController_T;

/* Block signals for model 'TransmissionController' */
typedef struct {
  real_T up_th;                        /* '<S1>/Chart' */
  real_T down_th;                      /* '<S1>/Chart' */
  real_T gear;                         /* '<S1>/Chart' */
  real_T pedal;                        /* '<S1>/Chart' */
  real_T gear_o;                       /* '<S1>/Chart' */
  real_T pedal_o;                      /* '<S1>/Chart' */
  real_T gear_n;                       /* '<S1>/Chart' */
  real_T pedal_n;                      /* '<S1>/Chart' */
  real_T speed;                        /* '<S1>/Chart' */
  real_T CalculateDownshiftThreshold;/* '<S4>/Calculate  Downshift Threshold' */
  real_T CalculateUpshiftThreshold;    /* '<S5>/Calculate Upshift Threshold' */
  B_calc_TransmissionController_T calc;/* '<S2>/calc' */
} B_TransmissionController_c_T;

/* Block states (default storage) for model 'TransmissionController' */
typedef struct {
  int32_T sfEvent;                     /* '<S1>/Chart' */
  uint16_T temporalCounter_i1;         /* '<S1>/Chart' */
  uint8_T is_active_c1_TransmissionController;/* '<S1>/Chart' */
  uint8_T is_GearState;                /* '<S1>/Chart' */
  uint8_T is_active_GearState;         /* '<S1>/Chart' */
  uint8_T is_SelectionState;           /* '<S1>/Chart' */
  uint8_T is_active_SelectionState;    /* '<S1>/Chart' */
  boolean_T isStable;                  /* '<S1>/Chart' */
} DW_TransmissionController_f_T;

/* Parameters for system: '<S2>/calc' */
struct P_calc_TransmissionController_T_ {
  real_T SpdThr_Y0;                    /* Computed Parameter: SpdThr_Y0
                                        * Referenced by: '<S3>/SpdThr'
                                        */
  uint32_T CalculateUpshiftThreshold_maxIndex[2];
                       /* Computed Parameter: CalculateUpshiftThreshold_maxIndex
                        * Referenced by: '<S3>/Calculate Upshift Threshold'
                        */
  uint32_T CalculateDownshiftThreshold_maxIndex[2];
                     /* Computed Parameter: CalculateDownshiftThreshold_maxIndex
                      * Referenced by: '<S3>/Calculate  Downshift Threshold'
                      */
};

/* Parameters (default storage) */
struct P_TransmissionController_T_ {
  real_T Dn_Shft_Spd[136];             /* Variable: Dn_Shft_Spd
                                        * Referenced by:
                                        *   '<S3>/Calculate  Downshift Threshold'
                                        *   '<S4>/Calculate  Downshift Threshold'
                                        */
  real_T Gear_Dn_bpt[8];               /* Variable: Gear_Dn_bpt
                                        * Referenced by:
                                        *   '<S3>/Calculate  Downshift Threshold'
                                        *   '<S4>/Calculate  Downshift Threshold'
                                        */
  real_T Gear_Up_bpt[8];               /* Variable: Gear_Up_bpt
                                        * Referenced by:
                                        *   '<S3>/Calculate Upshift Threshold'
                                        *   '<S5>/Calculate Upshift Threshold'
                                        */
  real_T Pdl_Pos_Dn_bpt[17];           /* Variable: Pdl_Pos_Dn_bpt
                                        * Referenced by:
                                        *   '<S3>/Calculate  Downshift Threshold'
                                        *   '<S4>/Calculate  Downshift Threshold'
                                        */
  real_T Pdl_Pos_Up_bpt[17];           /* Variable: Pdl_Pos_Up_bpt
                                        * Referenced by:
                                        *   '<S3>/Calculate Upshift Threshold'
                                        *   '<S5>/Calculate Upshift Threshold'
                                        */
  real_T Up_Shft_Spd[136];             /* Variable: Up_Shft_Spd
                                        * Referenced by:
                                        *   '<S3>/Calculate Upshift Threshold'
                                        *   '<S5>/Calculate Upshift Threshold'
                                        */
  real_T up_th_Y0;                     /* Computed Parameter: up_th_Y0
                                        * Referenced by: '<S5>/up_th'
                                        */
  real_T down_th_Y0;                   /* Computed Parameter: down_th_Y0
                                        * Referenced by: '<S4>/down_th'
                                        */
  uint32_T CalculateUpshiftThreshold_maxIndex[2];
                       /* Computed Parameter: CalculateUpshiftThreshold_maxIndex
                        * Referenced by: '<S5>/Calculate Upshift Threshold'
                        */
  uint32_T CalculateDownshiftThreshold_maxIndex[2];
                     /* Computed Parameter: CalculateDownshiftThreshold_maxIndex
                      * Referenced by: '<S4>/Calculate  Downshift Threshold'
                      */
  P_calc_TransmissionController_T calc;/* '<S2>/calc' */
};

/* Real-time Model Data Structure */
struct tag_RTM_TransmissionController_T {
  const char_T **errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[25];
    int32_T* vardimsAddress[25];
    RTWLoggingFcnPtr loggingPtrs[25];
  } DataMapInfo;
};

typedef struct {
  B_TransmissionController_c_T rtb;
  DW_TransmissionController_f_T rtdw;
  RT_MODEL_TransmissionController_T rtm;
} MdlrefDW_TransmissionController_T;

/* Model reference registration function */
extern void TransmissionController_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TransmissionController_T *const TransmissionController_M,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  TransmissionController_GetCAPIStaticMap(void);
extern void TransmissionController_calc_Init(B_calc_TransmissionController_T
  *localB, P_calc_TransmissionController_T *localP);
extern void TransmissionController_calc(real_T rtu_gear, real_T rtu_pedal,
  real_T rtu_speed, B_calc_TransmissionController_T *localB,
  P_calc_TransmissionController_T *localP);
extern void TransmissionController_Init(real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW);
extern void TransmissionController_Reset(real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW);
extern void TransmissionController(const real_T *rtu_VehSpd, const real_T
  *rtu_AccelPdl, const real_T *rtu_Neutral, real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TransmissionController'
 * '<S1>'   : 'TransmissionController/Shift state'
 * '<S2>'   : 'TransmissionController/Shift state/Chart'
 * '<S3>'   : 'TransmissionController/Shift state/Chart/calc'
 * '<S4>'   : 'TransmissionController/Shift state/Chart/calc_down'
 * '<S5>'   : 'TransmissionController/Shift state/Chart/calc_up'
 */
#endif                                /* RTW_HEADER_TransmissionController_h_ */
