#ifndef CL_LINPACK_WRAP
#define CL_LINPACK_WRAP

#ifdef __cplusplus
extern "C" {
#endif

/* Includes */
#include <clAmdBlas.h>

/* Defines */

/* Functions */
clAmdBlasStatus
__clAmdBlasGetVersion(cl_uint* major, cl_uint* minor, cl_uint* patch);

clAmdBlasStatus
__clAmdBlasSetup(void);

void
__clAmdBlasTeardown(void);

cl_ulong
__clAmdBlasAddScratchImage(
    cl_context context,
    size_t width,
    size_t height,
    clAmdBlasStatus *status);

clAmdBlasStatus
__clAmdBlasRemoveScratchImage(
    cl_ulong imageID);

clAmdBlasStatus
__clAmdBlasSswap(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDswap(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCswap(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZswap(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSscal(
    size_t N,
    cl_float alpha,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDscal(
    size_t N,
    cl_double alpha,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCscal(
    size_t N,
    cl_float2 alpha,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZscal(
    size_t N,
    cl_double2 alpha,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsscal(
    size_t N,
    cl_float alpha,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZdscal(
    size_t N,
    cl_double alpha,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasScopy(
    size_t N,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDcopy(
    size_t N,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCcopy(
    size_t N,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZcopy(
    size_t N,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSaxpy(
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDaxpy(
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCaxpy(
    size_t N,
    cl_float2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZaxpy(
    size_t N,
    cl_double2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSdot(
    size_t N,
    cl_mem dotProduct,
    size_t offDP,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDdot(
    size_t N,
    cl_mem dotProduct,
    size_t offDP,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCdotu(
    size_t N,
    cl_mem dotProduct,
    size_t offDP,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZdotu(
    size_t N,
    cl_mem dotProduct,
    size_t offDP,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCdotc(
    size_t N,
    cl_mem dotProduct,
    size_t offDP,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZdotc(
    size_t N,
    cl_mem dotProduct,
    size_t offDP,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSrotg(
    cl_mem SA,
    size_t offSA,
    cl_mem SB,
    size_t offSB,
    cl_mem C,
    size_t offC,
    cl_mem S,
    size_t offS,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDrotg(
    cl_mem DA,
    size_t offDA,
    cl_mem DB,
    size_t offDB,
    cl_mem C,
    size_t offC,
    cl_mem S,
    size_t offS,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCrotg(
    cl_mem CA,
    size_t offCA,
    cl_mem CB,
    size_t offCB,
    cl_mem C,
    size_t offC,
    cl_mem S,
    size_t offS,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZrotg(
    cl_mem CA,
    size_t offCA,
    cl_mem CB,
    size_t offCB,
    cl_mem C,
    size_t offC,
    cl_mem S,
    size_t offS,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSrotmg(
    cl_mem SD1,
    size_t offSD1,
    cl_mem SD2,
    size_t offSD2,
    cl_mem SX1,
    size_t offSX1,
    const cl_mem SY1,
    size_t offSY1,
    cl_mem SPARAM,
    size_t offSparam,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDrotmg(
    cl_mem DD1,
    size_t offDD1,
    cl_mem DD2,
    size_t offDD2,
    cl_mem DX1,
    size_t offDX1,
    const cl_mem DY1,
    size_t offDY1,
    cl_mem DPARAM,
    size_t offDparam,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSrot(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_float C,
    cl_float S,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDrot(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_double C,
    cl_double S,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsrot(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_float C,
    cl_float S,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZdrot(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_double C,
    cl_double S,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSrotm(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    const cl_mem SPARAM,
    size_t offSparam,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDrotm(
    size_t N,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem Y,
    size_t offy,
    int incy,
    const cl_mem DPARAM,
    size_t offDparam,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSnrm2(
    size_t N,
    cl_mem NRM2,
    size_t offNRM2,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDnrm2(
    size_t N,
    cl_mem NRM2,
    size_t offNRM2,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasScnrm2(
    size_t N,
    cl_mem NRM2,
    size_t offNRM2,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDznrm2(
    size_t N,
    cl_mem NRM2,
    size_t offNRM2,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasiSamax(
    size_t N,
    cl_mem iMax,
    size_t offiMax,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasiDamax(
    size_t N,
    cl_mem iMax,
    size_t offiMax,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasiCamax(
    size_t N,
    cl_mem iMax,
    size_t offiMax,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasiZamax(
    size_t N,
    cl_mem iMax,
    size_t offiMax,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSasum(
    size_t N,
    cl_mem asum,
    size_t offAsum,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDasum(
    size_t N,
    cl_mem asum,
    size_t offAsum,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasScasum(
    size_t N,
    cl_mem asum,
    size_t offAsum,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDzasum(
    size_t N,
    cl_mem asum,
    size_t offAsum,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSgemv(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDgemv(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgemv(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    FloatComplex beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgemv(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    DoubleComplex beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSgemvEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDgemvEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgemvEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    FloatComplex beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgemvEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    size_t M,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    DoubleComplex beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsymv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsymv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsymvEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsymvEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem x,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasChemv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    FloatComplex beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZhemv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    DoubleComplex beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStrmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtrmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtrmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtrmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStrsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtrsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtrsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtrsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSger(
    clAmdBlasOrder order,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDger(
    clAmdBlasOrder order,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgeru(
    clAmdBlasOrder order,
    size_t M,
    size_t N,
    cl_float2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A ,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgeru(
    clAmdBlasOrder order,
    size_t M,
    size_t N,
    cl_double2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgerc(
    clAmdBlasOrder order,
    size_t M,
    size_t N,
    cl_float2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A ,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgerc(
    clAmdBlasOrder order,
    size_t M,
    size_t N,
    cl_double2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsyr(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasDsyr(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasCher(
 clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasZher(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
 cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasSsyr2(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
 const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasDsyr2(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasCher2(
 clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
 const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasZher2(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
 cl_mem A,
    size_t offa,
    size_t lda,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasStpmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem AP,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtpmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem AP,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtpmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem AP,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtpmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem AP,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
 cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStpsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtpsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtpsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtpsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    const cl_mem A,
    size_t offa,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSspmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem AP,
    size_t offa,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDspmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem AP,
    size_t offa,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasChpmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float2 alpha,
    const cl_mem AP,
    size_t offa,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_float2 beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZhpmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double2 alpha,
    const cl_mem AP,
    size_t offa,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_double2 beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSspr(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasDspr(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasChpr(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasZhpr(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasSspr2(
 clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float alpha,
    const cl_mem X,
    size_t offx,
    int incx,
 const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasDspr2(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
 cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasChpr2(
 clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_float2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
 const cl_mem Y,
    size_t offy,
    int incy,
    cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasZhpr2(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    cl_double2 alpha,
    const cl_mem X,
    size_t offx,
    int incx,
    const cl_mem Y,
    size_t offy,
    int incy,
 cl_mem AP,
    size_t offa,
    cl_uint numCommandQueues,
    cl_command_queue* commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event* eventWaitList,
    cl_event* events);

clAmdBlasStatus
__clAmdBlasSgbmv(
    clAmdBlasOrder order,
    clAmdBlasTranspose trans,
    size_t M,
    size_t N,
    size_t KL,
    size_t KU,
    cl_float alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDgbmv(
    clAmdBlasOrder order,
    clAmdBlasTranspose trans,
    size_t M,
    size_t N,
    size_t KL,
    size_t KU,
    cl_double alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgbmv(
    clAmdBlasOrder order,
    clAmdBlasTranspose trans,
    size_t M,
    size_t N,
    size_t KL,
    size_t KU,
    cl_float2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_float2 beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgbmv(
    clAmdBlasOrder order,
    clAmdBlasTranspose trans,
    size_t M,
    size_t N,
    size_t KL,
    size_t KU,
    cl_double2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_double2 beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_mem scratchBuff,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_float beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_double beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasChbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    size_t K,
    cl_float2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_float2 beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZhbmv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    size_t N,
    size_t K,
    cl_double2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem X,
    size_t offx,
    int incx,
    cl_double2 beta,
    cl_mem Y,
    size_t offy,
    int incy,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

 clAmdBlasStatus
__clAmdBlasStbsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtbsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtbsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtbsv(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    clAmdBlasDiag diag,
    size_t N,
    size_t K,
    const cl_mem A,
    size_t offa,
    size_t lda,
    cl_mem X,
    size_t offx,
    int incx,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSgemm(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    cl_float beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDgemm(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    cl_double beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgemm(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    FloatComplex beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgemm(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    DoubleComplex beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSgemmEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    cl_float beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDgemmEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    cl_double beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCgemmEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    FloatComplex beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZgemmEx(
    clAmdBlasOrder order,
    clAmdBlasTranspose transA,
    clAmdBlasTranspose transB,
    size_t M,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    DoubleComplex beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStrmm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtrmm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtrmm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtrmm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStrmmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtrmmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtrmmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtrmmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStrsm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtrsm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtrsm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtrsm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t lda,
    cl_mem B,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasStrsmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDtrsmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCtrsmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    FloatComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZtrsmEx(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    clAmdBlasDiag diag,
    size_t M,
    size_t N,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_mem B,
    size_t offB,
    size_t ldb,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsyrk(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    cl_float beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsyrk(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    cl_double beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsyrk(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t lda,
    FloatComplex beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZsyrk(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t lda,
    DoubleComplex beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsyrkEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_float beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsyrkEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    cl_double beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsyrkEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    FloatComplex beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZsyrkEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    DoubleComplex beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsyr2k(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    cl_float beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsyr2k(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    cl_double beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsyr2k(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    FloatComplex beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZsyr2k(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t lda,
    const cl_mem B,
    size_t ldb,
    DoubleComplex beta,
    cl_mem C,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsyr2kEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    cl_float alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    cl_float beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsyr2kEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    cl_double alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    cl_double beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsyr2kEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    FloatComplex beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZsyr2kEx(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transAB,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offA,
    size_t lda,
    const cl_mem B,
    size_t offB,
    size_t ldb,
    DoubleComplex beta,
    cl_mem C,
    size_t offC,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasSsymm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    size_t M,
    size_t N,
    cl_float alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_float beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasDsymm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    size_t M,
    size_t N,
    cl_double alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_double beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCsymm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    size_t M,
    size_t N,
    cl_float2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_float2 beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZsymm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    size_t M,
    size_t N,
    cl_double2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_double2 beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasChemm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    size_t M,
    size_t N,
    cl_float2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_float2 beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZhemm(
    clAmdBlasOrder order,
    clAmdBlasSide side,
    clAmdBlasUplo uplo,
    size_t M,
    size_t N,
    cl_double2 alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_double2 beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCherk(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    float alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    float beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZherk(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose transA,
    size_t N,
    size_t K,
    double alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    double beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasCher2k(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    size_t N,
    size_t K,
    FloatComplex alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_float beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);

clAmdBlasStatus
__clAmdBlasZher2k(
    clAmdBlasOrder order,
    clAmdBlasUplo uplo,
    clAmdBlasTranspose trans,
    size_t N,
    size_t K,
    DoubleComplex alpha,
    const cl_mem A,
    size_t offa,
    size_t lda,
    const cl_mem B,
    size_t offb,
    size_t ldb,
    cl_double beta,
    cl_mem C,
    size_t offc,
    size_t ldc,
    cl_uint numCommandQueues,
    cl_command_queue *commandQueues,
    cl_uint numEventsInWaitList,
    const cl_event *eventWaitList,
    cl_event *events);


#ifdef __cplusplus
}      /* extern "C" { */
#endif

#endif /* CL_LINPACK_WRAP */