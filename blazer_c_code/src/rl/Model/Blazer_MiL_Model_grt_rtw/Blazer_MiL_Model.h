/*
 * Blazer_MiL_Model.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Blazer_MiL_Model".
 *
 * Model version              : 1.115
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 18:26:48 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Blazer_MiL_Model_h_
#define RTW_HEADER_Blazer_MiL_Model_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <float.h>
#include "rtw_modelmap.h"
#ifndef Blazer_MiL_Model_COMMON_INCLUDES_
# define Blazer_MiL_Model_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif        /* Blazer_MiL_Model_COMMON_INCLUDES_ */

#include "Blazer_MiL_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "Blazer_Plant_Model.h"
#include "HSC_Model.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmCounterLimit
# define rtmCounterLimit(rtm, idx)     ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (default storage) */
typedef struct {
  HSCInputs Memory;                    /* '<Root>/Memory' */
  HSCInputs BusCreator;                /* '<S5>/Bus Creator' */
  HSCOutputs Memory1;                  /* '<Root>/Memory1' */
  HSCOutputs Model;                    /* '<Root>/Model' */
  Scope Model1_o16;                    /* '<Root>/Model1' */
  CntrlDesk BusConversion_InsertedFor_Model1_at_inport_0_BusCreator1;
  real_T ACCPIDOut;
  real_T DistError;
  real_T DistError_m;                  /* '<S1>/Unary Minus3' */
  real_T APP;
  real_T BPP;
  real_T SafeDist;
  real_T RelDist;
  real_T Switch;                       /* '<S6>/Switch' */
  real_T TmpRTBAtMultiportSwitchInport2;/* '<S6>/HWFET' */
  real_T TmpRTBAtMultiportSwitchInport3;/* '<S6>/UDDS' */
  real_T TmpRTBAtMultiportSwitchInport4;/* '<S6>/USO6' */
  real_T TmpRTBAtMultiportSwitchInport5;/* '<S6>/UT Cycle' */
  real_T TmpRTBAtMultiportSwitchInport6;/* '<S6>/CAVs City' */
  real_T FromWs;                       /* '<S14>/FromWs' */
  real_T MultiportSwitch;              /* '<S6>/Multiport Switch' */
  real_T MPH2MPS;                      /* '<S6>/MPH2MPS' */
  real_T APP_i;                        /* '<Root>/Model1' */
  real_T VehSpdAvgDrvn;                /* '<Root>/Model1' */
  real_T Gear;                         /* '<Root>/Model1' */
  real_T Brake_Pa;                     /* '<Root>/Model1' */
  real_T xdotref;                      /* '<Root>/Model1' */
  real_T BPP_c;                        /* '<Root>/Model1' */
  real_T BattCurr;                     /* '<Root>/Model1' */
  real_T BattPwr;                      /* '<Root>/Model1' */
  real_T BattV;                        /* '<Root>/Model1' */
  real_T MotTrq;                       /* '<Root>/Model1' */
  real_T BattSoc;                      /* '<Root>/Model1' */
  real_T MotPwrElec;                   /* '<Root>/Model1' */
  real_T MotSpd;                       /* '<Root>/Model1' */
  real_T EngSpd;                       /* '<Root>/Model1' */
  real_T EngTrqOut;                    /* '<Root>/Model1' */
  real_T BattSOC;
  real_T Jerksim;                      /* '<S1>/Discrete Derivative3' */
  real_T BattFuel;
  real_T TotFuel;
  real_T ACC_APP;
  real_T APP_p;                        /* '<S1>/Gain' */
  real_T APPACC;                       /* '<S1>/Gain1' */
  real_T ACC_BPP;
  real_T RefSpd_mph;
  real_T VehSpd_mph;
  real_T Sum;                          /* '<S1>/Sum' */
  real_T Sum1;                         /* '<S1>/Sum1' */
  real_T Clock;                        /* '<S1>/Clock' */
  real_T APP_k;                        /* '<S5>/Gain' */
  real_T Clock7;                       /* '<S13>/Clock7' */
  real_T MultiportSwitch7;             /* '<S13>/Multiport Switch7' */
  real_T Clock6;                       /* '<S13>/Clock6' */
  real_T Clock3;                       /* '<S13>/Clock3' */
  real_T Clock_j;                      /* '<S13>/Clock' */
  real_T Clock4;                       /* '<S13>/Clock4' */
  real_T Clock2;                       /* '<S13>/Clock2' */
  real_T ms2kph;                       /* '<S5>/m//s2kph' */
  real_T Clock8;                       /* '<S13>/Clock8' */
  real_T Clock1;                       /* '<S13>/Clock1' */
  real_T Clock5;                       /* '<S13>/Clock5' */
  real_T MultiportSwitch5;             /* '<S13>/Multiport Switch5' */
  real_T A123Relay;                    /* '<S6>/A123Relay' */
  real_T BMS12VRelay;                  /* '<S6>/BMS12VRelay' */
  real_T HVPumpRelay;                  /* '<S6>/HVPumpRelay' */
  real_T MCURelay;                     /* '<S6>/MCURelay' */
  real_T VehSpd_mph_g;
  real_T RefSpd_mph_g;
  real_T EngSpd_rpm;
  real_T MotSpd_rpm;
  real_T EngTrq_Nm;
  real_T MotTrq_Nm;
  real_T BattCurr_A;
  real_T BattSOC_g;
  real_T FuelEcon_mpge;
  real_T TotFuel_l;
  real_T BattFuel_m;
  real_T Add;                          /* '<S6>/Add' */
  real_T TrqDmdPedalMap;
  real_T VehSpd_mph_gg;
  real_T xdot;                         /* '<S1>/mph2ms' */
  real_T RateTransition;               /* '<S1>/Rate Transition' */
  real_T TSamp;                        /* '<S8>/TSamp' */
  real_T Uk1;                          /* '<S8>/UD' */
  real_T Diff;                         /* '<S8>/Diff' */
  real_T TSamp_j;                      /* '<S7>/TSamp' */
  real_T Uk1_k;                        /* '<S7>/UD' */
  real_T Diff_o;                       /* '<S7>/Diff' */
  real_T DriveCycleSimTime;            /* '<S6>/Drive Cycle Sim Time' */
  real_T MultiportSwitch1_h;           /* '<S6>/Multiport Switch1' */
  real_T CAVsCity;                     /* '<S6>/CAVs City' */
  real_T HWFET;                        /* '<S6>/HWFET' */
  real_T UDDS;                         /* '<S6>/UDDS' */
  real_T USO6;                         /* '<S6>/USO6' */
  real_T UTCycle;                      /* '<S6>/UT Cycle' */
  real_T Switch1;                      /* '<S13>/Switch1' */
  real_T Switch2;                      /* '<S13>/Switch2' */
  real_T Switch3;                      /* '<S13>/Switch3' */
  real_T Switch4;                      /* '<S13>/Switch4' */
  real_T Switch5;                      /* '<S13>/Switch5' */
  real_T Switch6;                      /* '<S13>/Switch6' */
  real_T Switch7;                      /* '<S13>/Switch7' */
  real_T Switch8;                      /* '<S13>/Switch8' */
  real_T Switch9;                      /* '<S13>/Switch9' */
  real_T Gain;                         /* '<S13>/Gain' */
  real_T Cost;                         /* '<S1>/MATLAB Function1' */
  real_T Jerkcost;                     /* '<S1>/MATLAB Function1' */
  real_T SOCcost;                      /* '<S1>/MATLAB Function1' */
  real_T Fuelcost;                     /* '<S1>/MATLAB Function1' */
  real_T Jerksim_j;                    /* '<S1>/MATLAB Function1' */
} B_Blazer_MiL_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  HSCInputs Memory_PreviousInput;      /* '<Root>/Memory' */
  HSCOutputs Memory1_PreviousInput;    /* '<Root>/Memory1' */
  real_T UD_DSTATE;                    /* '<S8>/UD' */
  real_T UD_DSTATE_j;                  /* '<S7>/UD' */
  real_T TmpRTBAtMultiportSwitchInport2_Buffer0;/* synthesized block */
  real_T TmpRTBAtMultiportSwitchInport3_Buffer0;/* synthesized block */
  real_T TmpRTBAtMultiportSwitchInport4_Buffer0;/* synthesized block */
  real_T TmpRTBAtMultiportSwitchInport5_Buffer0;/* synthesized block */
  real_T TmpRTBAtMultiportSwitchInport6_Buffer0;/* synthesized block */
  real_T Jerksim_Buffer0;              /* synthesized block */
  real_T VehSpd_mph_Buffer;            /* synthesized block */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S14>/FromWs' */

  struct {
    void *LoggedData[5];
  } Scope5_PWORK;                      /* '<S1>/Scope5' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S1>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;               /* '<S1>/To Workspace10' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S1>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S1>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S1>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S1>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S1>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                /* '<S1>/To Workspace7' */

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                /* '<S1>/To Workspace8' */

  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK;                /* '<S1>/To Workspace9' */

  struct {
    void *LoggedData;
  } ToWorkspace13_PWORK;               /* '<S1>/To Workspace13' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S5>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK_o;              /* '<S5>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK_c;              /* '<S5>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK_a;              /* '<S5>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK_a;              /* '<S5>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_n;               /* '<S6>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK_g;              /* '<S6>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK_n;              /* '<S6>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK_aj;             /* '<S6>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK_c;              /* '<S6>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK_b;              /* '<S6>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK_j;              /* '<S6>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK_l;              /* '<S6>/To Workspace7' */

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK_e;              /* '<S6>/To Workspace8' */

  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK_e;              /* '<S6>/To Workspace9' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_nl;              /* '<S1>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace11_PWORK;               /* '<S1>/To Workspace11' */

  struct {
    void *LoggedData;
  } ToWorkspace12_PWORK;               /* '<S1>/To Workspace12' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S14>/FromWs' */

  MdlrefDW_Blazer_Plant_Model_T Model1_InstanceData;/* '<Root>/Model1' */
  MdlrefDW_HSC_Model_T Model_InstanceData;/* '<Root>/Model' */
} DW_Blazer_MiL_Model_T;

/* Continuous states (default storage) */
typedef struct {
  X_Blazer_Plant_Model_n_T Model1_CSTATE;/* '<Root>/Model1' */
} X_Blazer_MiL_Model_T;

/* Periodic continuous state vector (global) */
typedef int_T PeriodicIndX_Blazer_MiL_Model_T[1];
typedef real_T PeriodicRngX_Blazer_MiL_Model_T[2];

