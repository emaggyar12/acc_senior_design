/*
 * Code generation for system model 'MotMapped'
 * For more details, see corresponding source file MotMapped.c
 *
 */

#ifndef RTW_HEADER_MotMapped_h_
#define RTW_HEADER_MotMapped_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef MotMapped_COMMON_INCLUDES_
# define MotMapped_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* MotMapped_COMMON_INCLUDES_ */

#include "MotMapped_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block signals for model 'MotMapped' */
typedef struct {
  real_T MaxTorqueLimit;               /* '<S7>/Max Torque Limit' */
  real_T Integrator;                   /* '<S7>/Integrator' */
  real_T Gain1;                        /* '<S7>/Gain1' */
  real_T Product;                      /* '<S7>/Product' */
  real_T Interpolatedzerocrossing;     /* '<S7>/Interpolated zero-crossing' */
  real_T Product_p;                    /* '<S6>/Product' */
  real_T uDLookupTable;                /* '<S6>/2-D Lookup Table' */
  real_T Add;                          /* '<S4>/Add' */
  real_T Saturation;                   /* '<S4>/Saturation' */
  real_T Add_l;                        /* '<S5>/Add' */
  real_T Gain;                         /* '<S5>/Gain' */
  real_T Gain1_n;                      /* '<S5>/Gain1' */
  real_T Subtract;                     /* '<S5>/Subtract' */
  real_T Sum;                          /* '<S7>/Sum' */
} B_MotMapped_c_T;

/* Continuous states for model 'MotMapped' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S7>/Integrator' */
} X_MotMapped_n_T;

/* State derivatives for model 'MotMapped' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S7>/Integrator' */
} XDot_MotMapped_n_T;

/* State Disabled for model 'MotMapped' */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S7>/Integrator' */
} XDis_MotMapped_n_T;

/* Parameters (default storage) */
struct P_MotMapped_T_ {
  real_T Tc;                           /* Variable: Tc
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T MaxTorqueLimit_tableData[65]; /* Expression: T_t_extended
                                        * Referenced by: '<S7>/Max Torque Limit'
                                        */
  real_T MaxTorqueLimit_bp01Data[65];  /* Expression: w_t_extended
                                        * Referenced by: '<S7>/Max Torque Limit'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S7>/Integrator'
                                        */
  real_T Interpolatedzerocrossing_tableData[2];/* Expression: [-1 1]
                                                * Referenced by: '<S7>/Interpolated zero-crossing'
                                                */
  real_T Interpolatedzerocrossing_bp01Data[2];/* Expression: [-1 1]
                                               * Referenced by: '<S7>/Interpolated zero-crossing'
                                               */
  real_T uDLookupTable_tableData[4472];/* Expression: x_losses_mat
                                        * Referenced by: '<S6>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[86];   /* Expression: x_w_eff_vec
                                        * Referenced by: '<S6>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[52];   /* Expression: x_T_eff_vec
                                        * Referenced by: '<S6>/2-D Lookup Table'
                                        */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S6>/2-D Lookup Table'
                                    */
};

/* Real-time Model Data Structure */
struct tag_RTM_MotMapped_T {
  const char_T **errorStatus;
  RTWSolverInfo *solverInfo;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[30];
    int32_T* vardimsAddress[30];
    RTWLoggingFcnPtr loggingPtrs[30];
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
  B_MotMapped_c_T rtb;
  RT_MODEL_MotMapped_T rtm;
} MdlrefDW_MotMapped_T;

/* Model reference registration function */
extern void MotMapped_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, RT_MODEL_MotMapped_T *const
  MotMapped_M, B_MotMapped_c_T *localB, X_MotMapped_n_T *localX,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  MotMapped_GetCAPIStaticMap(void);
extern void MotMapped_Init(X_MotMapped_n_T *localX);
extern void MotMapped_Reset(X_MotMapped_n_T *localX);
extern void MotMapped_Deriv(B_MotMapped_c_T *localB, XDot_MotMapped_n_T
  *localXdot);
extern void MotMapped_Update(void);
extern void MotMapped(RT_MODEL_MotMapped_T * const MotMapped_M, const real_T
                      *rtu_MotTrqCmd, const real_T *rtu_MotSpd, const real_T
                      *rtu_BusVolt, real_T *rty_MotTrq, real_T *rty_MotCurnt,
                      B_MotMapped_c_T *localB, X_MotMapped_n_T *localX);

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
 * '<Root>' : 'MotMapped'
 * '<S1>'   : 'MotMapped/Mapped Motor'
 * '<S2>'   : 'MotMapped/RTI Data'
 * '<S3>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4'
 * '<S4>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current'
 * '<S5>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units'
 * '<S6>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data'
 * '<S7>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope'
 * '<S8>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Power Accounting Bus Creator'
 * '<S9>'   : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S10>'  : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Power Accounting Bus Creator/PwrStored Input'
 * '<S11>'  : 'MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S12>'  : 'MotMapped/RTI Data/RTI Data Store'
 * '<S13>'  : 'MotMapped/RTI Data/RTI Data Store/RTI Data Store'
 * '<S14>'  : 'MotMapped/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_MotMapped_h_ */
