/*
 * PID_HSC_Model_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PID_HSC_Model".
 *
 * Model version              : 1.159
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 21:03:10 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PID_HSC_Model_types_h_
#define RTW_HEADER_PID_HSC_Model_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_HSCInputs_
#define DEFINED_TYPEDEF_FOR_HSCInputs_

typedef struct {
  real_T ABSAtv;
  real_T APP;
  real_T APPv;
  real_T BPP;
  real_T EngRunAtv;
  real_T EngSpd;
  real_T Gear;
  real_T HdSt;
  real_T KeySt;
  real_T gfd;
  real_T McuThermal;
  real_T MotorSpd;
  real_T MotorTrqEst;
  real_T SOC;
  real_T StateMcu;
  real_T StrWhAng;
  real_T StrWhAngV;
  real_T TrnsShftPos;
  real_T VehSpd;
  real_T battTcoolant;
  real_T bcmready;
  real_T cpwrcmd;
  real_T cpwrmon;
  real_T hvilmon;
  real_T ibat;
  real_T maincstat;
  real_T vbat;
  real_T vehmon;
  real_T ICESwitch;
  real_T RegenSwitch;
  real_T CAVsCrsLmtrSwStat;
  real_T CAVsCrsCntrlSwStOnSwAct;
  real_T CAVsCrsCntrlStSetSwAct;
  real_T Long_Switch;
  real_T TCSysAtv;
  real_T MotorRC;
  real_T DrvIntndAxlTrqMax;
  real_T DrvIntndAxlTrqMin;
  real_T TrqReqStat;
  real_T xdotref;
  real_T EngTrqOut;
  real_T ACCBrakeTime;
  real_T ACCSetSpd_kph;
  real_T CAVtrgVel;
  real_T CAVtrgDist;
  real_T grade;
  real_T Tanh_Exponent;
  real_T Tanh_multiplier;
  boolean_T dist_is_valid;
  boolean_T TrafficLightPresent;
  real_T DistanceToIntersection;
  real_T TimeToNextState;
  real_T CurrentState;
  real_T Decel_Division_Value;
  real_T bcm_coolan_temp_C;
  real_T DistanceObjValid;
  real_T TimeGap;
  real_T TransEstGear;
  real_T ActualAxleTrq;
  boolean_T MotorShiftCompensation;
  boolean_T ACCModeRegenOn;
  real_T MCU_thermal_indicator;
  boolean_T ABSActive;
  real_T DirectDistanceLookupTableSwitch;
  boolean_T SetSpeedLookupTableSwitch;
} HSCInputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HSCOutputs_
#define DEFINED_TYPEDEF_FOR_HSCOutputs_

typedef struct {
  real_T EngAxleTrqDmd;
  real_T McuTorqueCommand;
  real_T HSCbmsEnable;
  real_T MPDMBMSign;
  real_T HSCbmsLeakage;
  real_T MPDMBMSpwr;
  real_T HSCBrusaEnable;
  real_T HSCbmsMainCclose;
  real_T MPDMMCUign;
  real_T VMUCmd1OpRq;
  real_T VMUCmd2OpMd;
  real_T VMUmajorProt;
  real_T VMUminorProt;
  real_T MPDMHVpump;
  real_T VMU_Kickout;
  real_T vmcp_StartupSt;
  real_T CrsSpdLmtrSwStat;
  real_T CrsCntrlSwStOnSwAct;
  real_T ACCATC_ACCAct_SF;
  real_T CrsCntrlSwStSetSwAct;
  real_T VMU_Cmd2_CommandMd;
  real_T ACC_APP;
  real_T ACC_BPP;
  real_T ACCPIDOut;
  real_T DistError;
  real_T RelDist;
  real_T SafeDist;
  boolean_T CAVPCM_ACCMdAtv;
  boolean_T CAVPCM_ACCMdReq;
  boolean_T protectHV;
  boolean_T MotorCntrlFault;
  boolean_T ZeroPwrTrq;
  real_T MotorTrqEst;
  boolean_T MotorTrqDirFault;
  real_T TrackACCSt;
  real_T TrqDmdPedalMap;
  real_T DesEngPwr;
  real_T DesElecPwr;
  real_T PwrPMNoRegen;
  real_T TotPwrPedalMap;
  real_T EngTrqDmdRaw;
  real_T EBCM_Decel;
  boolean_T powertraindirectionfault;
  boolean_T VehicleShiftStateControlfault;
  real_T SetSpdACC;
  boolean_T ControllerSwitch;
  boolean_T MotorTrqCutFlag;
  boolean_T EngTrqCutFlag;
  boolean_T ReduceMotSwitch;
  boolean_T GFD;
  boolean_T Battery_Overheat;
  boolean_T Batt_Overheat_Susp;
  boolean_T BPPCancel;
  boolean_T ZeroPwrTmTrq;
  boolean_T MotorControlFault;
  boolean_T MtrCommFault;
  boolean_T AutoMdSpdLmtStat;
  boolean_T ACCAct370;
  boolean_T AdapCrsCntVDA;
  real_T ACCDrvrSeltdSpd;
  real_T SetSpeedCmd;
  real_T TotalAccelComandBeforeRoadLoad;
  real_T TotalForceAfterRoadLoad;
  real_T ACCReqPwr;
  real_T BattPwrChrgLmt;
  real_T BattPwrDischrgLmt;
  real_T PSOC;
  real_T SetSpeedErrorMs;
  real_T SetSpeedMs;
  real_T LiveDistanceToIntersection;
  boolean_T MustStop;
  real_T StoplightAccelMs2;
  boolean_T battery_overvoltage_fault;
  boolean_T battery_undervoltage_fault;
  boolean_T battery_over_discharge_fault;
} HSCOutputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Vvva7FSOBKsqeNDpnUVqsB_
#define DEFINED_TYPEDEF_FOR_struct_Vvva7FSOBKsqeNDpnUVqsB_

typedef struct {
  real_T APP[17];
  real_T VehicleSpeed_kph[17];
  real_T AxlTrq_Nm[289];
} struct_Vvva7FSOBKsqeNDpnUVqsB;

#endif

/* Parameters for system: '<S12>/ACC Lookup' */
typedef struct P_ACCLookup_PID_HSC_Model_T_ P_ACCLookup_PID_HSC_Model_T;

/* Parameters (default storage) */
typedef struct P_PID_HSC_Model_T_ P_PID_HSC_Model_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_PID_HSC_Model_T RT_MODEL_PID_HSC_Model_T;

#endif                                 /* RTW_HEADER_PID_HSC_Model_types_h_ */