/* State derivatives (default storage) */
typedef struct {
  XDot_Blazer_Plant_Model_n_T Model1_CSTATE;/* '<Root>/Model1' */
} XDot_Blazer_MiL_Model_T;

/* State disabled  */
typedef struct {
  XDis_Blazer_Plant_Model_n_T Model1_CSTATE;/* '<Root>/Model1' */
} XDis_Blazer_MiL_Model_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Parameters (default storage) */
struct P_Blazer_MiL_Model_T_ {
  real_T DiscreteDerivative3_ICPrevScaledInput;
                        /* Mask Parameter: DiscreteDerivative3_ICPrevScaledInput
                         * Referenced by: '<S8>/UD'
                         */
  real_T DiscreteDerivative1_ICPrevScaledInput;
                        /* Mask Parameter: DiscreteDerivative1_ICPrevScaledInput
                         * Referenced by: '<S7>/UD'
                         */
  HSCInputs Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<Root>/Memory'
                                   */
  HSCOutputs Memory1_InitialCondition;
                                 /* Computed Parameter: Memory1_InitialCondition
                                  * Referenced by: '<Root>/Memory1'
                                  */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T Switch9_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch9'
                                        */
  real_T Switch8_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch8'
                                        */
  real_T Switch7_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch7'
                                        */
  real_T Switch6_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch6'
                                        */
  real_T Switch5_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch5'
                                        */
  real_T Switch4_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch4'
                                        */
  real_T Switch3_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch3'
                                        */
  real_T Switch2_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch2'
                                        */
  real_T Switch1_Threshold;            /* Expression: 10
                                        * Referenced by: '<S13>/Switch1'
                                        */
  real_T Off_Value;                    /* Expression: 0
                                        * Referenced by: '<S6>/Off'
                                        */
  real_T DriveCycleStop_Value;         /* Expression: 0
                                        * Referenced by: '<S6>/Drive Cycle Stop'
                                        */
  real_T CAVPCMACCEnable_Value;        /* Expression: 0
                                        * Referenced by: '<S6>/CAVPCM ACC Enable'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  real_T DriveCycleSelection_Value;    /* Expression: 3
                                        * Referenced by: '<S6>/Drive Cycle Selection'
                                        */
  real_T TmpRTBAtMultiportSwitchInport2_InitialCondition;/* Expression: 0
                                                          * Referenced by: synthesized block
                                                          */
  real_T TmpRTBAtMultiportSwitchInport3_InitialCondition;/* Expression: 0
                                                          * Referenced by: synthesized block
                                                          */
  real_T TmpRTBAtMultiportSwitchInport4_InitialCondition;/* Expression: 0
                                                          * Referenced by: synthesized block
                                                          */
  real_T TmpRTBAtMultiportSwitchInport5_InitialCondition;/* Expression: 0
                                                          * Referenced by: synthesized block
                                                          */
  real_T TmpRTBAtMultiportSwitchInport6_InitialCondition;/* Expression: 0
                                                          * Referenced by: synthesized block
                                                          */
  real_T MPH2MPS_Gain;                 /* Expression: 1/2.237
                                        * Referenced by: '<S6>/MPH2MPS'
                                        */
  real_T Jerksim_InitialCondition;     /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1/100
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/100
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T ABSAtv_Value;                 /* Expression: 0
                                        * Referenced by: '<S5>/ABSAtv'
                                        */
  real_T APP_validity_Value;           /* Expression: 0
                                        * Referenced by: '<S5>/APP_validity'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 100
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T BPPFaultSwitch_Value;         /* Expression: 1
                                        * Referenced by: '<S13>/BPP Fault Switch'
                                        */
  real_T NewBPP_Value;                 /* Expression: 0.8
                                        * Referenced by: '<S13>/NewBPP'
                                        */
  real_T Gain2_Gain;                   /* Expression: 100
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real_T EngRunAtv_Value;              /* Expression: 1
                                        * Referenced by: '<S5>/EngRunAtv'
                                        */
  real_T GearFaultSwitch_Value;        /* Expression: 1
                                        * Referenced by: '<S13>/Gear Fault Switch'
                                        */
  real_T GearFault_Value;              /* Expression: 1
                                        * Referenced by: '<S13>/Gear Fault'
                                        */
  real_T Hood_state_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Hood_state'
                                        */
  real_T Key_status_Value;             /* Expression: 2
                                        * Referenced by: '<S5>/Key_status'
                                        */
  real_T GFDFaultSwitch_Value;         /* Expression: 1
                                        * Referenced by: '<S13>/GFD Fault Switch'
                                        */
  real_T bms_ground_fault_Value;       /* Expression: 20000
                                        * Referenced by: '<S5>/bms_ground_fault'
                                        */
  real_T battGFD_Value;                /* Expression: 50
                                        * Referenced by: '<S13>/battGFD'
                                        */
  real_T MCUOverheatFaultSwitch_Value; /* Expression: 1
                                        * Referenced by: '<S13>/MCU Overheat Fault Switch'
                                        */
  real_T ThermalIndicator_Value;       /* Expression: 0
                                        * Referenced by: '<S5>/ThermalIndicator'
                                        */
  real_T MCUOverheat_Value;            /* Expression: 77
                                        * Referenced by: '<S13>/MCUOverheat'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 30/pi
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T MtrTrqEstFaultSwitch_Value;   /* Expression: 1
                                        * Referenced by: '<S13>/MtrTrqEst Fault Switch'
                                        */
  real_T MotrTrqEstFault_Value;        /* Expression: -1
                                        * Referenced by: '<S13>/MotrTrqEst Fault'
                                        */
  real_T StateMcu_Value;               /* Expression: 4
                                        * Referenced by: '<S5>/StateMcu'
                                        */
  real_T StrWhAng_Value;               /* Expression: 0
                                        * Referenced by: '<S5>/StrWhAng'
                                        */
  real_T StrWhAngV_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/StrWhAngV'
                                        */
  real_T TranshftLvrFaultSwitch_Value; /* Expression: 1
                                        * Referenced by: '<S13>/TranshftLvr Fault Switch'
                                        */
  real_T TrnsShiftLvrPos_Value;        /* Expression: 4
                                        * Referenced by: '<S5>/TrnsShiftLvrPos'
                                        */
  real_T TrnsPos_Value;                /* Expression: 2
                                        * Referenced by: '<S13>/TrnsPos'
                                        */
  real_T PwrTrainDirectionFaultSwitch_Value;/* Expression: 1
                                             * Referenced by: '<S13>/PwrTrainDirection Fault Switch'
                                             */
  real_T ms2kph_Gain;                  /* Expression: 3.6
                                        * Referenced by: '<S5>/m//s2kph'
                                        */
  real_T BatteryOverheatFaultSwitch_Value;/* Expression: 1
                                           * Referenced by: '<S13>/Battery Overheat Fault Switch'
                                           */
  real_T bms_t_coolant_Value;          /* Expression: 0
                                        * Referenced by: '<S5>/bms_t_coolant'
                                        */
  real_T BattTemp1_Value;              /* Expression: 65
                                        * Referenced by: '<S13>/BattTemp1'
                                        */
  real_T bms_ready_Value;              /* Expression: 1
                                        * Referenced by: '<S5>/bms_ready'
                                        */
  real_T bms_cpwr_cmd_Value;           /* Expression: 1
                                        * Referenced by: '<S5>/bms_cpwr_cmd'
                                        */
  real_T bms_cpwr_mon_Value;           /* Expression: 1
                                        * Referenced by: '<S5>/bms_cpwr_mon'
                                        */
  real_T bms_hvil_mon_Value;           /* Expression: 1
                                        * Referenced by: '<S5>/bms_hvil_mon'
                                        */
  real_T bms_mainc_stat_Value;         /* Expression: 1
                                        * Referenced by: '<S5>/bms_mainc_stat'
                                        */
  real_T bms_veh_mon_Value;            /* Expression: 0
                                        * Referenced by: '<S5>/bms_veh_mon'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 3
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 7
                                        * Referenced by: '<S5>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1000
                                        * Referenced by: '<S5>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: -3
                                        * Referenced by: '<S5>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 18
                                        * Referenced by: '<S5>/Constant9'
                                        */
  real_T DistanceObjValid_Value;       /* Expression: 0
                                        * Referenced by: '<S5>/DistanceObjValid'
                                        */
  real_T TimeGap_Value;                /* Expression: 3
                                        * Referenced by: '<S5>/TimeGap'
                                        */
  real_T GFDleakageFaultSwitch_Value;  /* Expression: 1
                                        * Referenced by: '<S13>/GFD leakage Fault Switch'
                                        */
  real_T HV_leakage_ena_Value;         /* Expression: 0
                                        * Referenced by: '<S5>/HV_leakage_ena'
                                        */
  real_T leakageEna_Value;             /* Expression: 1
                                        * Referenced by: '<S13>/leakageEna'
                                        */
  real_T A123Relay_Value;              /* Expression: 0
                                        * Referenced by: '<S6>/A123Relay'
                                        */
  real_T BMS12VRelay_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/BMS12VRelay'
                                        */
  real_T HVPumpRelay_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/HVPumpRelay'
                                        */
  real_T MCURelay_Value;               /* Expression: 0
                                        * Referenced by: '<S6>/MCURelay'
                                        */
  real_T mph2ms_Gain;                  /* Expression: 0.44704
                                        * Referenced by: '<S1>/mph2ms'
                                        */
  real_T DriveCycleStartStop_Value;    /* Expression: 1
                                        * Referenced by: '<S6>/Drive Cycle Start//Stop'
                                        */
  real_T CAVsCity_tableData[600];      /* Expression: [ 0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          0.7
                                          1.1
                                          1.7
                                          6
                                          13.9
                                          20.5
                                          25.7
                                          25
                                          28.4
                                          32.3
                                          34.6
                                          36.5
                                          38.4
                                          39.9
                                          42.2
                                          43.8
                                          44.2
                                          43.4
                                          42.6
                                          40.3
                                          39.2
                                          38.4
                                          38.4
                                          39.2
                                          38.8
                                          38.8
                                          36.5
                                          32.3
                                          27.6
                                          22.3
                                          17.3
                                          11.5
                                          5.8
                                          1.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.8
                                          9.2
                                          14.9
                                          18.2
                                          22.2
                                          27.2
                                          31.4
                                          33.8
                                          37.2
                                          40.8
                                          44
                                          46.3
                                          47.6
                                          49.5
                                          51.2
                                          53
                                          54.4
                                          55.6
                                          56.4
                                          56.1
                                          56.2
                                          55.8
                                          55.1
                                          54.4
                                          54.2
                                          54.4
                                          54.2
                                          53.5
                                          52.3
                                          52
                                          51.9
                                          51.8
                                          51.9
                                          52
                                          52.5
                                          53.4
                                          54.9
                                          56.8
                                          58.8
                                          60.6
                                          62.3
                                          64.2
                                          66.2
                                          67.8
                                          69.4
                                          70.4
                                          70.6
                                          70.7
                                          70.3
                                          68.2
                                          66.5
                                          64.9
                                          63.7
                                          62.5
                                          61
                                          59.3
                                          57.7
                                          56
                                          54.5
                                          52.8
                                          51.2
                                          49.5
                                          48
                                          46.3
                                          44
                                          41.1
                                          38.8
                                          37.7
                                          36.6
                                          35.3
                                          30
                                          24.4
                                          19.8
                                          15.5
                                          10.8
                                          6.3
                                          3.2
                                          2.1
                                          1.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          2.7
                                          9.2
                                          16.1
                                          22.7
                                          29.2
                                          34.2
                                          38.8
                                          43
                                          45.3
                                          46.8
                                          48
                                          49.5
                                          50.3
                                          51.5
                                          52.2
                                          52.6
                                          53
                                          53.8
                                          53.8
                                          53.8
                                          54.6
                                          56.3
                                          56.9
                                          58.1
                                          58.4
                                          59.6
                                          59.9
                                          60.2
                                          60.5
                                          59.7
                                          58.3
                                          58.1
                                          57.8
                                          57.3
                                          57.5
                                          56.6
                                          57
                                          56.6
                                          56.5
                                          56.2
                                          56.4
                                          56.6
                                          56.4
                                          56.1
                                          56
                                          55.9
                                          54.8
                                          54.2
                                          54.6
                                          52.2
                                          54.7
                                          55.7
                                          57
                                          58
                                          58.1
                                          59.4
                                          59.9
                                          61
                                          61.4
                                          61.9
                                          62.5
                                          62.5
                                          62.7
                                          62.2
                                          62.5
                                          63.1
                                          62.7
                                          62.8
                                          63
                                          64.1
                                          63.9
                                          64.1
                                          64.3
                                          64.5
                                          64.9
                                          65.3
                                          66
                                          66
                                          66.4
                                          64.1
                                          63.6
                                          63.9
                                          64.1
                                          63.7
                                          64.3
                                          64.2
                                          63.9
                                          64.2
                                          63.4
                                          64
                                          63.9
                                          64
                                          63.8
                                          64
                                          63.3
                                          63.4
                                          63.9
                                          64
                                          64.3
                                          64.8
                                          65.1
                                          64
                                          64.2
                                          63.1
                                          63.7
                                          63.1
                                          63.7
                                          63.5
                                          63
                                          63.1
                                          63
                                          63.3
                                          63.4
                                          63.3
                                          62.5
                                          62.5
                                          62.9
                                          62.8
                                          62.2
                                          62.4
                                          62.3
                                          62.3
                                          62.4
                                          62.1
                                          62.5
                                          62.8
                                          62.3
                                          62.3
                                          62.4
                                          61.9
                                          62.8
                                          62.8
                                          62.3
                                          62.8
                                          62.4
                                          62.1
                                          61.9
                                          61.8
                                          62.1
                                          62.1
                                          62.1
                                          62
                                          62.4
                                          62.2
                                          62.2
                                          62.4
                                          62.7
                                          62.6
                                          63.7
                                          64.3
                                          64.8
                                          65.1
                                          65.9
                                          66.1
                                          67
                                          67.2
                                          67.5
                                          68.3
                                          68.3
                                          68.8
                                          69.1
                                          69.4
                                          71.7
                                          72.1
                                          74.9
                                          72.6
                                          72.2
                                          72.2
                                          72
                                          72.5
                                          72.8
                                          72.7
                                          71.8
                                          71.4
                                          71.1
                                          71.1
                                          70.9
                                          71
                                          71
                                          71.2
                                          72.1
                                          72.6
                                          73.6
                                          74.8
                                          75.7
                                          77.3
                                          78.4
                                          79.3
                                          78.2
                                          76
                                          75.6
                                          76.4
                                          77.6
                                          78
                                          79.1
                                          79.5
                                          79.9
                                          79.9
                                          80.3
                                          80.3
                                          79.5
                                          79.5
                                          79.1
                                          78.7
                                          77.6
                                          76.5
                                          74.3
                                          72.6
                                          70.8
                                          67.6
                                          66.4
                                          66.7
                                          66.1
                                          65.9
                                          66.2
                                          66.1
                                          67.1
                                          67.4
                                          68.3
                                          68.3
                                          68.7
                                          68.2
                                          68.1
                                          68
                                          67.1
                                          66.4
                                          66.1
                                          65.7
                                          66
                                          66.4
                                          66
                                          66.3
                                          67
                                          67.5
                                          67.9
                                          68.1
                                          68.5
                                          68.9
                                          68.6
                                          69.4
                                          69.4
                                          69.4
                                          70
                                          70.4
                                          70.6
                                          70.9
                                          70.3
                                          70.6
                                          70.3
                                          69.7
                                          69.9
                                          70.1
                                          69.6
                                          69.3
                                          69.9
                                          69.7
                                          69.5
                                          69.9
                                          70.2
                                          70.2
                                          70.2
                                          71
                                          70.8
                                          70.9
                                          70.7
                                          70.9
                                          71.2
                                          71.3
                                          70.8
                                          71.2
                                          71.7
                                          71.9
                                          72.6
                                          72.3
                                          72.3
                                          72.1
                                          72
                                          71.9
                                          72.6
                                          72.8
                                          73.2
                                          72.1
                                          71.5
                                          70.9
                                          70.4
                                          70.5
                                          70.9
                                          70.2
                                          71
                                          70.2
                                          70.3
                                          69.1
                                          68.8
                                          68.2
                                          68.3
                                          68.2
                                          67.7
                                          67.3
                                          67.5
                                          67.6
                                          67.6
                                          67.2
                                          67
                                          66.3
                                          66.6
                                          66.2
                                          66.4
                                          65.9
                                          66.1
                                          65.5
                                          62.2
                                          62.2
                                          61.4
                                          61.1
                                          61.4
                                          61.1
                                          61.4
                                          61.4
                                          61.8
                                          61.8
                                          61.8
                                          61.8
                                          62.2
                                          61.8
                                          62.2
                                          62.6
                                          62.2
                                          62.6
                                          62.2
                                          62.6
                                          62.6
                                          63
                                          62.6
                                          62.2
                                          61.1
                                          59.5
                                          58.8
                                          56.8
                                          55.7
                                          54.1
                                          51.5
                                          49.2
                                          48.8
                                          47.6
                                          44.9
                                          41.5
                                          37.2
                                          34.6
                                          33
                                          29.2
                                          22.3
                                          17.7
                                          17.3
                                          14
                                          10
                                          6
                                          2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          4.4
                                          10.1
                                          15.6
                                          20.8
                                          25.1
                                          27.7
                                          28.2
                                          26.8
                                          24.8
                                          22.4
                                          17.1
                                          11.3
                                          6.9
                                          7.5
                                          11.1
                                          15.4
                                          19.9
                                          24.2
                                          27.1
                                          28.5
                                          28.2
                                          25.6
                                          21.7
                                          17.3
                                          12.1
                                          7.5
                                          5.8
                                          2.4
                                          1.2
                                          1.9
                                          6.7
                                          11.8
                                          16.8
                                          21.7
                                          25.9
                                          27.7
                                          28
                                          27.1
                                          24.4
                                          20.2
                                          15.2
                                          9.3
                                          5
                                          2.9
                                          2.4
                                          8.4
                                          13.5
                                          17.8
                                          22.2
                                          26.2
                                          30
                                          29.8
                                          26
                                          21.3
                                          16.2
                                          11.4
                                          6.6
                                          2.6
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.3
                                          6.4
                                          12.7
                                          19.2
                                          23.8
                                          28.2
                                          34.9
                                          37.5
                                          40.3
                                          45
                                          49.9
                                          51.6
                                          51.2
                                          50.6
                                          49.9
                                          47.8
                                          44.6
                                          41.2
                                          37.8
                                          33.4
                                          28
                                          23.7
                                          18.8
                                          12.9
                                          6.2
                                          2.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          ]
                                        * Referenced by: '<S6>/CAVs City'
                                        */
  real_T CAVsCity_bp01Data[600];       /* Expression: [1:600]
                                        * Referenced by: '<S6>/CAVs City'
                                        */
  real_T HWFET_tableData[765];         /* Expression: [0
                                          0
                                          2
                                          4.9
                                          8.1
                                          11.3
                                          14.5
                                          17.3
                                          19.6
                                          21.8
                                          24
                                          25.8
                                          27.1
                                          28
                                          29
                                          30
                                          30.7
                                          31.5
                                          32.2
                                          32.9
                                          33.5
                                          34.1
                                          34.6
                                          34.9
                                          35.1
                                          35.7
                                          35.9
                                          35.8
                                          35.3
                                          34.9
                                          34.5
                                          34.6
                                          34.8
                                          35.1
                                          35.7
                                          36.1
                                          36.2
                                          36.5
                                          36.7
                                          36.9
                                          37
                                          37
                                          37
                                          37
                                          37
                                          37
                                          37.1
                                          37.3
                                          37.8
                                          38.6
                                          39.3
                                          40
                                          40.7
                                          41.4
                                          42.2
                                          42.9
                                          43.5
                                          44
                                          44.3
                                          44.5
                                          44.8
                                          44.9
                                          45
                                          45.1
                                          45.4
                                          45.7
                                          46
                                          46.3
                                          46.5
                                          46.8
                                          46.9
                                          47
                                          47.1
                                          47.2
                                          47.3
                                          47.2
                                          47.1
                                          47
                                          46.9
                                          46.9
                                          46.9
                                          47
                                          47.1
                                          47.1
                                          47.2
                                          47.1
                                          47
                                          46.9
                                          46.5
                                          46.3
                                          46.2
                                          46.3
                                          46.5
                                          46.9
                                          47.1
                                          47.4
                                          47.7
                                          48
                                          48.2
                                          48.5
                                          48.8
                                          49.1
                                          49.2
                                          49.1
                                          49.1
                                          49
                                          49
                                          49.1
                                          49.2
                                          49.3
                                          49.4
                                          49.5
                                          49.5
                                          49.5
                                          49.4
                                          49.1
                                          48.9
                                          48.6
                                          48.4
                                          48.1
                                          47.7
                                          47.4
                                          47.3
                                          47.5
                                          47.8
                                          47.9
                                          48
                                          47.9
                                          47.9
                                          47.9
                                          48
                                          48
                                          48
                                          47.9
                                          47.3
                                          46
                                          43.3
                                          41.2
                                          39.5
                                          39.2
                                          39
                                          39
                                          39.1
                                          39.5
                                          40.1
                                          41
                                          42
                                          43.1
                                          43.7
                                          44.1
                                          44.3
                                          44.4
                                          44.6
                                          44.7
                                          44.9
                                          45.2
                                          45.7
                                          45.9
                                          46.3
                                          46.8
                                          46.9
                                          47
                                          47.1
                                          47.6
                                          47.9
                                          48
                                          48
                                          47.9
                                          47.8
                                          47.3
                                          46.7
                                          46.2
                                          45.9
                                          45.7
                                          45.5
                                          45.4
                                          45.3
                                          45
                                          44
                                          43.1
                                          42.2
                                          41.5
                                          41.5
                                          42.1
                                          42.9
                                          43.5
                                          43.9
                                          43.6
                                          43.3
                                          43
                                          43.1
                                          43.4
                                          43.9
                                          44.3
                                          44.6
                                          44.9
                                          44.8
                                          44.4
                                          43.9
                                          43.4
                                          43.2
                                          43.2
                                          43.1
                                          43
                                          43
                                          43.1
                                          43.4
                                          43.9
                                          44
                                          43.5
                                          42.6
                                          41.5
                                          40.7
                                          40
                                          40
                                          40.3
                                          41
                                          42
                                          42.7
                                          43.1
                                          43.2
                                          43.4
                                          43.9
                                          44.3
                                          44.7
                                          45.1
                                          45.4
                                          45.8
                                          46.5
                                          46.9
                                          47.2
                                          47.4
                                          47.3
                                          47.3
                                          47.2
                                          47.2
                                          47.2
                                          47.1
                                          47
                                          47
                                          46.9
                                          46.8
                                          46.9
                                          47
                                          47.2
                                          47.5
                                          47.9
                                          48
                                          48
                                          48
                                          48
                                          48
                                          48.1
                                          48.2
                                          48.2
                                          48.1
                                          48.6
                                          48.9
                                          49.1
                                          49.1
                                          49.1
                                          49.1
                                          49.1
                                          49
                                          48.9
                                          48.2
                                          47.7
                                          47.5
                                          47.2
                                          46.7
                                          46.2
                                          46
                                          45.8
                                          45.6
                                          45.4
                                          45.2
                                          45
                                          44.7
                                          44.5
                                          44.2
                                          43.5
                                          42.8
                                          42
                                          40.1
                                          38.6
                                          37.5
                                          35.8
                                          34.7
                                          34
                                          33.3
                                          32.5
                                          31.7
                                          30.6
                                          29.6
                                          28.8
                                          28.4
                                          28.6
                                          29.5
                                          31.4
                                          33.4
                                          35.6
                                          37.5
                                          39.1
                                          40.2
                                          41.1
                                          41.8
                                          42.4
                                          42.8
                                          43.3
                                          43.8
                                          44.3
                                          44.7
                                          45
                                          45.2
                                          45.4
                                          45.5
                                          45.8
                                          46
                                          46.1
                                          46.5
                                          46.8
                                          47.1
                                          47.7
                                          48.3
                                          49
                                          49.7
                                          50.3
                                          51
                                          51.7
                                          52.4
                                          53.1
                                          53.8
                                          54.5
                                          55.2
                                          55.8
                                          56.4
                                          56.9
                                          57
                                          57.1
                                          57.3
                                          57.6
                                          57.8
                                          58
                                          58.1
                                          58.4
                                          58.7
                                          58.8
                                          58.9
                                          59
                                          59
                                          58.9
                                          58.8
                                          58.6
                                          58.4
                                          58.2
                                          58.1
                                          58
                                          57.9
                                          57.6
                                          57.4
                                          57.2
                                          57.1
                                          57
                                          57
                                          56.9
                                          56.9
                                          56.9
                                          57
                                          57
                                          57
                                          57
                                          57
                                          57
                                          57
                                          57
                                          57
                                          56.9
                                          56.8
                                          56.5
                                          56.2
                                          56
                                          56
                                          56
                                          56.1
                                          56.4
                                          56.7
                                          56.9
                                          57.1
                                          57.3
                                          57.4
                                          57.4
                                          57.2
                                          57
                                          56.9
                                          56.6
                                          56.3
                                          56.1
                                          56.4
                                          56.7
                                          57.1
                                          57.5
                                          57.8
                                          58
                                          58
                                          58
                                          58
                                          58
                                          58
                                          57.9
                                          57.8
                                          57.7
                                          57.7
                                          57.8
                                          57.9
                                          58
                                          58.1
                                          58.4
                                          58.9
                                          59.1
                                          59.4
                                          59.8
                                          59.9
                                          59.9
                                          59.8
                                          59.6
                                          59.4
                                          59.2
                                          59.1
                                          59
                                          58.9
                                          58.7
                                          58.6
                                          58.5
                                          58.4
                                          58.4
                                          58.3
                                          58.2
                                          58.1
                                          58
                                          57.9
                                          57.9
                                          57.9
                                          57.9
                                          57.9
                                          58
                                          58.1
                                          58.1
                                          58.2
                                          58.2
                                          58.2
                                          58.1
                                          58
                                          58
                                          58
                                          58
                                          58
                                          58
                                          57.9
                                          57.9
                                          58
                                          58.1
                                          58.1
                                          58.2
                                          58.3
                                          58.3
                                          58.3
                                          58.2
                                          58.1
                                          58
                                          57.8
                                          57.5
                                          57.1
                                          57
                                          56.6
                                          56.1
                                          56
                                          55.8
                                          55.5
                                          55.2
                                          55.1
                                          55
                                          54.9
                                          54.9
                                          54.9
                                          54.9
                                          54.9
                                          54.9
                                          55
                                          55
                                          55
                                          55
                                          55
                                          55
                                          55.1
                                          55.1
                                          55
                                          54.9
                                          54.9
                                          54.8
                                          54.7
                                          54.6
                                          54.4
                                          54.3
                                          54.3
                                          54.2
                                          54.1
                                          54.1
                                          54.1
                                          54
                                          54
                                          54
                                          54
                                          54
                                          54
                                          54
                                          54
                                          54.1
                                          54.2
                                          54.5
                                          54.8
                                          54.9
                                          55
                                          55.1
                                          55.2
                                          55.2
                                          55.3
                                          55.4
                                          55.5
                                          55.6
                                          55.7
                                          55.8
                                          55.9
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          56
                                          55.9
                                          55.9
                                          55.9
                                          55.8
                                          55.6
                                          55.4
                                          55.2
                                          55.1
                                          55
                                          54.9
                                          54.6
                                          54.4
                                          54.2
                                          54.1
                                          53.8
                                          53.4
                                          53.3
                                          53.1
                                          52.9
                                          52.6
                                          52.4
                                          52.2
                                          52.1
                                          52
                                          52
                                          52
                                          52
                                          52.1
                                          52
                                          52
                                          51.9
                                          51.6
                                          51.4
                                          51.1
                                          50.7
                                          50.3
                                          49.8
                                          49.3
                                          48.7
                                          48.2
                                          48.1
                                          48
                                          48
                                          48.1
                                          48.4
                                          48.9
                                          49
                                          49.1
                                          49.1
                                          49
                                          49
                                          48.9
                                          48.6
                                          48.3
                                          48
                                          47.9
                                          47.8
                                          47.7
                                          47.9
                                          48.3
                                          49
                                          49.1
                                          49
                                          48.9
                                          48
                                          47.1
                                          46.2
                                          46.1
                                          46.1
                                          46.2
                                          46.9
                                          47.8
                                          49
                                          49.7
                                          50.6
                                          51.5
                                          52.2
                                          52.7
                                          53
                                          53.6
                                          54
                                          54.1
                                          54.4
                                          54.7
                                          55.1
                                          55.4
                                          55.4
                                          55
                                          54.5
                                          53.6
                                          52.5
                                          50.2
                                          48.2
                                          46.5
                                          46.2
                                          46
                                          46
                                          46.3
                                          46.8
                                          47.5
                                          48.2
                                          48.8
                                          49.5
                                          50.2
                                          50.7
                                          51.1
                                          51.7
                                          52.2
                                          52.5
                                          52.1
                                          51.6
                                          51.1
                                          51
                                          51
                                          51.1
                                          51.4
                                          51.7
                                          52
                                          52.2
                                          52.5
                                          52.8
                                          52.7
                                          52.6
                                          52.3
                                          52.3
                                          52.4
                                          52.5
                                          52.7
                                          52.7
                                          52.4
                                          52.1
                                          51.7
                                          51.1
                                          50.5
                                          50.1
                                          49.8
                                          49.7
                                          49.6
                                          49.5
                                          49.5
                                          49.7
                                          50
                                          50.2
                                          50.6
                                          51.1
                                          51.6
                                          51.9
                                          52
                                          52.1
                                          52.4
                                          52.9
                                          53.3
                                          53.7
                                          54.2
                                          54.5
                                          54.8
                                          55
                                          55.5
                                          55.9
                                          56.1
                                          56.3
                                          56.4
                                          56.5
                                          56.7
                                          56.9
                                          57
                                          57.3
                                          57.7
                                          58.2
                                          58.8
                                          59.1
                                          59.2
                                          59.1
                                          58.8
                                          58.5
                                          58.1
                                          57.7
                                          57.3
                                          57.1
                                          56.8
                                          56.5
                                          56.2
                                          55.5
                                          54.6
                                          54.1
                                          53.7
                                          53.2
                                          52.9
                                          52.5
                                          52
                                          51.3
                                          50.5
                                          49.5
                                          48.5
                                          47.6
                                          46.8
                                          45.6
                                          44.2
                                          42.5
                                          39.2
                                          35.9
                                          32.6
                                          29.3
                                          26.8
                                          24.5
                                          21.5
                                          19.5
                                          17.4
                                          15.1
                                          12.4
                                          9.7
                                          7
                                          5
                                          3.3
                                          2
                                          0.7
                                          0
                                          0
                                          0
                                          ]
                                        * Referenced by: '<S6>/HWFET'
                                        */
  real_T HWFET_bp01Data[765];          /* Expression: [1:765]
                                        * Referenced by: '<S6>/HWFET'
                                        */
  real_T UDDS_tableData[1369];         /* Expression: [ 0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          3
                                          5.9
                                          8.6
                                          11.5
                                          14.3
                                          16.9
                                          17.3
                                          18.1
                                          20.7
                                          21.7
                                          22.4
                                          22.5
                                          22.1
                                          21.5
                                          20.9
                                          20.4
                                          19.8
                                          17
                                          14.9
                                          14.9
                                          15.2
                                          15.5
                                          16
                                          17.1
                                          19.1
                                          21.1
                                          22.7
                                          22.9
                                          22.7
                                          22.6
                                          21.3
                                          19
                                          17.1
                                          15.8
                                          15.8
                                          17.7
                                          19.8
                                          21.6
                                          23.2
                                          24.2
                                          24.6
                                          24.9
                                          25
                                          24.6
                                          24.5
                                          24.7
                                          24.8
                                          24.7
                                          24.6
                                          24.6
                                          25.1
                                          25.6
                                          25.7
                                          25.4
                                          24.9
                                          25
                                          25.4
                                          26
                                          26
                                          25.7
                                          26.1
                                          26.7
                                          27.5
                                          28.6
                                          29.3
                                          29.8
                                          30.1
                                          30.4
                                          30.7
                                          30.7
                                          30.5
                                          30.4
                                          30.3
                                          30.4
                                          30.8
                                          30.4
                                          29.9
                                          29.5
                                          29.8
                                          30.3
                                          30.7
                                          30.9
                                          31
                                          30.9
                                          30.4
                                          29.8
                                          29.9
                                          30.2
                                          30.7
                                          31.2
                                          31.8
                                          32.2
                                          32.4
                                          32.2
                                          31.7
                                          28.6
                                          25.3
                                          22
                                          18.7
                                          15.4
                                          12.1
                                          8.8
                                          5.5
                                          2.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          3.3
                                          6.6
                                          9.9
                                          13.2
                                          16.5
                                          19.8
                                          22.2
                                          24.3
                                          25.8
                                          26.4
                                          25.7
                                          25.1
                                          24.7
                                          25
                                          25.2
                                          25.4
                                          25.8
                                          27.2
                                          26.5
                                          24
                                          22.7
                                          19.4
                                          17.7
                                          17.2
                                          18.1
                                          18.6
                                          20
                                          22.2
                                          24.5
                                          27.3
                                          30.5
                                          33.5
                                          36.2
                                          37.3
                                          39.3
                                          40.5
                                          42.1
                                          43.5
                                          45.1
                                          46
                                          46.8
                                          47.5
                                          47.5
                                          47.3
                                          47.2
                                          47
                                          47
                                          47
                                          47
                                          47
                                          47.2
                                          47.4
                                          47.9
                                          48.5
                                          49.1
                                          49.5
                                          50
                                          50.6
                                          51
                                          51.5
                                          52.2
                                          53.2
                                          54.1
                                          54.6
                                          54.9
                                          55
                                          54.9
                                          54.6
                                          54.6
                                          54.8
                                          55.1
                                          55.5
                                          55.7
                                          56.1
                                          56.3
                                          56.6
                                          56.7
                                          56.7
                                          56.5
                                          56.5
                                          56.5
                                          56.5
                                          56.5
                                          56.5
                                          56.4
                                          56.1
                                          55.8
                                          55.1
                                          54.6
                                          54.2
                                          54
                                          53.7
                                          53.6
                                          53.9
                                          54
                                          54.1
                                          54.1
                                          53.8
                                          53.4
                                          53
                                          52.6
                                          52.1
                                          52.4
                                          52
                                          51.9
                                          51.7
                                          51.5
                                          51.6
                                          51.8
                                          52.1
                                          52.5
                                          53
                                          53.5
                                          54
                                          54.9
                                          55.4
                                          55.6
                                          56
                                          56
                                          55.8
                                          55.2
                                          54.5
                                          53.6
                                          52.5
                                          51.5
                                          51.5
                                          51.5
                                          51.1
                                          50.1
                                          50
                                          50.1
                                          50
                                          49.6
                                          49.5
                                          49.5
                                          49.5
                                          49.1
                                          48.6
                                          48.1
                                          47.2
                                          46.1
                                          45
                                          43.8
                                          42.6
                                          41.5
                                          40.3
                                          38.5
                                          37
                                          35.2
                                          33.8
                                          32.5
                                          31.5
                                          30.6
                                          30.5
                                          30
                                          29
                                          27.5
                                          24.8
                                          21.5
                                          20.1
                                          19.1
                                          18.5
                                          17
                                          15.5
                                          12.5
                                          10.8
                                          8
                                          4.7
                                          1.4
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          1
                                          4.3
                                          7.6
                                          10.9
                                          14.2
                                          17.3
                                          20
                                          22.5
                                          23.7
                                          25.2
                                          26.6
                                          28.1
                                          30
                                          30.8
                                          31.6
                                          32.1
                                          32.8
                                          33.6
                                          34.5
                                          34.6
                                          34.9
                                          34.8
                                          34.5
                                          34.7
                                          35.5
                                          36
                                          36
                                          36
                                          36
                                          36
                                          36
                                          36.1
                                          36.4
                                          36.5
                                          36.4
                                          36
                                          35.1
                                          34.1
                                          33.5
                                          31.4
                                          29
                                          25.7
                                          23
                                          20.3
                                          17.5
                                          14.5
                                          12
                                          8.7
                                          5.4
                                          2.1
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          2.6
                                          5.9
                                          9.2
                                          12.5
                                          15.8
                                          19.1
                                          22.4
                                          25
                                          25.6
                                          27.5
                                          29
                                          30
                                          30.1
                                          30
                                          29.7
                                          29.3
                                          28.8
                                          28
                                          25
                                          21.7
                                          18.4
                                          15.1
                                          11.8
                                          8.5
                                          5.2
                                          1.9
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          3.3
                                          6.6
                                          9.9
                                          13.2
                                          16.5
                                          19.8
                                          23.1
                                          26.4
                                          27.8
                                          29.1
                                          31.5
                                          33
                                          33.6
                                          34.8
                                          35.1
                                          35.6
                                          36.1
                                          36
                                          36.1
                                          36.2
                                          36
                                          35.7
                                          36
                                          36
                                          35.6
                                          35.5
                                          35.4
                                          35.2
                                          35.2
                                          35.2
                                          35.2
                                          35.2
                                          35.2
                                          35
                                          35.1
                                          35.2
                                          35.5
                                          35.2
                                          35
                                          35
                                          35
                                          34.8
                                          34.6
                                          34.5
                                          33.5
                                          32
                                          30.1
                                          28
                                          25.5
                                          22.5
                                          19.8
                                          16.5
                                          13.2
                                          10.3
                                          7.2
                                          4
                                          1
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          1.2
                                          3.5
                                          5.5
                                          6.5
                                          8.5
                                          9.6
                                          10.5
                                          11.9
                                          14
                                          16
                                          17.7
                                          19
                                          20.1
                                          21
                                          22
                                          23
                                          23.8
                                          24.5
                                          24.9
                                          25
                                          25
                                          25
                                          25
                                          25
                                          25
                                          25.6
                                          25.8
                                          26
                                          25.6
                                          25.2
                                          25
                                          25
                                          25
                                          24.4
                                          23.1
                                          19.8
                                          16.5
                                          13.2
                                          9.9
                                          6.6
                                          3.3
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          3.3
                                          6.6
                                          9.9
                                          13
                                          14.6
                                          16
                                          17
                                          17
                                          17
                                          17.5
                                          17.7
                                          17.7
                                          17.5
                                          17
                                          16.9
                                          16.6
                                          17
                                          17.1
                                          17
                                          16.6
                                          16.5
                                          16.5
                                          16.6
                                          17
                                          17.6
                                          18.5
                                          19.2
                                          20.2
                                          21
                                          21.1
                                          21.2
                                          21.6
                                          22
                                          22.4
                                          22.5
                                          22.5
                                          22.5
                                          22.7
                                          23.7
                                          25.1
                                          26
                                          26.5
                                          27
                                          26.1
                                          22.8
                                          19.5
                                          16.2
                                          12.9
                                          9.6
                                          6.3
                                          3
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          2
                                          4.5
                                          7.8
                                          10.2
                                          12.5
                                          14
                                          15.3
                                          17.5
                                          19.6
                                          21
                                          22.2
                                          23.3
                                          24.5
                                          25.3
                                          25.6
                                          26
                                          26.1
                                          26.2
                                          26.2
                                          26.4
                                          26.5
                                          26.5
                                          26
                                          25.5
                                          23.6
                                          21.4
                                          18.5
                                          16.4
                                          14.5
                                          11.6
                                          8.7
                                          5.8
                                          3.5
                                          2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          1.4
                                          3.3
                                          4.4
                                          6.5
                                          9.2
                                          11.3
                                          13.5
                                          14.6
                                          16.4
                                          16.7
                                          16.5
                                          16.5
                                          18.2
                                          19.2
                                          20.1
                                          21.5
                                          22.5
                                          22.5
                                          22.1
                                          22.7
                                          23.3
                                          23.5
                                          22.5
                                          21.6
                                          20.5
                                          18
                                          15
                                          12
                                          9
                                          6.2
                                          4.5
                                          3
                                          2.1
                                          0.5
                                          0.5
                                          3.2
                                          6.5
                                          9.6
                                          12.5
                                          14
                                          16
                                          18
                                          19.6
                                          21.5
                                          23.1
                                          24.5
                                          25.5
                                          26.5
                                          27.1
                                          27.6
                                          27.9
                                          28.3
                                          28.6
                                          28.6
                                          28.3
                                          28.2
                                          28
                                          27.5
                                          26.8
                                          25.5
                                          23.5
                                          21.5
                                          19
                                          16.5
                                          14.9
                                          12.5
                                          9.4
                                          6.2
                                          3
                                          1.5
                                          1.5
                                          0.5
                                          0
                                          3
                                          6.3
                                          9.6
                                          12.9
                                          15.8
                                          17.5
                                          18.4
                                          19.5
                                          20.7
                                          22
                                          23.2
                                          25
                                          26.5
                                          27.5
                                          28
                                          28.3
                                          28.9
                                          28.9
                                          28.9
                                          28.8
                                          28.5
                                          28.3
                                          28.3
                                          28.3
                                          28.2
                                          27.6
                                          27.5
                                          27.5
                                          27.5
                                          27.5
                                          27.5
                                          27.5
                                          27.6
                                          28
                                          28.5
                                          30
                                          31
                                          32
                                          33
                                          33
                                          33.6
                                          34
                                          34.3
                                          34.2
                                          34
                                          34
                                          33.9
                                          33.6
                                          33.1
                                          33
                                          32.5
                                          32
                                          31.9
                                          31.6
                                          31.5
                                          30.6
                                          30
                                          29.9
                                          29.9
                                          29.9
                                          29.9
                                          29.6
                                          29.5
                                          29.5
                                          29.3
                                          28.9
                                          28.2
                                          27.7
                                          27
                                          25.5
                                          23.7
                                          22
                                          20.5
                                          19.2
                                          19.2
                                          20.1
                                          20.9
                                          21.4
                                          22
                                          22.6
                                          23.2
                                          24
                                          25
                                          26
                                          26.6
                                          26.6
                                          26.8
                                          27
                                          27.2
                                          27.8
                                          28.1
                                          28.8
                                          28.9
                                          29
                                          29.1
                                          29
                                          28.1
                                          27.5
                                          27
                                          25.8
                                          25
                                          24.5
                                          24.8
                                          25.1
                                          25.5
                                          25.7
                                          26.2
                                          26.9
                                          27.5
                                          27.8
                                          28.4
                                          29
                                          29.2
                                          29.1
                                          29
                                          28.9
                                          28.5
                                          28.1
                                          28
                                          28
                                          27.6
                                          27.2
                                          26.6
                                          27
                                          27.5
                                          27.8
                                          28
                                          27.8
                                          28
                                          28
                                          28
                                          27.7
                                          27.4
                                          26.9
                                          26.6
                                          26.5
                                          26.5
                                          26.5
                                          26.3
                                          26.2
                                          26.2
                                          25.9
                                          25.6
                                          25.6
                                          25.9
                                          25.8
                                          25.5
                                          24.6
                                          23.5
                                          22.2
                                          21.6
                                          21.6
                                          21.7
                                          22.6
                                          23.4
                                          24
                                          24.2
                                          24.4
                                          24.9
                                          25.1
                                          25.2
                                          25.3
                                          25.5
                                          25.2
                                          25
                                          25
                                          25
                                          24.7
                                          24.5
                                          24.3
                                          24.3
                                          24.5
                                          25
                                          25
                                          24.6
                                          24.6
                                          24.1
                                          24.5
                                          25.1
                                          25.6
                                          25.1
                                          24
                                          22
                                          20.1
                                          16.9
                                          13.6
                                          10.3
                                          7
                                          3.7
                                          0.4
                                          0
                                          0
                                          0
                                          2
                                          5.3
                                          8.6
                                          11.9
                                          15.2
                                          17.5
                                          18.6
                                          20
                                          21.1
                                          22
                                          23
                                          24.5
                                          26.3
                                          27.5
                                          28.1
                                          28.4
                                          28.5
                                          28.5
                                          28.5
                                          27.7
                                          27.5
                                          27.2
                                          26.8
                                          26.5
                                          26
                                          25.7
                                          25.2
                                          24
                                          22
                                          21.5
                                          21.5
                                          21.8
                                          22.5
                                          23
                                          22.8
                                          22.8
                                          23
                                          22.7
                                          22.7
                                          22.7
                                          23.5
                                          24
                                          24.6
                                          24.8
                                          25.1
                                          25.5
                                          25.6
                                          25.5
                                          25
                                          24.1
                                          23.7
                                          23.2
                                          22.9
                                          22.5
                                          22
                                          21.6
                                          20.5
                                          17.5
                                          14.2
                                          10.9
                                          7.6
                                          4.3
                                          1
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          1.2
                                          4
                                          7.3
                                          10.6
                                          13.9
                                          17
                                          18.5
                                          20
                                          21.8
                                          23
                                          24
                                          24.8
                                          25.6
                                          26.5
                                          26.8
                                          27.4
                                          27.9
                                          28.3
                                          28
                                          27.5
                                          27
                                          27
                                          26.3
                                          24.5
                                          22.5
                                          21.5
                                          20.6
                                          18
                                          15
                                          12.3
                                          11.1
                                          10.6
                                          10
                                          9.5
                                          9.1
                                          8.7
                                          8.6
                                          8.8
                                          9
                                          8.7
                                          8.6
                                          8
                                          7
                                          5
                                          4.2
                                          2.6
                                          1
                                          0
                                          0.1
                                          0.6
                                          1.6
                                          3.6
                                          6.9
                                          10
                                          12.8
                                          14
                                          14.5
                                          16
                                          18.1
                                          20
                                          21
                                          21.2
                                          21.3
                                          21.4
                                          21.7
                                          22.5
                                          23
                                          23.8
                                          24.5
                                          25
                                          24.9
                                          24.8
                                          25
                                          25.4
                                          25.8
                                          26
                                          26.4
                                          26.6
                                          26.9
                                          27
                                          27
                                          27
                                          26.9
                                          26.8
                                          26.8
                                          26.5
                                          26.4
                                          26
                                          25.5
                                          24.6
                                          23.5
                                          21.5
                                          20
                                          17.5
                                          16
                                          14
                                          10.7
                                          7.4
                                          4.1
                                          0.8
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          2.1
                                          5.4
                                          8.7
                                          12
                                          15.3
                                          18.6
                                          21.1
                                          23
                                          23.5
                                          23
                                          22.5
                                          20
                                          16.7
                                          13.4
                                          10.1
                                          6.8
                                          3.5
                                          0.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          1.5
                                          3.5
                                          6.5
                                          9.8
                                          12
                                          12.9
                                          13
                                          12.6
                                          12.8
                                          13.1
                                          13.1
                                          14
                                          15.5
                                          17
                                          18.6
                                          19.7
                                          21
                                          21.5
                                          21.8
                                          21.8
                                          21.5
                                          21.2
                                          21.5
                                          21.8
                                          22
                                          21.9
                                          21.7
                                          21.5
                                          21.5
                                          21.4
                                          20.1
                                          19.5
                                          19.2
                                          19.6
                                          19.8
                                          20
                                          19.5
                                          17.5
                                          15.5
                                          13
                                          10
                                          8
                                          6
                                          4
                                          2.5
                                          0.7
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          1
                                          1
                                          1
                                          1
                                          1
                                          1.6
                                          3
                                          4
                                          5
                                          6.3
                                          8
                                          10
                                          10.5
                                          9.5
                                          8.5
                                          7.6
                                          8.8
                                          11
                                          14
                                          17
                                          19.5
                                          21
                                          21.8
                                          22.2
                                          23
                                          23.6
                                          24.1
                                          24.5
                                          24.5
                                          24
                                          23.5
                                          23.5
                                          23.5
                                          23.5
                                          23.5
                                          23.5
                                          24
                                          24.1
                                          24.5
                                          24.7
                                          25
                                          25.4
                                          25.6
                                          25.7
                                          26
                                          26.2
                                          27
                                          27.8
                                          28.3
                                          29
                                          29.1
                                          29
                                          28
                                          24.7
                                          21.4
                                          18.1
                                          14.8
                                          11.5
                                          8.2
                                          4.9
                                          1.6
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          1.5
                                          4.8
                                          8.1
                                          11.4
                                          13.2
                                          15.1
                                          16.8
                                          18.3
                                          19.5
                                          20.3
                                          21.3
                                          21.9
                                          22.1
                                          22.4
                                          22
                                          21.6
                                          21.1
                                          20.5
                                          20
                                          19.6
                                          18.5
                                          17.5
                                          16.5
                                          15.5
                                          14
                                          11
                                          8
                                          5.2
                                          2.5
                                          0
                                          0
                                          0
                                          ]
                                        * Referenced by: '<S6>/UDDS'
                                        */
  real_T UDDS_bp01Data[1369];          /* Expression: [1:1369]
                                        * Referenced by: '<S6>/UDDS'
                                        */
  real_T USO6_tableData[600];          /* Expression: [ 0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          0.7
                                          1.1
                                          1.7
                                          6
                                          13.9
                                          20.5
                                          25.7
                                          25
                                          28.4
                                          32.3
                                          34.6
                                          36.5
                                          38.4
                                          39.9
                                          42.2
                                          43.8
                                          44.2
                                          43.4
                                          42.6
                                          40.3
                                          39.2
                                          38.4
                                          38.4
                                          39.2
                                          38.8
                                          38.8
                                          36.5
                                          32.3
                                          27.6
                                          22.3
                                          17.3
                                          11.5
                                          5.8
                                          1.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.8
                                          9.2
                                          14.9
                                          18.2
                                          22.2
                                          27.2
                                          31.4
                                          33.8
                                          37.2
                                          40.8
                                          44
                                          46.3
                                          47.6
                                          49.5
                                          51.2
                                          53
                                          54.4
                                          55.6
                                          56.4
                                          56.1
                                          56.2
                                          55.8
                                          55.1
                                          54.4
                                          54.2
                                          54.4
                                          54.2
                                          53.5
                                          52.3
                                          52
                                          51.9
                                          51.8
                                          51.9
                                          52
                                          52.5
                                          53.4
                                          54.9
                                          56.8
                                          58.8
                                          60.6
                                          62.3
                                          64.2
                                          66.2
                                          67.8
                                          69.4
                                          70.4
                                          70.6
                                          70.7
                                          70.3
                                          68.2
                                          66.5
                                          64.9
                                          63.7
                                          62.5
                                          61
                                          59.3
                                          57.7
                                          56
                                          54.5
                                          52.8
                                          51.2
                                          49.5
                                          48
                                          46.3
                                          44
                                          41.1
                                          38.8
                                          37.7
                                          36.6
                                          35.3
                                          30
                                          24.4
                                          19.8
                                          15.5
                                          10.8
                                          6.3
                                          3.2
                                          2.1
                                          1.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          2.7
                                          9.2
                                          16.1
                                          22.7
                                          29.2
                                          34.2
                                          38.8
                                          43
                                          45.3
                                          46.8
                                          48
                                          49.5
                                          50.3
                                          51.5
                                          52.2
                                          52.6
                                          53
                                          53.8
                                          53.8
                                          53.8
                                          54.6
                                          56.3
                                          56.9
                                          58.1
                                          58.4
                                          59.6
                                          59.9
                                          60.2
                                          60.5
                                          59.7
                                          58.3
                                          58.1
                                          57.8
                                          57.3
                                          57.5
                                          56.6
                                          57
                                          56.6
                                          56.5
                                          56.2
                                          56.4
                                          56.6
                                          56.4
                                          56.1
                                          56
                                          55.9
                                          54.8
                                          54.2
                                          54.6
                                          52.2
                                          54.7
                                          55.7
                                          57
                                          58
                                          58.1
                                          59.4
                                          59.9
                                          61
                                          61.4
                                          61.9
                                          62.5
                                          62.5
                                          62.7
                                          62.2
                                          62.5
                                          63.1
                                          62.7
                                          62.8
                                          63
                                          64.1
                                          63.9
                                          64.1
                                          64.3
                                          64.5
                                          64.9
                                          65.3
                                          66
                                          66
                                          66.4
                                          64.1
                                          63.6
                                          63.9
                                          64.1
                                          63.7
                                          64.3
                                          64.2
                                          63.9
                                          64.2
                                          63.4
                                          64
                                          63.9
                                          64
                                          63.8
                                          64
                                          63.3
                                          63.4
                                          63.9
                                          64
                                          64.3
                                          64.8
                                          65.1
                                          64
                                          64.2
                                          63.1
                                          63.7
                                          63.1
                                          63.7
                                          63.5
                                          63
                                          63.1
                                          63
                                          63.3
                                          63.4
                                          63.3
                                          62.5
                                          62.5
                                          62.9
                                          62.8
                                          62.2
                                          62.4
                                          62.3
                                          62.3
                                          62.4
                                          62.1
                                          62.5
                                          62.8
                                          62.3
                                          62.3
                                          62.4
                                          61.9
                                          62.8
                                          62.8
                                          62.3
                                          62.8
                                          62.4
                                          62.1
                                          61.9
                                          61.8
                                          62.1
                                          62.1
                                          62.1
                                          62
                                          62.4
                                          62.2
                                          62.2
                                          62.4
                                          62.7
                                          62.6
                                          63.7
                                          64.3
                                          64.8
                                          65.1
                                          65.9
                                          66.1
                                          67
                                          67.2
                                          67.5
                                          68.3
                                          68.3
                                          68.8
                                          69.1
                                          69.4
                                          71.7
                                          72.1
                                          74.9
                                          72.6
                                          72.2
                                          72.2
                                          72
                                          72.5
                                          72.8
                                          72.7
                                          71.8
                                          71.4
                                          71.1
                                          71.1
                                          70.9
                                          71
                                          71
                                          71.2
                                          72.1
                                          72.6
                                          73.6
                                          74.8
                                          75.7
                                          77.3
                                          78.4
                                          79.3
                                          78.2
                                          76
                                          75.6
                                          76.4
                                          77.6
                                          78
                                          79.1
                                          79.5
                                          79.9
                                          79.9
                                          80.3
                                          80.3
                                          79.5
                                          79.5
                                          79.1
                                          78.7
                                          77.6
                                          76.5
                                          74.3
                                          72.6
                                          70.8
                                          67.6
                                          66.4
                                          66.7
                                          66.1
                                          65.9
                                          66.2
                                          66.1
                                          67.1
                                          67.4
                                          68.3
                                          68.3
                                          68.7
                                          68.2
                                          68.1
                                          68
                                          67.1
                                          66.4
                                          66.1
                                          65.7
                                          66
                                          66.4
                                          66
                                          66.3
                                          67
                                          67.5
                                          67.9
                                          68.1
                                          68.5
                                          68.9
                                          68.6
                                          69.4
                                          69.4
                                          69.4
                                          70
                                          70.4
                                          70.6
                                          70.9
                                          70.3
                                          70.6
                                          70.3
                                          69.7
                                          69.9
                                          70.1
                                          69.6
                                          69.3
                                          69.9
                                          69.7
                                          69.5
                                          69.9
                                          70.2
                                          70.2
                                          70.2
                                          71
                                          70.8
                                          70.9
                                          70.7
                                          70.9
                                          71.2
                                          71.3
                                          70.8
                                          71.2
                                          71.7
                                          71.9
                                          72.6
                                          72.3
                                          72.3
                                          72.1
                                          72
                                          71.9
                                          72.6
                                          72.8
                                          73.2
                                          72.1
                                          71.5
                                          70.9
                                          70.4
                                          70.5
                                          70.9
                                          70.2
                                          71
                                          70.2
                                          70.3
                                          69.1
                                          68.8
                                          68.2
                                          68.3
                                          68.2
                                          67.7
                                          67.3
                                          67.5
                                          67.6
                                          67.6
                                          67.2
                                          67
                                          66.3
                                          66.6
                                          66.2
                                          66.4
                                          65.9
                                          66.1
                                          65.5
                                          62.2
                                          62.2
                                          61.4
                                          61.1
                                          61.4
                                          61.1
                                          61.4
                                          61.4
                                          61.8
                                          61.8
                                          61.8
                                          61.8
                                          62.2
                                          61.8
                                          62.2
                                          62.6
                                          62.2
                                          62.6
                                          62.2
                                          62.6
                                          62.6
                                          63
                                          62.6
                                          62.2
                                          61.1
                                          59.5
                                          58.8
                                          56.8
                                          55.7
                                          54.1
                                          51.5
                                          49.2
                                          48.8
                                          47.6
                                          44.9
                                          41.5
                                          37.2
                                          34.6
                                          33
                                          29.2
                                          22.3
                                          17.7
                                          17.3
                                          14
                                          10
                                          6
                                          2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          4.4
                                          10.1
                                          15.6
                                          20.8
                                          25.1
                                          27.7
                                          28.2
                                          26.8
                                          24.8
                                          22.4
                                          17.1
                                          11.3
                                          6.9
                                          7.5
                                          11.1
                                          15.4
                                          19.9
                                          24.2
                                          27.1
                                          28.5
                                          28.2
                                          25.6
                                          21.7
                                          17.3
                                          12.1
                                          7.5
                                          5.8
                                          2.4
                                          1.2
                                          1.9
                                          6.7
                                          11.8
                                          16.8
                                          21.7
                                          25.9
                                          27.7
                                          28
                                          27.1
                                          24.4
                                          20.2
                                          15.2
                                          9.3
                                          5
                                          2.9
                                          2.4
                                          8.4
                                          13.5
                                          17.8
                                          22.2
                                          26.2
                                          30
                                          29.8
                                          26
                                          21.3
                                          16.2
                                          11.4
                                          6.6
                                          2.6
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.3
                                          6.4
                                          12.7
                                          19.2
                                          23.8
                                          28.2
                                          34.9
                                          37.5
                                          40.3
                                          45
                                          49.9
                                          51.6
                                          51.2
                                          50.6
                                          49.9
                                          47.8
                                          44.6
                                          41.2
                                          37.8
                                          33.4
                                          28
                                          23.7
                                          18.8
                                          12.9
                                          6.2
                                          2.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          ]
                                        * Referenced by: '<S6>/USO6'
                                        */
  real_T USO6_bp01Data[600];           /* Expression: [1:600]
                                        * Referenced by: '<S6>/USO6'
                                        */
  real_T UTCycle_tableData[600];       /* Expression: [ 0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          0.7
                                          1.1
                                          1.7
                                          6
                                          13.9
                                          20.5
                                          25.7
                                          25
                                          28.4
                                          32.3
                                          34.6
                                          36.5
                                          38.4
                                          39.9
                                          42.2
                                          43.8
                                          44.2
                                          43.4
                                          42.6
                                          40.3
                                          39.2
                                          38.4
                                          38.4
                                          39.2
                                          38.8
                                          38.8
                                          36.5
                                          32.3
                                          27.6
                                          22.3
                                          17.3
                                          11.5
                                          5.8
                                          1.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.8
                                          9.2
                                          14.9
                                          18.2
                                          22.2
                                          27.2
                                          31.4
                                          33.8
                                          37.2
                                          40.8
                                          44
                                          46.3
                                          47.6
                                          49.5
                                          51.2
                                          53
                                          54.4
                                          55.6
                                          56.4
                                          56.1
                                          56.2
                                          55.8
                                          55.1
                                          54.4
                                          54.2
                                          54.4
                                          54.2
                                          53.5
                                          52.3
                                          52
                                          51.9
                                          51.8
                                          51.9
                                          52
                                          52.5
                                          53.4
                                          54.9
                                          56.8
                                          58.8
                                          60.6
                                          62.3
                                          64.2
                                          66.2
                                          67.8
                                          69.4
                                          70.4
                                          70.6
                                          70.7
                                          70.3
                                          68.2
                                          66.5
                                          64.9
                                          63.7
                                          62.5
                                          61
                                          59.3
                                          57.7
                                          56
                                          54.5
                                          52.8
                                          51.2
                                          49.5
                                          48
                                          46.3
                                          44
                                          41.1
                                          38.8
                                          37.7
                                          36.6
                                          35.3
                                          30
                                          24.4
                                          19.8
                                          15.5
                                          10.8
                                          6.3
                                          3.2
                                          2.1
                                          1.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          2.7
                                          9.2
                                          16.1
                                          22.7
                                          29.2
                                          34.2
                                          38.8
                                          43
                                          45.3
                                          46.8
                                          48
                                          49.5
                                          50.3
                                          51.5
                                          52.2
                                          52.6
                                          53
                                          53.8
                                          53.8
                                          53.8
                                          54.6
                                          56.3
                                          56.9
                                          58.1
                                          58.4
                                          59.6
                                          59.9
                                          60.2
                                          60.5
                                          59.7
                                          58.3
                                          58.1
                                          57.8
                                          57.3
                                          57.5
                                          56.6
                                          57
                                          56.6
                                          56.5
                                          56.2
                                          56.4
                                          56.6
                                          56.4
                                          56.1
                                          56
                                          55.9
                                          54.8
                                          54.2
                                          54.6
                                          52.2
                                          54.7
                                          55.7
                                          57
                                          58
                                          58.1
                                          59.4
                                          59.9
                                          61
                                          61.4
                                          61.9
                                          62.5
                                          62.5
                                          62.7
                                          62.2
                                          62.5
                                          63.1
                                          62.7
                                          62.8
                                          63
                                          64.1
                                          63.9
                                          64.1
                                          64.3
                                          64.5
                                          64.9
                                          65.3
                                          66
                                          66
                                          66.4
                                          64.1
                                          63.6
                                          63.9
                                          64.1
                                          63.7
                                          64.3
                                          64.2
                                          63.9
                                          64.2
                                          63.4
                                          64
                                          63.9
                                          64
                                          63.8
                                          64
                                          63.3
                                          63.4
                                          63.9
                                          64
                                          64.3
                                          64.8
                                          65.1
                                          64
                                          64.2
                                          63.1
                                          63.7
                                          63.1
                                          63.7
                                          63.5
                                          63
                                          63.1
                                          63
                                          63.3
                                          63.4
                                          63.3
                                          62.5
                                          62.5
                                          62.9
                                          62.8
                                          62.2
                                          62.4
                                          62.3
                                          62.3
                                          62.4
                                          62.1
                                          62.5
                                          62.8
                                          62.3
                                          62.3
                                          62.4
                                          61.9
                                          62.8
                                          62.8
                                          62.3
                                          62.8
                                          62.4
                                          62.1
                                          61.9
                                          61.8
                                          62.1
                                          62.1
                                          62.1
                                          62
                                          62.4
                                          62.2
                                          62.2
                                          62.4
                                          62.7
                                          62.6
                                          63.7
                                          64.3
                                          64.8
                                          65.1
                                          65.9
                                          66.1
                                          67
                                          67.2
                                          67.5
                                          68.3
                                          68.3
                                          68.8
                                          69.1
                                          69.4
                                          71.7
                                          72.1
                                          74.9
                                          72.6
                                          72.2
                                          72.2
                                          72
                                          72.5
                                          72.8
                                          72.7
                                          71.8
                                          71.4
                                          71.1
                                          71.1
                                          70.9
                                          71
                                          71
                                          71.2
                                          72.1
                                          72.6
                                          73.6
                                          74.8
                                          75.7
                                          77.3
                                          78.4
                                          79.3
                                          78.2
                                          76
                                          75.6
                                          76.4
                                          77.6
                                          78
                                          79.1
                                          79.5
                                          79.9
                                          79.9
                                          80.3
                                          80.3
                                          79.5
                                          79.5
                                          79.1
                                          78.7
                                          77.6
                                          76.5
                                          74.3
                                          72.6
                                          70.8
                                          67.6
                                          66.4
                                          66.7
                                          66.1
                                          65.9
                                          66.2
                                          66.1
                                          67.1
                                          67.4
                                          68.3
                                          68.3
                                          68.7
                                          68.2
                                          68.1
                                          68
                                          67.1
                                          66.4
                                          66.1
                                          65.7
                                          66
                                          66.4
                                          66
                                          66.3
                                          67
                                          67.5
                                          67.9
                                          68.1
                                          68.5
                                          68.9
                                          68.6
                                          69.4
                                          69.4
                                          69.4
                                          70
                                          70.4
                                          70.6
                                          70.9
                                          70.3
                                          70.6
                                          70.3
                                          69.7
                                          69.9
                                          70.1
                                          69.6
                                          69.3
                                          69.9
                                          69.7
                                          69.5
                                          69.9
                                          70.2
                                          70.2
                                          70.2
                                          71
                                          70.8
                                          70.9
                                          70.7
                                          70.9
                                          71.2
                                          71.3
                                          70.8
                                          71.2
                                          71.7
                                          71.9
                                          72.6
                                          72.3
                                          72.3
                                          72.1
                                          72
                                          71.9
                                          72.6
                                          72.8
                                          73.2
                                          72.1
                                          71.5
                                          70.9
                                          70.4
                                          70.5
                                          70.9
                                          70.2
                                          71
                                          70.2
                                          70.3
                                          69.1
                                          68.8
                                          68.2
                                          68.3
                                          68.2
                                          67.7
                                          67.3
                                          67.5
                                          67.6
                                          67.6
                                          67.2
                                          67
                                          66.3
                                          66.6
                                          66.2
                                          66.4
                                          65.9
                                          66.1
                                          65.5
                                          62.2
                                          62.2
                                          61.4
                                          61.1
                                          61.4
                                          61.1
                                          61.4
                                          61.4
                                          61.8
                                          61.8
                                          61.8
                                          61.8
                                          62.2
                                          61.8
                                          62.2
                                          62.6
                                          62.2
                                          62.6
                                          62.2
                                          62.6
                                          62.6
                                          63
                                          62.6
                                          62.2
                                          61.1
                                          59.5
                                          58.8
                                          56.8
                                          55.7
                                          54.1
                                          51.5
                                          49.2
                                          48.8
                                          47.6
                                          44.9
                                          41.5
                                          37.2
                                          34.6
                                          33
                                          29.2
                                          22.3
                                          17.7
                                          17.3
                                          14
                                          10
                                          6
                                          2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.2
                                          4.4
                                          10.1
                                          15.6
                                          20.8
                                          25.1
                                          27.7
                                          28.2
                                          26.8
                                          24.8
                                          22.4
                                          17.1
                                          11.3
                                          6.9
                                          7.5
                                          11.1
                                          15.4
                                          19.9
                                          24.2
                                          27.1
                                          28.5
                                          28.2
                                          25.6
                                          21.7
                                          17.3
                                          12.1
                                          7.5
                                          5.8
                                          2.4
                                          1.2
                                          1.9
                                          6.7
                                          11.8
                                          16.8
                                          21.7
                                          25.9
                                          27.7
                                          28
                                          27.1
                                          24.4
                                          20.2
                                          15.2
                                          9.3
                                          5
                                          2.9
                                          2.4
                                          8.4
                                          13.5
                                          17.8
                                          22.2
                                          26.2
                                          30
                                          29.8
                                          26
                                          21.3
                                          16.2
                                          11.4
                                          6.6
                                          2.6
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0.3
                                          6.4
                                          12.7
                                          19.2
                                          23.8
                                          28.2
                                          34.9
                                          37.5
                                          40.3
                                          45
                                          49.9
                                          51.6
                                          51.2
                                          50.6
                                          49.9
                                          47.8
                                          44.6
                                          41.2
                                          37.8
                                          33.4
                                          28
                                          23.7
                                          18.8
                                          12.9
                                          6.2
                                          2.2
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          0
                                          ]
                                        * Referenced by: '<S6>/UT Cycle'
                                        */
  real_T UTCycle_bp01Data[600];        /* Expression: [1:600]
                                        * Referenced by: '<S6>/UT Cycle'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blazer_MiL_Model_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  X_Blazer_MiL_Model_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[63];
  real_T odeF[4][63];
  ODE4_IntgData intgData;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    rtwCAPI_ModelMappingInfo* childMMI[2];
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    boolean_T firstInitCondFlag;
    struct {
      uint32_T TID[4];
      uint32_T cLimit[4];
    } TaskCounters;

    struct {
      uint32_T TID1_2;
      boolean_T b_TID1_2;
      uint32_T TID1_3;
      boolean_T b_TID1_3;
    } RateInteraction;

    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Blazer_MiL_Model_T
  Blazer_MiL_Model_P;

/* Block signals (default storage) */
extern B_Blazer_MiL_Model_T
  Blazer_MiL_Model_B;

/* Continuous states (default storage) */
extern X_Blazer_MiL_Model_T
  Blazer_MiL_Model_X;

/* Block states (default storage) */
extern DW_Blazer_MiL_Model_T
  Blazer_MiL_Model_DW;

/* External data declarations for dependent source files */
extern const CAN_to_Plant
  Blazer_MiL_Model_rtZCAN_to_Plant;/* CAN_to_Plant ground */

/* Model block global parameters (default storage) */
extern real_T rtP_ContinuousBatteryCharge[110];/* Variable: ContinuousBatteryCharge
                                                * Referenced by: '<Root>/Model'
                                                */
extern real_T rtP_ContinuousBatteryDischarge[110];/* Variable: ContinuousBatteryDischarge
                                                   * Referenced by: '<Root>/Model'
                                                   */
extern real_T rtP_InterpBatteryCharge[220];/* Variable: InterpBatteryCharge
                                            * Referenced by: '<Root>/Model'
                                            */
extern real_T rtP_InterpBatteryDischarge[220];/* Variable: InterpBatteryDischarge
                                               * Referenced by: '<Root>/Model'
                                               */
extern real_T rtP_New_Mass_Toque_Map[289];/* Variable: New_Mass_Toque_Map
                                           * Referenced by: '<Root>/Model'
                                           */
extern real_T rtP_Reverse_APP[850];    /* Variable: Reverse_APP
                                        * Referenced by: '<Root>/Model'
                                        */
extern real_T rtP_tandivide[1001];     /* Variable: tandivide
                                        * Referenced by: '<Root>/Model'
                                        */

/* Model entry point functions */
extern void Blazer_MiL_Model_initialize(void);
extern void Blazer_MiL_Model_step0(void);
extern void Blazer_MiL_Model_step(int_T tid);
extern void Blazer_MiL_Model_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Blazer_MiL_Model_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_Blazer_MiL_Model_T *const
  Blazer_MiL_Model_M;

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
 * '<Root>' : 'Blazer_MiL_Model'
 * '<S1>'   : 'Blazer_MiL_Model/ACC Tuning'
 * '<S2>'   : 'Blazer_MiL_Model/RTI Data'
 * '<S3>'   : 'Blazer_MiL_Model/Subsystem'
 * '<S4>'   : 'Blazer_MiL_Model/Subsystem1'
 * '<S5>'   : 'Blazer_MiL_Model/Subsystem3'
 * '<S6>'   : 'Blazer_MiL_Model/User and Controldesk Interface'
 * '<S7>'   : 'Blazer_MiL_Model/ACC Tuning/Discrete Derivative1'
 * '<S8>'   : 'Blazer_MiL_Model/ACC Tuning/Discrete Derivative3'
 * '<S9>'   : 'Blazer_MiL_Model/ACC Tuning/MATLAB Function1'
 * '<S10>'  : 'Blazer_MiL_Model/RTI Data/RTI Data Store'
 * '<S11>'  : 'Blazer_MiL_Model/RTI Data/RTI Data Store/RTI Data Store'
 * '<S12>'  : 'Blazer_MiL_Model/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S13>'  : 'Blazer_MiL_Model/Subsystem3/Fault Insertion'
 * '<S14>'  : 'Blazer_MiL_Model/User and Controldesk Interface/50-70 mph test (units in m//s) set sim time to 60 s'
 */
#endif           /* RTW_HEADER_Blazer_MiL_Model_h_ */
