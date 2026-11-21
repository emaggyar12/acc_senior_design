/*
 * Code generation for system model 'StarterSystemP2'
 * For more details, see corresponding source file StarterSystemP2.c
 *
 */

#ifndef RTW_HEADER_StarterSystemP2_h_
#define RTW_HEADER_StarterSystemP2_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef StarterSystemP2_COMMON_INCLUDES_
# define StarterSystemP2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* StarterSystemP2_COMMON_INCLUDES_ */

#include "StarterSystemP2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"

/* Block signals for model 'StarterSystemP2' */
typedef struct {
  real_T Gain2;                        /* '<S5>/Gain2' */
  real_T Integrator;                   /* '<S5>/Integrator' */
  real_T Gain1;                        /* '<S5>/Gain1' */
  real_T StartV;                       /* '<Root>/Switch' */
  real_T Product;                      /* '<S7>/Product' */
  real_T Subtract;                     /* '<S7>/Subtract' */
  real_T Divide;                       /* '<S7>/Divide' */
  real_T Divide1;                      /* '<S7>/Divide1' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T Add;                          /* '<S6>/Add' */
  real_T UnaryMinus;                   /* '<S12>/Unary Minus' */
  real_T Switch_b;                     /* '<S12>/Switch' */
  real_T Divide_m;                     /* '<S6>/Divide' */
  real_T Switch_f;                     /* '<S9>/Switch' */
  real_T Divide_a;                     /* '<S5>/Divide' */
  real_T Switch_m;                     /* '<S5>/Switch' */
  real_T MinMax;                       /* '<S5>/MinMax' */
  real_T Sum;                          /* '<S5>/Sum' */
  real_T Product_o;                    /* '<S6>/Product' */
  real_T Gain;                         /* '<S8>/Gain' */
  real_T Constant;                     /* '<S16>/Constant' */
  real_T Subtract_c;                   /* '<S8>/Subtract' */
  real_T I_a;                          /* '<S23>/Integrator1' */
  real_T TorqueConstant;               /* '<S23>/Torque Constant' */
  real_T Product2;                     /* '<S23>/Product2' */
  real_T Gain4;                        /* '<S23>/Gain4' */
  real_T Sum2;                         /* '<S23>/Sum2' */
  real_T Gain3;                        /* '<S23>/Gain3' */
  real_T Product_l;                    /* '<S23>/Product' */
  real_T Product3;                     /* '<S23>/Product3' */
  real_T I_f;                          /* '<S23>/Signal Conversion' */
  real_T Product3_o;                   /* '<S24>/Product3' */
  real_T Gain_h;                       /* '<S24>/Gain' */
  real_T Subtract_e;                   /* '<S24>/Subtract' */
  real_T Product1;                     /* '<S7>/Product1' */
  real_T Abs;                          /* '<S7>/Abs' */
  real_T Product2_g;                   /* '<S7>/Product2' */
  real_T Fcn;                          /* '<S12>/Fcn' */
  real_T Switch1;                      /* '<S12>/Switch1' */
  real_T Product_p;                    /* '<S12>/Product' */
  real_T Fcn_n;                        /* '<S9>/Fcn' */
  real_T Abs_j;                        /* '<S9>/Abs' */
  boolean_T Compare;                   /* '<S13>/Compare' */
  boolean_T Compare_i;                 /* '<S14>/Compare' */
  boolean_T LogicalOperator;           /* '<S12>/Logical Operator' */
  boolean_T Compare_k;                 /* '<S10>/Compare' */
  boolean_T Compare_j;                 /* '<S11>/Compare' */
  boolean_T LogicalOperator_n;         /* '<S9>/Logical Operator' */
} B_StarterSystemP2_c_T;

/* Block states (default storage) for model 'StarterSystemP2' */
typedef struct {
  int_T Integrator_IWORK;              /* '<S5>/Integrator' */
} DW_StarterSystemP2_f_T;

/* Continuous states for model 'StarterSystemP2' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S5>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S23>/Integrator1' */
} X_StarterSystemP2_n_T;

/* State derivatives for model 'StarterSystemP2' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S5>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S23>/Integrator1' */
} XDot_StarterSystemP2_n_T;

/* State Disabled for model 'StarterSystemP2' */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S5>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S23>/Integrator1' */
} XDis_StarterSystemP2_n_T;

