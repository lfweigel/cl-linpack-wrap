/*
 * clAmdBlas wrappers for linpack
 * Author: Xiang Gong <xgong@ece.neu.edu>
 */

#include <clAmdBlas.h>

#include "cl_linpack_wrap.h"

/* Public functions */

clAmdBlasStatus
__clAmdBlasGetVersion(cl_uint* major, cl_uint* minor, cl_uint* patch)
{
	clAmdBlasGetVersion(major, minor, patch);
}
