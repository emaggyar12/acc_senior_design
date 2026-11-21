#ifndef RTW_HEADER_Blazer_Plant_Model_cap_host_h_
#define RTW_HEADER_Blazer_Plant_Model_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "TransmissionController_capi_host.h"
#include "SiEngineController_capi_host.h"
#include "DrivetrainHevP4_capi_host.h"
#include "BattHev_capi_host.h"
#include "StarterSystemP2_capi_host.h"
#include "MotMapped_capi_host.h"
#include "SiMappedEngine_capi_host.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
  rtwCAPI_ModelMappingInfo *childMMI[7];
  TransmissionController_host_DataMapInfo_T child0;
  SiEngineController_host_DataMapInfo_T child1;
  DrivetrainHevP4_host_DataMapInfo_T child2;
  BattHev_host_DataMapInfo_T child3;
  StarterSystemP2_host_DataMapInfo_T child4;
  MotMapped_host_DataMapInfo_T child5;
  SiMappedEngine_host_DataMapInfo_T child6;
} Blazer_Plant_Model_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void Blazer_Plant_Model_host_InitializeDataMapInfo
    (Blazer_Plant_Model_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                           /* RTW_HEADER_Blazer_Plant_Model_cap_host_h_ */

/* EOF: Blazer_Plant_Model_capi_host.h */
