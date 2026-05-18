// This file is auto-generated. Do not edit!

#include "source-provider.hpp"

namespace internal
{
const char* SpGEMM_EM_kernels=
 #include "../kernels/SpGEMM_EM_kernels.cl"
;
const char* SpGEMM_ESC_0_1_kernels=
 #include "../kernels/SpGEMM_ESC_0_1_kernels.cl"
;
const char* SpGEMM_ESC_2heap_kernels=
 #include "../kernels/SpGEMM_ESC_2heap_kernels.cl"
;
const char* SpGEMM_ESC_bitonic_kernels=
 #include "../kernels/SpGEMM_ESC_bitonic_kernels.cl"
;
const char* SpGEMM_computeNnzCt_kernels=
 #include "../kernels/SpGEMM_computeNnzCt_kernels.cl"
;
const char* SpGEMM_copyCt2C_kernels=
 #include "../kernels/SpGEMM_copyCt2C_kernels.cl"
;
const char* atomic_reduce=
 #include "../kernels/atomic_reduce.cl"
;
const char* blas1=
 #include "../kernels/blas1.cl"
;
const char* bool_EM_kernels=
 #include "../kernels/bool_EM_kernels.cl"
;
const char* bool_ESC_0_1_kernels=
 #include "../kernels/bool_ESC_0_1_kernels.cl"
;
const char* bool_ESC_2heap_kernels=
 #include "../kernels/bool_ESC_2heap_kernels.cl"
;
const char* bool_ESC_bitonic_kernels=
 #include "../kernels/bool_ESC_bitonic_kernels.cl"
;
const char* bool_copyCt2C_kernels=
 #include "../kernels/bool_copyCt2C_kernels.cl"
;
const char* bool_csradd_merge=
 #include "../kernels/bool_csradd_merge.cl"
;
const char* bool_csradd_scan=
 #include "../kernels/bool_csradd_scan.cl"
;
const char* control=
 #include "../kernels/control.cl"
;
const char* conversion_utils=
 #include "../kernels/conversion_utils.cl"
;
const char* csrmm_adaptive=
 #include "../kernels/csrmm_adaptive.cl"
;
const char* csrmm_general=
 #include "../kernels/csrmm_general.cl"
;
const char* csrmv_adaptive=
 #include "../kernels/csrmv_adaptive.cl"
;
const char* csrmv_general=
 #include "../kernels/csrmv_general.cl"
;
const char* dot=
 #include "../kernels/dot.cl"
;
const char* elementwise_transform=
 #include "../kernels/elementwise_transform.cl"
;
const char* matrix_utils=
 #include "../kernels/matrix_utils.cl"
;
const char* reduce=
 #include "../kernels/reduce.cl"
;
const char* reduce_by_key=
 #include "../kernels/reduce_by_key.cl"
;
const char* scan=
 #include "../kernels/scan.cl"
;
const char* sort_by_key_common=
 #include "../kernels/sort_by_key_common.cl"
;
const char* sort_by_key_int=
 #include "../kernels/sort_by_key_int.cl"
;
const char* sort_by_key_uint=
 #include "../kernels/sort_by_key_uint.cl"
;
}


std::map<std::string, const char*> SourceProvider::map(SourceProvider::MapInit());

std::map<std::string, const char*> SourceProvider::MapInit()
{
	std::map<std::string, const char*> internal_map;

	internal_map["SpGEMM_EM_kernels"] = internal::SpGEMM_EM_kernels;

	internal_map["SpGEMM_ESC_0_1_kernels"] = internal::SpGEMM_ESC_0_1_kernels;

	internal_map["SpGEMM_ESC_2heap_kernels"] = internal::SpGEMM_ESC_2heap_kernels;

	internal_map["SpGEMM_ESC_bitonic_kernels"] = internal::SpGEMM_ESC_bitonic_kernels;

	internal_map["SpGEMM_computeNnzCt_kernels"] = internal::SpGEMM_computeNnzCt_kernels;

	internal_map["SpGEMM_copyCt2C_kernels"] = internal::SpGEMM_copyCt2C_kernels;

	internal_map["atomic_reduce"] = internal::atomic_reduce;

	internal_map["blas1"] = internal::blas1;

	internal_map["bool_EM_kernels"] = internal::bool_EM_kernels;

	internal_map["bool_ESC_0_1_kernels"] = internal::bool_ESC_0_1_kernels;

	internal_map["bool_ESC_2heap_kernels"] = internal::bool_ESC_2heap_kernels;

	internal_map["bool_ESC_bitonic_kernels"] = internal::bool_ESC_bitonic_kernels;

	internal_map["bool_copyCt2C_kernels"] = internal::bool_copyCt2C_kernels;

	internal_map["bool_csradd_merge"] = internal::bool_csradd_merge;

	internal_map["bool_csradd_scan"] = internal::bool_csradd_scan;

	internal_map["control"] = internal::control;

	internal_map["conversion_utils"] = internal::conversion_utils;

	internal_map["csrmm_adaptive"] = internal::csrmm_adaptive;

	internal_map["csrmm_general"] = internal::csrmm_general;

	internal_map["csrmv_adaptive"] = internal::csrmv_adaptive;

	internal_map["csrmv_general"] = internal::csrmv_general;

	internal_map["dot"] = internal::dot;

	internal_map["elementwise_transform"] = internal::elementwise_transform;

	internal_map["matrix_utils"] = internal::matrix_utils;

	internal_map["reduce"] = internal::reduce;

	internal_map["reduce_by_key"] = internal::reduce_by_key;

	internal_map["scan"] = internal::scan;

	internal_map["sort_by_key_common"] = internal::sort_by_key_common;

	internal_map["sort_by_key_int"] = internal::sort_by_key_int;

	internal_map["sort_by_key_uint"] = internal::sort_by_key_uint;

	return internal_map;
}