/* Parameters (default storage) */
struct P_StarterSystemP2_T_ {
  real_T Iafser;                       /* Variable: Iafser
                                        * Referenced by: '<S23>/Integrator1'
                                        */
  real_T Lafser;                       /* Variable: Lafser
                                        * Referenced by: '<S23>/Torque Constant'
                                        */
  real_T Lser;                         /* Variable: Lser
                                        * Referenced by: '<S23>/Gain3'
                                        */
  real_T Plimit;                       /* Variable: Plimit
                                        * Referenced by: '<S5>/MaxLdPwr'
                                        */
  real_T Rser;                         /* Variable: Rser
                                        * Referenced by: '<S23>/Gain4'
                                        */
  real_T Tc;                           /* Variable: Tc
                                        * Referenced by:
                                        *   '<S5>/Gain1'
                                        *   '<S5>/Gain2'
                                        */
  real_T Vinit;                        /* Variable: Vinit
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T VoltCmd1;                     /* Variable: VoltCmd1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T eff;                          /* Variable: eff
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T div0protectpoly_thresh;       /* Mask Parameter: div0protectpoly_thresh
                                        * Referenced by:
                                        *   '<S13>/Constant'
                                        *   '<S14>/Constant'
                                        */
  real_T div0protectabspoly_thresh; /* Mask Parameter: div0protectabspoly_thresh
                                     * Referenced by:
                                     *   '<S10>/Constant'
                                     *   '<S11>/Constant'
                                     */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S12>/Switch1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 10e6
                                        * Referenced by: '<S23>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: -10e6
                                        * Referenced by: '<S23>/Integrator1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S24>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Constant1_Value_a;            /* Expression: 100
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 100
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T Switch_Threshold_mu;          /* Expression: 0
                                        * Referenced by: '<S5>/Switch'
                                        */
  real_T Gain_Gain_d;                  /* Expression: -1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S16>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_StarterSystemP2_T {
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
    void* dataAddress[82];
    int32_T* vardimsAddress[82];
    RTWLoggingFcnPtr loggingPtrs[82];
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
  B_StarterSystemP2_c_T rtb;
  DW_StarterSystemP2_f_T rtdw;
  RT_MODEL_StarterSystemP2_T rtm;
} MdlrefDW_StarterSystemP2_T;

/* Model reference registration function */
extern void StarterSystemP2_initialize(const char_T **rt_errorStatus, boolean_T *
  rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, RT_MODEL_StarterSystemP2_T *const StarterSystemP2_M,
  B_StarterSystemP2_c_T *localB, DW_StarterSystemP2_f_T *localDW,
  X_StarterSystemP2_n_T *localX, rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  StarterSystemP2_GetCAPIStaticMap(void);
extern void StarterSystemP2_Init(RT_MODEL_StarterSystemP2_T * const
  StarterSystemP2_M, DW_StarterSystemP2_f_T *localDW, X_StarterSystemP2_n_T
  *localX);
extern void StarterSystemP2_Reset(RT_MODEL_StarterSystemP2_T * const
  StarterSystemP2_M, DW_StarterSystemP2_f_T *localDW, X_StarterSystemP2_n_T
  *localX);
extern void StarterSystemP2_Deriv(B_StarterSystemP2_c_T *localB,
  X_StarterSystemP2_n_T *localX, XDot_StarterSystemP2_n_T *localXdot);
extern void StarterSystemP2_Update(DW_StarterSystemP2_f_T *localDW);
extern void StarterSystemP2(RT_MODEL_StarterSystemP2_T * const StarterSystemP2_M,
  const real_T *rtu_MotCrnt, const real_T *rtu_BattV, const real_T *rtu_EngSpd,
  const real_T *rtu_StartCmd, real_T *rty_StartTrq, real_T *rty_BattCurr,
  B_StarterSystemP2_c_T *localB, DW_StarterSystemP2_f_T *localDW,
  X_StarterSystemP2_n_T *localX);

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
 * '<Root>' : 'StarterSystemP2'
 * '<S1>'   : 'StarterSystemP2/Bidirectional DC-DC'
 * '<S2>'   : 'StarterSystemP2/RTI Data'
 * '<S3>'   : 'StarterSystemP2/Starter'
 * '<S4>'   : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss'
 * '<S5>'   : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response'
 * '<S6>'   : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current'
 * '<S7>'   : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement'
 * '<S8>'   : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem'
 * '<S9>'   : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly'
 * '<S10>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Compare To Constant'
 * '<S11>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Compare To Constant1'
 * '<S12>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly'
 * '<S13>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Compare To Constant'
 * '<S14>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Compare To Constant1'
 * '<S15>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Power Accounting Bus Creator'
 * '<S16>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Power Accounting Bus Creator/No PwrStored Input'
 * '<S17>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S18>'  : 'StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S19>'  : 'StarterSystemP2/RTI Data/RTI Data Store'
 * '<S20>'  : 'StarterSystemP2/RTI Data/RTI Data Store/RTI Data Store'
 * '<S21>'  : 'StarterSystemP2/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S22>'  : 'StarterSystemP2/Starter/Series Connection DC Machine'
 * '<S23>'  : 'StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input'
 * '<S24>'  : 'StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem'
 * '<S25>'  : 'StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Power Accounting Bus Creator'
 * '<S26>'  : 'StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S27>'  : 'StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Power Accounting Bus Creator/PwrStored Input'
 * '<S28>'  : 'StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Power Accounting Bus Creator/PwrTrnsfrd Input'
 */
#endif                                 /* RTW_HEADER_StarterSystemP2_h_ */
