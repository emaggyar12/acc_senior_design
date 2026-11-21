#ifndef RTW_HEADER_HSC_Model_cap_host_h_
#define RTW_HEADER_HSC_Model_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} HSC_Model_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void HSC_Model_host_InitializeDataMapInfo(HSC_Model_host_DataMapInfo_T
    *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_HSC_Model_cap_host_h_ */

/* EOF: HSC_Model_capi_host.h */
