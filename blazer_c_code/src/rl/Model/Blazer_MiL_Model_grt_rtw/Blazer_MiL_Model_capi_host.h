#ifndef RTW_HEADER_Blazer_MiL_Model_cap_host_h_
#define RTW_HEADER_Blazer_MiL_Model_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "HSC_Model_capi_host.h"
#include "Blazer_Plant_Model_capi_host.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
  rtwCAPI_ModelMappingInfo *childMMI[2];
  HSC_Model_host_DataMapInfo_T child0;
  Blazer_Plant_Model_host_DataMapInfo_T child1;
} Blazer_MiL_Model_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void Blazer_MiL_Model_host_InitializeDataMapInfo
    (Blazer_MiL_Model_host_DataMapInfo_T *dataMap,
     const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif  /* RTW_HEADER_Blazer_MiL_Model_cap_host_h_ */

/* EOF: Blazer_MiL_Model_capi_host.h */
