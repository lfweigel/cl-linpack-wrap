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
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasGetVersion(major,minor,patch);

	/* Return */
	return status;
}

clAmdBlasStatus
__clAmdBlasSetup(void)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSetup();

	/* Return */
	return status;
}

void
__clAmdBlasTeardown(void)
{
	/* Call */
	status = clAmdBlasTeardown();
}

cl_ulong
__clAmdBlasAddScratchImage(
    cl_context context,
    size_t width,
    size_t height,
    clAmdBlasStatus *status)
{
	cl_ulong result;

	/* Call */
	result = clAmdBlasAddScratchImage(context, width, height, status);

	/* Return */
	return result;
}

clAmdBlasStatus
__clAmdBlasRemoveScratchImage(
    cl_ulong imageID)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasRemoveScratchImage(imageID);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSswap(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDswap(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCswap(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZswap(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSscal(N, alpha, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDscal(N, alpha, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCscal(N, alpha, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZscal(N, alpha, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsscal(N, alpha, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZdscal(N, alpha, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasScopy(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDcopy(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCcopy(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZcopy(N, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSaxpy(N, alpha, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDaxpy(N, alpha, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCaxpy(N, alpha, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZaxpy(N, alpha, X, offx, incx, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSdot(N, dotProduct, offDP, X, offx, incx, Y, offy, incy, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDdot(N, dotProduct, offDP, X, offx, incx, Y, offy, incy, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCdotu(N, dotProduct, offDP, X, offx, incx, Y, offy, incy, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZdotu(N, dotProduct, offDP, X, offx, incx, Y, offy, incy, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCdotc(N, dotProduct, offDP, X, offx, incx, Y, offy, incy, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZdotc(N, dotProduct, offDP, X, offx, incx, Y, offy, incy, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSrotg(SA, offSA, SB, offSB, C, offC, S, offS, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDrotg(DA, offDA, DB, offDB, C, offC, S, offS, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCrotg(CA, offCA, CB, offCB, C, offC, S, offS, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZrotg(CA, offCA, CB, offCB, C, offC, S, offS, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSrotmg(SD1, offSD1, SD2, offSD2, SX1, offSX1, SY1, offSY1, SPARAM, offSparam, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDrotmg(DD1, offDD1, DD2, offDD2, DX1, offDX1, DY1, offDY1, DPARAM, offDparam, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSrot(N, X, offx, incx, Y, offy, incy, C, S, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDrot(N, X, offx, incx, Y, offy, incy, C, S, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsrot(N, X, offx, incx, Y, offy, incy, C, S, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZdrot(N, X, offx, incx, Y, offy, incy, C, S, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSrotm(N, X, offx, incx, Y, offy, incy, SPARAM, offSparam, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDrotm(N, X, offx, incx, Y, offy, incy, DPARAM, offDparam, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSnrm2(N, NRM2, offNRM2, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDnrm2(N, NRM2, offNRM2, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasScnrm2(N, NRM2, offNRM2, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDznrm2(N, NRM2, offNRM2, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasiSamax(N, iMax, offiMax, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasiDamax(N, iMax, offiMax, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasiCamax(N, iMax, offiMax, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasiZamax(N, iMax, offiMax, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSasum(N, asum, offAsum, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDasum(N, asum, offAsum, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasScasum(N, asum, offAsum, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDzasum(N, asum, offAsum, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSgemv(order, transA, M, N, alpha, A, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDgemv(order, transA, M, N, alpha, A, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgemv(order, transA, M, N, alpha, A, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgemv(order, transA, M, N, alpha, A, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSgemvEx(order, transA, M, N, alpha, A, offA, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDgemvEx(order, transA, M, N, alpha, A, offA, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgemvEx(order, transA, M, N, alpha, A, offA, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgemvEx(order, transA, M, N, alpha, A, offA, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsymv(order, uplo, N, alpha, A, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsymv(order, uplo, N, alpha, A, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsymvEx(order, uplo, N, alpha, A, offA, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsymvEx(order, uplo, N, alpha, A, offA, lda, x, offx, incx, beta, y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasChemv(order, uplo, N, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZhemv(order, uplo, N, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStrmv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtrmv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtrmv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtrmv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStrsv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtrsv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtrsv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtrsv(order, uplo, trans, diag, N, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSger(order, M, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDger(order, M, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgeru(order, M, N, alpha, X, offx, incx, Y, offy, incy, A , offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgeru(order, M, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgerc(order, M, N, alpha, X, offx, incx, Y, offy, incy, A , offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgerc(order, M, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsyr(order, uplo, N, alpha, X, offx, incx, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsyr(order, uplo, N, alpha, X, offx, incx, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCher(order, uplo, N, alpha, X, offx, incx, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZher(order, uplo, N, alpha, X, offx, incx, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsyr2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsyr2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCher2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZher2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, A, offa, lda, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStpmv(order, uplo, trans, diag, N, AP, offa, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtpmv(order, uplo, trans, diag, N, AP, offa, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtpmv(order, uplo, trans, diag, N, AP, offa, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtpmv(order, uplo, trans, diag, N, AP, offa, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStpsv(order, uplo, trans, diag, N, A, offa, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtpsv(order, uplo, trans, diag, N, A, offa, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtpsv(order, uplo, trans, diag, N, A, offa, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtpsv(order, uplo, trans, diag, N, A, offa, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSspmv(order, uplo, N, alpha, AP, offa, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDspmv(order, uplo, N, alpha, AP, offa, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasChpmv(order, uplo, N, alpha, AP, offa, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZhpmv(order, uplo, N, alpha, AP, offa, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSspr(order, uplo, N, alpha, X, offx, incx, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDspr(order, uplo, N, alpha, X, offx, incx, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasChpr(order, uplo, N, alpha, X, offx, incx, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZhpr(order, uplo, N, alpha, X, offx, incx, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSspr2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDspr2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasChpr2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event* events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZhpr2(order, uplo, N, alpha, X, offx, incx, Y, offy, incy, AP, offa, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSgbmv(order, trans, M, N, KL, KU, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDgbmv(order, trans, M, N, KL, KU, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgbmv(order, trans, M, N, KL, KU, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgbmv(order, trans, M, N, KL, KU, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStbmv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtbmv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtbmv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtbmv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, scratchBuff, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsbmv(order, uplo, N, K, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsbmv(order, uplo, N, K, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasChbmv(order, uplo, N, K, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZhbmv(order, uplo, N, K, alpha, A, offa, lda, X, offx, incx, beta, Y, offy, incy, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStbsv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtbsv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtbsv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtbsv(order, uplo, trans, diag, N, K, A, offa, lda, X, offx, incx, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSgemm(order, transA, transB, M, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDgemm(order, transA, transB, M, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgemm(order, transA, transB, M, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgemm(order, transA, transB, M, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSgemmEx(order, transA, transB, M, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDgemmEx(order, transA, transB, M, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCgemmEx(order, transA, transB, M, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZgemmEx(order, transA, transB, M, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStrmm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtrmm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtrmm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtrmm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStrmmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtrmmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtrmmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtrmmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStrsm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtrsm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtrsm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtrsm(order, side, uplo, transA, diag, M, N, alpha, A, lda, B, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasStrsmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDtrsmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCtrsmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZtrsmEx(order, side, uplo, transA, diag, M, N, alpha, A, offA, lda, B, offB, ldb, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsyrk(order, uplo, transA, N, K, alpha, A, lda, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsyrk(order, uplo, transA, N, K, alpha, A, lda, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsyrk(order, uplo, transA, N, K, alpha, A, lda, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZsyrk(order, uplo, transA, N, K, alpha, A, lda, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsyrkEx(order, uplo, transA, N, K, alpha, A, offA, lda, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsyrkEx(order, uplo, transA, N, K, alpha, A, offA, lda, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsyrkEx(order, uplo, transA, N, K, alpha, A, offA, lda, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZsyrkEx(order, uplo, transA, N, K, alpha, A, offA, lda, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsyr2k(order, uplo, transAB, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsyr2k(order, uplo, transAB, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsyr2k(order, uplo, transAB, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZsyr2k(order, uplo, transAB, N, K, alpha, A, lda, B, ldb, beta, C, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsyr2kEx(order, uplo, transAB, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsyr2kEx(order, uplo, transAB, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsyr2kEx(order, uplo, transAB, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZsyr2kEx(order, uplo, transAB, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasSsymm(order, side, uplo, M, N, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasDsymm(order, side, uplo, M, N, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCsymm(order, side, uplo, M, N, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZsymm(order, side, uplo, M, N, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasChemm(order, side, uplo, M, N, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZhemm(order, side, uplo, M, N, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCherk(order, uplo, transA, N, K, alpha, A, offa, lda, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZherk(order, uplo, transA, N, K, alpha, A, offa, lda, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasCher2k(order, uplo, trans, N, K, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}

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
    cl_event *events)
{
	clAmdBlasStatus status;

	/* Call */
	status = clAmdBlasZher2k(order, uplo, trans, N, K, alpha, A, offa, lda, B, offb, ldb, beta, C, offc, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);

	/* Return */
	return status;
}
