/*
 * Code generation for system model 'BattHev'
 * For more details, see corresponding source file BattHev.c
 *
 */

#ifndef RTW_HEADER_BattHev_h_
#define RTW_HEADER_BattHev_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef BattHev_COMMON_INCLUDES_
#define BattHev_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* BattHev_COMMON_INCLUDES_ */

#include "BattHev_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Block signals for model 'BattHev' */
typedef struct {
  real_T Gain1;                        /* '<S7>/Gain1' */
  real_T SOC_INIT_DEV;                 /* '<Root>/SOC_INIT_DEV' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T IntegratorLimited;            /* '<S7>/Integrator Limited' */
  real_T Divide;                       /* '<S8>/Divide' */
  real_T Em;                           /* '<S9>/Em' */
  real_T R;                            /* '<S9>/R' */
  real_T Gain2;                        /* '<S9>/Gain2' */
  real_T Product;                      /* '<S9>/Product' */
  real_T Subtract;                     /* '<S9>/Subtract' */
  real_T Product1;                     /* '<S9>/Product1' */
  real_T Gain3;                        /* '<S9>/Gain3' */
  real_T Gain4;                        /* '<S9>/Gain4' */
  real_T Product_e;                    /* '<S4>/Product' */
  real_T Gain;                         /* '<S4>/Gain' */
  real_T Gain1_j;                      /* '<S4>/Gain1' */
  real_T Add;                          /* '<S4>/Add' */
} B_BattHev_c_T;

/* Block states (default storage) for model 'BattHev' */
typedef struct {
  int_T IntegratorLimited_IWORK;       /* '<S7>/Integrator Limited' */
} DW_BattHev_f_T;

/* Continuous states for model 'BattHev' */
typedef struct {
  real_T IntegratorLimited_CSTATE;     /* '<S7>/Integrator Limited' */
} X_BattHev_n_T;

/* State derivatives for model 'BattHev' */
typedef struct {
  real_T IntegratorLimited_CSTATE;     /* '<S7>/Integrator Limited' */
} XDot_BattHev_n_T;

/* State Disabled for model 'BattHev' */
typedef struct {
  boolean_T IntegratorLimited_CSTATE;  /* '<S7>/Integrator Limited' */
} XDis_BattHev_n_T;

/* Parameters (default storage) */
struct P_BattHev_T_ {
  real_T BattChargeMax;                /* Variable: BattChargeMax
                                        * Referenced by:
                                        *   '<Root>/Battery_Init'
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Integrator Limited'
                                        *   '<S7>/Switch'
                                        *   '<S8>/Constant1'
                                        */
  real_T BattTempBp[9];                /* Variable: BattTempBp
                                        * Referenced by: '<S9>/R'
                                        */
  real_T CapLUTBp[101];                /* Variable: CapLUTBp
                                        * Referenced by: '<S9>/Em'
                                        */
  real_T CapSOCBp[10];                 /* Variable: CapSOCBp
                                        * Referenced by: '<S9>/R'
                                        */
  real_T Em[101];                      /* Variable: Em
                                        * Referenced by: '<S9>/Em'
                                        */
  real_T Np;                           /* Variable: Np
                                        * Referenced by:
                                        *   '<S7>/Gain1'
                                        *   '<S9>/Gain2'
                                        *   '<S9>/Gain4'
                                        */
  real_T Ns;                           /* Variable: Ns
                                        * Referenced by:
                                        *   '<S9>/Gain1'
                                        *   '<S9>/Gain3'
                                        */
  real_T RInt[90];                     /* Variable: RInt
                                        * Referenced by: '<S9>/R'
                                        */
  real_T SOC_INIT_DEV_Gain;            /* Expression: 0.7
                                        * Referenced by: '<Root>/SOC_INIT_DEV'
                                        */
  real_T IntegratorLimited_LowerSat;   /* Expression: 0
                                        * Referenced by: '<S7>/Integrator Limited'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T SOCRatioto_Gain;              /* Expression: 100
                                        * Referenced by: '<Root>/SOC Ratio to %'
                                        */
  uint32_T R_maxIndex[2];              /* Computed Parameter: R_maxIndex
                                        * Referenced by: '<S9>/R'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_BattHev_T {
  const char_T **errorStatus;
  RTWSolverInfo *solverInfo;
  const rtTimingBridge *timingBridge;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[32];
    int32_T* vardimsAddress[32];
    RTWLoggingFcnPtr loggingPtrs[32];
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize0;
    SimTimeStep *simTimeStep;
    boolean_T *stopRequestedFlag;
  } Timing;
};

typedef struct {
  B_BattHev_c_T rtb;
  DW_BattHev_f_T rtdw;
  RT_MODEL_BattHev_T rtm;
} MdlrefDW_BattHev_T;

/* Model reference registration function */
extern void BattHev_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, RT_MODEL_BattHev_T *const BattHev_M, B_BattHev_c_T *localB,
  DW_BattHev_f_T *localDW, X_BattHev_n_T *localX, rtwCAPI_ModelMappingInfo
  *rt_ParentMMI, const char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T
  rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  BattHev_GetCAPIStaticMap(void);
extern void BattHev_Init(RT_MODEL_BattHev_T * const BattHev_M, DW_BattHev_f_T
  *localDW, X_BattHev_n_T *localX);
extern void BattHev_Reset(RT_MODEL_BattHev_T * const BattHev_M, DW_BattHev_f_T
  *localDW, X_BattHev_n_T *localX);
extern void BattHev_Deriv(B_BattHev_c_T *localB, X_BattHev_n_T *localX,
  XDot_BattHev_n_T *localXdot);
extern void BattHev_Update(DW_BattHev_f_T *localDW);
extern void BattHev(RT_MODEL_BattHev_T * const BattHev_M, const real_T
                    *rtu_BattCurr, const real_T *rtu_BattTemp, real_T
                    *rty_BattSoc, real_T *rty_BattV, B_BattHev_c_T *localB,
                    DW_BattHev_f_T *localDW, X_BattHev_n_T *localX);

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
 * '<Root>' : 'BattHev'
 * '<S1>'   : 'BattHev/Lithium Ion Battery Pack'
 * '<S2>'   : 'BattHev/RTI Data'
 * '<S3>'   : 'BattHev/Lithium Ion Battery Pack/Datasheet Battery External'
 * '<S4>'   : 'BattHev/Lithium Ion Battery Pack/Info Bus'
 * '<S5>'   : 'BattHev/Lithium Ion Battery Pack/Output Passthrough'
 * '<S6>'   : 'BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery'
 * '<S7>'   : 'BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Charge Model'
 * '<S8>'   : 'BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/State of Charge Capacity'
 * '<S9>'   : 'BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation'
 * '<S10>'  : 'BattHev/Lithium Ion Battery Pack/Info Bus/Power Accounting Bus Creator'
 * '<S11>'  : 'BattHev/Lithium Ion Battery Pack/Info Bus/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S12>'  : 'BattHev/Lithium Ion Battery Pack/Info Bus/Power Accounting Bus Creator/PwrStored Input'
 * '<S13>'  : 'BattHev/Lithium Ion Battery Pack/Info Bus/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S14>'  : 'BattHev/RTI Data/RTI Data Store'
 * '<S15>'  : 'BattHev/RTI Data/RTI Data Store/RTI Data Store'
 * '<S16>'  : 'BattHev/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_BattHev_h_ */
