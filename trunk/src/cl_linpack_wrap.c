/*
 * clAmdBlas wrappers for linpack
 * Author: Xiang Gong <xgong@ece.neu.edu>
 */

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "cl_linpack_wrap.h"

/* Global variables */

char *clblas_error_not_impl = 
    "\tThis error message is reported by the clAMDBlas wrapper library\n"
    "\tlinked to your application. The runtime only supports partial\n"
    "\timplementation of cBlas.\n";

/* Context */
cl_int err;
cl_platform_id platform = 0;
cl_device_id device = 0;
cl_context_properties props[3] = { CL_CONTEXT_PLATFORM, 0, 0 };
cl_context ctx = 0;
cl_command_queue queue = 0;
cl_event event = NULL;
int ret = 0;
int context_initialized = 0;

/* Private functions */

static int ContextInit()
{
    if (context_initialized)
    {
        return 1;
    }
    /* Setup OpenCL environment. */
    err = clGetPlatformIDs(1, &platform, NULL);
    if (err != CL_SUCCESS) {
        printf( "clGetPlatformIDs() failed with %d\n", err );
        return -1;
    }

    err = clGetDeviceIDs(platform, CL_DEVICE_TYPE_GPU, 1, &device, NULL);
    if (err != CL_SUCCESS) {
        printf( "clGetDeviceIDs() failed with %d\n", err );
        return -1;
    }

    props[1] = (cl_context_properties)platform;
    ctx = clCreateContext(props, 1, &device, NULL, NULL, &err);
    if (err != CL_SUCCESS) {
        printf( "clCreateContext() failed with %d\n", err );
        return -1;
    }

    queue = clCreateCommandQueue(ctx, device, 0, &err);
    if (err != CL_SUCCESS) {
        printf( "clCreateCommandQueue() failed with %d\n", err );
        clReleaseContext(ctx);
        return -1;
    }

    /* Setup clAmdBlas. */
    err = clAmdBlasSetup();
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSetup() failed with %d\n", err);
        clReleaseCommandQueue(queue);
        clReleaseContext(ctx);
        return -1;
    }

    context_initialized = 1;

    /* Return */
    return 1;
}

static void fatal(const char *fmt, ...)
{
    va_list va;
    va_start(va, fmt);
    fprintf(stderr, "fatal: ");
    vfprintf(stderr, fmt, va);
    fprintf(stderr, "\n");
    fflush(NULL);
    exit(1);
}

/* Public functions */

void ContextDestroy()
{
    /* Finalize work with clAmdBlas. */
    clAmdBlasTeardown();

    /* Release OpenCL working objects. */
    clReleaseCommandQueue(queue);
    clReleaseContext(ctx);
}

int cblas_errprn(int ierr, int info, char *form, ...)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0;
}







float cblas_sdsdot(const int N, const float alpha, const float *X,
                    const int incX, const float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}
                    
double cblas_dsdot(const int N, const float *X, const int incX, const float *Y,
                   const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}
                   
float cblas_sdot(const int N, const float *X, const int incX,
                  const float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}
                  
double cblas_ddot(const int N, const double *X, const int incX,
                  const double *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}
                  



void cblas_cdotu_sub(const int N, const void *X, const int incX,
                       const void *Y, const int incY, void *dotu)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                       
void cblas_cdotc_sub(const int N, const void *X, const int incX,
                       const void *Y, const int incY, void *dotc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                       

void cblas_zdotu_sub(const int N, const void *X, const int incX,
                       const void *Y, const int incY, void *dotu)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                       
void cblas_zdotc_sub(const int N, const void *X, const int incX,
                       const void *Y, const int incY, void *dotc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                       





float cblas_snrm2(const int N, const float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}

float cblas_sasum(const int N, const float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}


double cblas_dnrm2(const int N, const double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}

double cblas_dasum(const int N, const double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}


float cblas_scnrm2(const int N, const void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}

float cblas_scasum(const int N, const void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}


double cblas_dznrm2(const int N, const void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}

double cblas_dzasum(const int N, const void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0.0f;
}






size_t cblas_isamax(const int N, const float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0;
}

size_t cblas_idamax(const int N, const double *X, const int incX)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufX, scratchBuf, iMax;
    static cl_uint indexMax;

    int lenX = 1 + (N-1)*abs(incX);
    int lenScratchBuf = N;

#ifdef DOUBLE_AS_SINGLE

    int i;

    float *X_s = calloc(1, lenX * sizeof(float));

    for (i = 0; i < lenX; ++i)
        X_s[i] = (float)X[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(float)), NULL, &err);

    // Allocate minimum of (N/64) elements. But here allocating N elements for the sake of simplicity
    scratchBuf = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenScratchBuf*sizeof(float) * 2), NULL, &err);

    // Buffer to return the index of max absolute value in X
    iMax = clCreateBuffer(ctx, CL_MEM_WRITE_ONLY, sizeof(cl_uint), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(float)) , X_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasiSamax( N, iMax, 0, bufX, 0, incX, scratchBuf,
                                    1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasiSamax() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, iMax, CL_TRUE, 0, sizeof(cl_uint),
                                    &indexMax, 0, NULL, NULL);
        printf("Result amax: %d\n", indexMax);
    }

    /* Free */
    free(X_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(double)), NULL, &err);

    // Allocate minimum of (N/64) elements. But here allocating N elements for the sake of simplicity
    scratchBuf = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenScratchBuf*sizeof(double) * 2), NULL, &err);

    // Buffer to return the index of max absolute value in X
    iMax = clCreateBuffer(ctx, CL_MEM_WRITE_ONLY, sizeof(cl_uint), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(double)) , X, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasiDamax( N, iMax, 0, bufX, 0, incX, scratchBuf,
                                    1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasiDamax() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, iMax, CL_TRUE, 0, sizeof(cl_uint),
                                    &indexMax, 0, NULL, NULL);
        printf("Result amax: %d\n", indexMax);
    }

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufX);
    clReleaseMemObject(scratchBuf);
    clReleaseMemObject(iMax);

    /* Return */
    return indexMax;
}

size_t cblas_icamax(const int N, const void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0;
}

size_t cblas_izamax(const int N, const void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();

    /* Return */
    return 0;
}








void cblas_srotg(float a, float b, float c, float s)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_crotg(complex a, complex b, complex c, float s)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_drotg(double a, double b, double c, double s)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_zrotg(doublecomplex a, doublecomplex b, doublecomplex c, double s)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_sswap(const int N, float *X, const int incX,
                 float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_scopy(const int N, const float *X, const int incX,
                 float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_saxpy(const int N, const float alpha, const float *X,
                 const int incX, float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_dswap(const int N, double *X, const int incX,
                 double *Y, const int incY)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufX, bufY;
    int lenX = 1 + (N-1)*abs(incX);
    int lenY = 1 + (N-1)*abs(incY);

#ifdef DOUBLE_AS_SINGLE

    int i;

    float *X_s = calloc(1, lenX * sizeof(float));
    float *Y_s = calloc(1, lenY * sizeof(float));

    for (i = 0; i < lenX; ++i)
        X_s[i] = (float)X[i];
    for (i = 0; i < lenY; ++i)
        Y_s[i] = (float)Y[i];

    /* Prepare OpenCL memory objects and place vectors inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenX*sizeof(float)), NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenY*sizeof(float)), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(float)), X_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(float)), Y_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSswap(N, bufX, 0, incX, bufY, 0, incY, 1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasDswap() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(float)),
                                    X_s, 0, NULL, NULL);
        err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(float)),
                                    Y_s, 0, NULL, NULL);
    }

    /* Refresh double precision */
    for (i = 0; i < lenX; ++i)
        X[i] = (double)X_s[i];
    for (i = 0; i < lenY; ++i)
        Y[i] = (double)Y_s[i];

    /* Free single precision */
    free(X_s);
    free(Y_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(cl_float)), NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenY*sizeof(cl_float)), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(cl_float)), X, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(cl_float)), Y, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasScopy( N, bufX, 0, incX, bufY, 0, incY, 1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasScopy() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(cl_float)),
                                    X, 0, NULL, NULL);
        err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(cl_float)),
                                    Y, 0, NULL, NULL);
    }

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufY);
    clReleaseMemObject(bufX);

}
                 
void cblas_dcopy(const int N, const double *X, const int incX,
                 double *Y, const int incY)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufX, bufY;

    int lenX = 1 + (N-1)*abs(incX);
    int lenY = 1 + (N-1)*abs(incY);

#ifdef DOUBLE_AS_SINGLE

    int i;

    float *X_s = calloc(1, lenX * sizeof(float));
    float *Y_s = calloc(1, lenY * sizeof(float));

    for (i = 0; i < lenX; ++i)
        X_s[i] = (float)X[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(float)), NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenY*sizeof(float)), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(float)), X_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(float)), Y_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasScopy( N, bufX, 0, incX, bufY, 0, incY, 1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasScopy() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(float)),
                                    Y_s, 0, NULL, NULL);
    }

    /* Refresh double precision Y */
     for (i = 0; i < lenY; ++i)
        Y[i] = (double)Y_s[i];

    /* Free */
    free(X_s);
    free(Y_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(double)), NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenY*sizeof(double)), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(double)), X, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(double)), Y, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDcopy( N, bufX, 0, incX, bufY, 0, incY, 1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasDcopy() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(double)),
                                    Y, 0, NULL, NULL);
    }

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufY);
    clReleaseMemObject(bufX);
}
                 
void cblas_daxpy(const int N, const double alpha, const double *X,
                 const int incX, double *Y, const int incY)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufX, bufY;
    int lenX = 1 + (N-1)*abs(incX);
    int lenY = 1 + (N-1)*abs(incY);

#ifdef DOUBLE_AS_SINGLE 

    int i;
    float *X_s = calloc(1, lenX * sizeof(float));
    float *Y_s = calloc(1, lenY * sizeof(float));

    for (i = 0; i < lenX; ++i)
        X_s[i] = (float)X[i];
    for (i = 0; i < lenY; ++i)
        Y_s[i] = (float)Y[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(float)), NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenY*sizeof(float)), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(float)), X_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(float)), Y_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSaxpy(N, alpha, bufX, 0, incX, bufY, 0, incY, 1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSaxpy() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(float)),
                                    Y_s, 0, NULL, NULL);
    }

    /* Fresh double precision Y */
    for (i = 0; i < lenY; ++i)
        Y[i] = (double)Y_s[i];

    /* Free single precision */
    free(X_s);
    free(Y_s);

#else
    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, (lenX*sizeof(double)), NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenY*sizeof(double)), NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0, (lenX*sizeof(double)), X, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(double)), Y, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDaxpy( N, alpha, bufX, 0, incX, bufY, 0, incY, 1, &queue, 0, NULL, &event); 
    if (err != CL_SUCCESS) {
        printf("clAmdBlasDaxpy() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0, (lenY*sizeof(double)),
                                    Y, 0, NULL, NULL);
    }
#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufY);
    clReleaseMemObject(bufX);
}
                 

void cblas_cswap(const int N, void *X, const int incX,
                 void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ccopy(const int N, const void *X, const int incX,
                 void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_caxpy(const int N, const void *alpha, const void *X,
                 const int incX, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_zswap(const int N, void *X, const int incX,
                 void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zcopy(const int N, const void *X, const int incX,
                 void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zaxpy(const int N, const void *alpha, const void *X,
                 const int incX, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 





void cblas_srotmg(float *d1, float *d2, float *b1, const float b2, float *P)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_srot(const int N, float *X, const int incX,
                float *Y, const int incY, const float c, const float s)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_srotm(const int N, float *X, const int incX,
                float *Y, const int incY, const float *P)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                

void cblas_drotmg(double *d1, double *d2, double *b1, const double b2, double *P)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_drot(const int N, double *X, const int incX,
                double *Y, const int incY, const double c, const double s)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_drotm(const int N, double *X, const int incX,
                double *Y, const int incY, const double *P)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                





void cblas_sscal(const int N, const float alpha, float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_dscal(const int N, const double alpha, double *X, const int incX)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufX;
    int lenX = 1 + (N-1)*abs(incX);

#ifdef DOUBLE_AS_SINGLE

    /* Create a single precision copy */
    int i;

    float *X_s = calloc(1, lenX * sizeof(float));

    for (i = 0; i < lenX; ++i)
        X_s[i] = (float)X[i];

    /* Prepare OpenCL memory objects and place vectors inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_WRITE, (lenX * sizeof(float)),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
        (lenX * sizeof(float)), X_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSscal( N, alpha, bufX, 0, incX, 1, &queue, 0, NULL, &event);

    if (err != CL_SUCCESS) {
        printf("clAmdBlasSscal() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufX, CL_TRUE, 0, (lenX * sizeof(float)),
                                  X_s, 0, NULL, NULL);
    }   

    /* Refresh double precision vector Y */
    for (i = 0; i < lenX; ++i)
        X[i] = (double)X_s[i];

    /* Free single precision copy */
    free(X_s);

#else

    /* Prepare OpenCL memory objects and place vectors inside them. */
    bufX = clCreateBuffer(ctx, CL_MEM_READ_WRITE, ( lenX * sizeof(double)),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
        ( lenX * sizeof(double)), X, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDscal( N, alpha, bufX, 0, incX, 1, &queue, 0, NULL, &event);

    if (err != CL_SUCCESS) {
        printf("clAmdBlasDscal() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufX, CL_TRUE, 0, (lenX * sizeof(double)),
                                  X, 0, NULL, NULL);
    }

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufX);
}

void cblas_cscal(const int N, const void *alpha, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_zscal(const int N, const void *alpha, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_csscal(const int N, const float alpha, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_zdscal(const int N, const double alpha, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}

void cblas_sgemv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const float alpha, const float *A, const int lda,
                 const float *X, const int incX, const float beta,
                 float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_sgbmv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const int KL, const int KU, const float alpha,
                 const float *A, const int lda, const float *X,
                 const int incX, const float beta, float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_strmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const float *A, const int lda,
                 float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_stbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const float *A, const int lda,
                 float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_stpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const float *Ap, float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_strsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const float *A, const int lda, float *X,
                 const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_stbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const float *A, const int lda,
                 float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_stpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const float *Ap, float *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_dgemv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const double alpha, const double *A, const int lda,
                 const double *X, const int incX, const double beta,
                 double *Y, const int incY)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufA, bufX, bufY;

    enum clAmdBlasOrder order = Order - 101;
    enum clAmdBlasTranspose transA = TransA - 111;

#ifdef DOUBLE_AS_SINGLE

    /* Create a single precision copy */
    int i;

    float *A_s = calloc(1, M * N * sizeof(float));
    float *X_s = calloc(1, N * sizeof(float));
    float *Y_s = calloc(1, M * sizeof(float));

    for (i = 0; i < M * N; ++i)
        A_s[i] = (float)A[i];
    for (i = 0; i < N; ++i)
        X_s[i] = (float)X[i];
    for (i = 0; i < M; ++i)
        Y_s[i] = (float)Y[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * N * sizeof(float),
                          NULL, &err);
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, N * sizeof(float),
                          NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * sizeof(float),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * N * sizeof(float), A_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
        N * sizeof(float), X_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0,
        M * sizeof(float), Y_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSgemv(order, transA, M, N, (float)alpha, bufA, lda, bufX, 0, incX,
        (float)beta, bufY, 0, incY, 1, &queue, 0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSgemv() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

    }

    /* Refresh single precision vector Y */
    err = clEnqueueReadBuffer(queue, bufY, CL_TRUE, 0,
        M * sizeof(float), Y_s, 0, NULL, NULL);

    /* Refresh double precision vector Y */
    for (i = 0; i < M; ++i)
        Y[i] = (double)Y_s[i];

    /* Free single precision copy */
    free(A_s);
    free(X_s);
    free(Y_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * N * sizeof(*A),
                          NULL, &err);
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, N * sizeof(*X),
                          NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * sizeof(*Y),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * N * sizeof(*A), A, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
        N * sizeof(*X), X, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0,
        M * sizeof(*Y), Y, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSgemv(order, transA, M, N, alpha, bufA, lda, bufX, 0, incX,
        beta, bufY, 0, incY, 1, &queue, 0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSgemv() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

    }

    /* Refresh vector Y */
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0,
        M * sizeof(*Y), Y, 0, NULL, NULL);
#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufY);
    clReleaseMemObject(bufX);
    clReleaseMemObject(bufA);
}
                 
void cblas_dgbmv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const int KL, const int KU, const double alpha,
                 const double *A, const int lda, const double *X,
                 const int incX, const double beta, double *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dtrmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const double *A, const int lda,
                 double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dtbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const double *A, const int lda,
                 double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dtpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const double *Ap, double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dtrsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const double *A, const int lda, double *X,
                 const int incX)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufA, bufX;

    enum clAmdBlasOrder order = Order - 101;
    enum clAmdBlasUplo uploA = Uplo - 121;
    enum clAmdBlasTranspose transA = TransA - 111;
    enum clAmdBlasDiag diagA = Diag == CblasNonUnit ? 1 : 0;

#ifdef DOUBLE_AS_SINGLE

    int i;

    float *A_s = calloc(1, N * N * sizeof(float));
    float *X_s = calloc(1, N * sizeof(float));

    for (i = 0; i < N * N; ++i)
        A_s[i] = (float)A[i];
    for (i = 0; i < N; ++i)
        X_s[i] = (float)X[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, N * N * sizeof(float),
                          NULL, &err);
    bufX = clCreateBuffer(ctx, CL_MEM_READ_WRITE, N * sizeof(float),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
                    N * N * sizeof(float), A_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
                    N * sizeof(float), X_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasStrsv(order, uploA, transA, diagA, N,
                         bufA, 0, lda, bufX, 0, incX, 1, &queue, 0, NULL, &event);
                         
    if (err != CL_SUCCESS) {
        printf("clAmdBlasStrsv() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufX, CL_TRUE, 0, N * sizeof(float),
                                  X_s, 0, NULL, NULL);
        }

    /* Refresh double precison */
    for (i = 0; i < N; ++i)
        X[i] = (double)X_s[i];    

    /* Free */
    free(A_s);
    free(X_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, N * N * sizeof(double),
                          NULL, &err);
    bufX = clCreateBuffer(ctx, CL_MEM_READ_WRITE, N * sizeof(double),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
                    N * N * sizeof(double), A, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
                    N * sizeof(double), X, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDtrsv(order, uploA, transA, diagA, N,
                         bufA, 0, lda, bufX, 0, incX, 1, &queue, 0, NULL, &event);
                         
    if (err != CL_SUCCESS) {
        printf("clAmdBlasDtrsv() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufX, CL_TRUE, 0, N * sizeof(double),
                                  X, 0, NULL, NULL);
        }

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufX);
    clReleaseMemObject(bufA);
}
                 
void cblas_dtbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const double *A, const int lda,
                 double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dtpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const double *Ap, double *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_cgemv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 const void *X, const int incX, const void *beta,
                 void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_cgbmv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const int KL, const int KU, const void *alpha,
                 const void *A, const int lda, const void *X,
                 const int incX, const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctrmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *A, const int lda,
                 void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const void *A, const int lda,
                 void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *Ap, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctrsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *A, const int lda, void *X,
                 const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const void *A, const int lda,
                 void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *Ap, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_zgemv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 const void *X, const int incX, const void *beta,
                 void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zgbmv(const enum CBLAS_ORDER Order,
                 const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const int KL, const int KU, const void *alpha,
                 const void *A, const int lda, const void *X,
                 const int incX, const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztrmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *A, const int lda,
                 void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const void *A, const int lda,
                 void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *Ap, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztrsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *A, const int lda, void *X,
                 const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const int K, const void *A, const int lda,
                 void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                 const int N, const void *Ap, void *X, const int incX)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 





void cblas_ssymv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *A,
                 const int lda, const float *X, const int incX,
                 const float beta, float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ssbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const int K, const float alpha, const float *A,
                 const int lda, const float *X, const int incX,
                 const float beta, float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_sspmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *Ap,
                 const float *X, const int incX,
                 const float beta, float *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_sger(const enum CBLAS_ORDER Order, const int M, const int N,
                const float alpha, const float *X, const int incX,
                const float *Y, const int incY, float *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_ssyr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const float alpha, const float *X,
                const int incX, float *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_sspr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const float alpha, const float *X,
                const int incX, float *Ap)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_ssyr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const float alpha, const float *X,
                const int incX, const float *Y, const int incY, float *A,
                const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_sspr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const float alpha, const float *X,
                const int incX, const float *Y, const int incY, float *A)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                

void cblas_dsymv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *A,
                 const int lda, const double *X, const int incX,
                 const double beta, double *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dsbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const int K, const double alpha, const double *A,
                 const int lda, const double *X, const int incX,
                 const double beta, double *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dspmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *Ap,
                 const double *X, const int incX,
                 const double beta, double *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dger(const enum CBLAS_ORDER Order, const int M, const int N,
                const double alpha, const double *X, const int incX,
                const double *Y, const int incY, double *A, const int lda)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufA, bufX, bufY;

    enum clAmdBlasOrder order = Order - 101;

#ifdef DOUBLE_AS_SINGLE

    /* Create a single precision copy */
    int i;

    float *A_s = calloc(1, M * lda * sizeof(float));
    float *X_s = calloc(1, M * sizeof(float));
    float *Y_s = calloc(1, N * sizeof(float));

    for (i = 0; i < M * lda; ++i)
        A_s[i] = (float)A[i];    
    for (i = 0; i < M; ++i)
        X_s[i] = (float)X[i];
    for (i = 0; i < N; ++i)
        Y_s[i] = (float)Y[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * lda * sizeof(float),
                          NULL, &err);
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, ( 1 + ( M - 1 )*abs( incX ) ) * sizeof(float),
                          NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_ONLY, ( 1 + ( N - 1 )*abs( incY ) ) * sizeof(float),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * lda * sizeof(float), A_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
        ( 1 + ( M - 1 )*abs( incX ) ) * sizeof(float), X_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0,
        ( 1 + ( N - 1 )*abs( incY ) ) * sizeof(float), Y_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSger(order, M, N, alpha, bufX, 0, incX, bufY, 0, incY, 
        bufA, 0, lda, 1, &queue, 0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSger() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufA, CL_TRUE, 0, (M * lda * sizeof(float)),
                                  A_s, 0, NULL, NULL);
    }

    /* Refresh double precision vector Y */
    for (i = 0; i < M * N; ++i)
        A[i] = (double)A_s[i];

    /* Free single precision copy */
    free(A_s);
    free(X_s);
    free(Y_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * lda * sizeof(double),
                          NULL, &err);
    bufX = clCreateBuffer(ctx, CL_MEM_READ_ONLY, ( 1 + ( M - 1 )*abs( incX ) ) * sizeof(double),
                          NULL, &err);
    bufY = clCreateBuffer(ctx, CL_MEM_READ_ONLY, ( 1 + ( N - 1 )*abs( incY ) ) * sizeof(double),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * lda * sizeof(double), A, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufX, CL_TRUE, 0,
        ( 1 + ( M - 1 )*abs( incX ) ) * sizeof(double), X, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufY, CL_TRUE, 0,
        ( 1 + ( N - 1 )*abs( incY ) ) * sizeof(double), Y, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDger(order, M, N, alpha, bufX, 0, incX, bufY, 0, incY, 
        bufA, 0, lda, 1, &queue, 0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasDger() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

        /* Fetch results of calculations from GPU memory. */
        err = clEnqueueReadBuffer(queue, bufA, CL_TRUE, 0, (M * lda * sizeof(double)),
                                  A, 0, NULL, NULL);
    }

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufY);
    clReleaseMemObject(bufX);
    clReleaseMemObject(bufA);
}
                
void cblas_dsyr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const double alpha, const double *X,
                const int incX, double *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_dspr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const double alpha, const double *X,
                const int incX, double *Ap)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_dsyr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const double alpha, const double *X,
                const int incX, const double *Y, const int incY, double *A,
                const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_dspr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const double alpha, const double *X,
                const int incX, const double *Y, const int incY, double *A)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                





void cblas_chemv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const void *alpha, const void *A,
                 const int lda, const void *X, const int incX,
                 const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_chbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const int K, const void *alpha, const void *A,
                 const int lda, const void *X, const int incX,
                 const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_chpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const void *alpha, const void *Ap,
                 const void *X, const int incX,
                 const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_cgeru(const enum CBLAS_ORDER Order, const int M, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_cgerc(const enum CBLAS_ORDER Order, const int M, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_cher(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const float alpha, const void *X, const int incX,
                void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_chpr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const float alpha, const void *X,
                const int incX, void *A)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_cher2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
                const void *alpha, const void *X, const int incX,
                const void *Y, const int incY, void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_chpr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
                const void *alpha, const void *X, const int incX,
                const void *Y, const int incY, void *Ap)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                

void cblas_zhemv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const void *alpha, const void *A,
                 const int lda, const void *X, const int incX,
                 const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zhbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const int K, const void *alpha, const void *A,
                 const int lda, const void *X, const int incX,
                 const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zhpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const int N, const void *alpha, const void *Ap,
                 const void *X, const int incX,
                 const void *beta, void *Y, const int incY)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zgeru(const enum CBLAS_ORDER Order, const int M, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zgerc(const enum CBLAS_ORDER Order, const int M, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zher(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const double alpha, const void *X, const int incX,
                void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_zhpr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                const int N, const double alpha, const void *X,
                const int incX, void *A)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_zher2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
                const void *alpha, const void *X, const int incX,
                const void *Y, const int incY, void *A, const int lda)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_zhpr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
                const void *alpha, const void *X, const int incX,
                const void *Y, const int incY, void *Ap)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                
void cblas_sgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const float alpha, const float *A,
                 const int lda, const float *B, const int ldb,
                 const float beta, float *C, const int ldc)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufA, bufB, bufC;

    enum clAmdBlasOrder order = Order - 101;
    enum clAmdBlasTranspose transA = TransA - 111;
    enum clAmdBlasTranspose transB = TransB - 111;

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * K * sizeof(float),
                          NULL, &err);
    bufB = clCreateBuffer(ctx, CL_MEM_READ_ONLY, K * N * sizeof(float),
                          NULL, &err);
    bufC = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * N * sizeof(float),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * K * sizeof(float), A, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufB, CL_TRUE, 0,
        K * N * sizeof(float), B, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufC, CL_TRUE, 0,
        M * N * sizeof(float), C, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSgemm(order, transA, transB, M, N, K, alpha, bufA,
                         lda, bufB, ldb, beta, bufC, ldc, 1, &queue,
                         0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSgemm() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

    }
    
    /* refresh matrix C */
    err = clEnqueueWriteBuffer(queue, bufC, CL_TRUE, 0,
        M * N * sizeof(*C), C, 0, NULL, NULL);

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufC);
    clReleaseMemObject(bufB);
    clReleaseMemObject(bufA);
}
                 
void cblas_ssymm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const int M, const int N,
                 const float alpha, const float *A, const int lda,
                 const float *B, const int ldb, const float beta,
                 float *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ssyrk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                 const float alpha, const float *A, const int lda,
                 const float beta, float *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ssyr2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const float alpha, const float *A, const int lda,
                  const float *B, const int ldb, const float beta,
                  float *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                  
void cblas_strmm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const float alpha, const float *A, const int lda,
                 float *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_strsm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const float alpha, const float *A, const int lda,
                 float *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_dgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const double alpha, const double *A,
                 const int lda, const double *B, const int ldb,
                 const double beta, double *C, const int ldc)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufA, bufB, bufC;

    enum clAmdBlasOrder order = Order - 101;
    enum clAmdBlasTranspose transA = TransA - 111;
    enum clAmdBlasTranspose transB = TransB - 111;

#ifdef DOUBLE_AS_SINGLE

    /* Create a single precision copy */
    int i;

    float *A_s = calloc(1, M * K * sizeof(float));
    float *B_s = calloc(1, K * N * sizeof(float));
    float *C_s = calloc(1, M * N * sizeof(float));

    for (i = 0; i < M * K; ++i)
        A_s[i] = (float)A[i];
    for (i = 0; i < K * N; ++i)
        B_s[i] = (float)B[i];
    for (i = 0; i < M * N; ++i)
        C_s[i] = (float)C[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * K * sizeof(float),
                          NULL, &err);
    bufB = clCreateBuffer(ctx, CL_MEM_READ_ONLY, K * N * sizeof(float),
                          NULL, &err);
    bufC = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * N * sizeof(float),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * K * sizeof(float), A_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufB, CL_TRUE, 0,
        K * N * sizeof(float), B_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufC, CL_TRUE, 0,
        M * N * sizeof(float), C_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasSgemm(order, transA, transB, M, N, K, (float)alpha, bufA,
                         lda, bufB, ldb, (float)beta, bufC, ldc, 1, &queue,
                         0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSgemm() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

    }
    
    /* refresh single precision matrix C */
    err = clEnqueueReadBuffer(queue, bufC, CL_TRUE, 0,
        M * N * sizeof(float), C_s, 0, NULL, NULL);

    /* And refresh double precision matrix C */
    for (i = 0; i < M * N; ++i)
        C[i] = (double)C_s[i];

    /* Free single precision copy */
    free(A_s);
    free(B_s);
    free(C_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * K * sizeof(double),
                          NULL, &err);
    bufB = clCreateBuffer(ctx, CL_MEM_READ_ONLY, K * N * sizeof(double),
                          NULL, &err);
    bufC = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * N * sizeof(double),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * K * sizeof(double), A, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufB, CL_TRUE, 0,
        K * N * sizeof(double), B, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufC, CL_TRUE, 0,
        M * N * sizeof(double), C, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDgemm(order, transA, transB, M, N, K, alpha, bufA,
                         lda, bufB, ldb, beta, bufC, ldc, 1, &queue,
                         0, NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasSgemm() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);

    }
    
    /* refresh matrix C */
    err = clEnqueueWriteBuffer(queue, bufC, CL_TRUE, 0,
        M * N * sizeof(double), C, 0, NULL, NULL);
#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufC);
    clReleaseMemObject(bufB);
    clReleaseMemObject(bufA);

}
                 
void cblas_dsymm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const int M, const int N,
                 const double alpha, const double *A, const int lda,
                 const double *B, const int ldb, const double beta,
                 double *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dsyrk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                 const double alpha, const double *A, const int lda,
                 const double beta, double *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dsyr2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const double alpha, const double *A, const int lda,
                  const double *B, const int ldb, const double beta,
                  double *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                  
void cblas_dtrmm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const double alpha, const double *A, const int lda,
                 double *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_dtrsm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const double alpha, const double *A, const int lda,
                 double *B, const int ldb)
{
    /* Init context if neccesary */
    ContextInit();

    cl_mem bufA, bufB;

    enum clAmdBlasOrder order = Order - 101;
    enum clAmdBlasUplo uploA = Uplo - 121;
    enum clAmdBlasTranspose transA = TransA - 111;
    enum clAmdBlasDiag diagA = Diag == CblasNonUnit ? 1 : 0;
    enum clAmdBlasSide side = Side - 141;

#ifdef DOUBLE_AS_SINGLE

    int i;

    float *A_s = calloc(1, M * M * sizeof(float));
    float *B_s = calloc(1, M * N * sizeof(float));

    for (i = 0; i < M * M; ++i)
        A_s[i] = (float)A[i];
    for (i = 0; i < M * N; ++i)
        B_s[i] = (float)B[i];

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * M * sizeof(float),
                          NULL, &err);
    bufB = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * N * sizeof(float),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * M * sizeof(float), A_s, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufB, CL_TRUE, 0,
        M * N * sizeof(float), B_s, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasStrsm(order, side, uploA, transA, diagA, M, N,
                         (float)alpha, bufA, lda, bufB, ldb, 1, &queue, 0,
                         NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasStrsm() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);
    }

    /* Refresh the matrix B_s */
    err = clEnqueueReadBuffer(queue, bufB, CL_TRUE, 0,
        M * N * sizeof(float), B_s, 0, NULL, NULL);

    /* Refresh the matrix B */
    for (i = 0; i < M * N; ++i)
        B[i] = (double)B_s[i];

    /* Free */
    free(A_s);
    free(B_s);

#else

    /* Prepare OpenCL memory objects and place matrices inside them. */
    bufA = clCreateBuffer(ctx, CL_MEM_READ_ONLY, M * M * sizeof(double),
                          NULL, &err);
    bufB = clCreateBuffer(ctx, CL_MEM_READ_WRITE, M * N * sizeof(double),
                          NULL, &err);

    err = clEnqueueWriteBuffer(queue, bufA, CL_TRUE, 0,
        M * M * sizeof(double), A, 0, NULL, NULL);
    err = clEnqueueWriteBuffer(queue, bufB, CL_TRUE, 0,
        M * N * sizeof(double), B, 0, NULL, NULL);

    /* Call clAmdBlas function. */
    err = clAmdBlasDtrsm(order, side, uploA, transA, diagA, M, N,
                         alpha, bufA, lda, bufB, ldb, 1, &queue, 0,
                         NULL, &event);
    if (err != CL_SUCCESS) {
        printf("clAmdBlasDtrsm() failed with %d\n", err);
        ret = 1;
    }
    else {
        /* Wait for calculations to be finished. */
        err = clWaitForEvents(1, &event);
    }


    /* Refresh the matrix B */
    err = clEnqueueWriteBuffer(queue, bufB, CL_TRUE, 0,
        M * N * sizeof(double), B, 0, NULL, NULL);

#endif

    /* Release OpenCL memory objects. */
    clReleaseMemObject(bufB);
    clReleaseMemObject(bufA);
}
                 

void cblas_cgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const void *alpha, const void *A,
                 const int lda, const void *B, const int ldb,
                 const void *beta, void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_csymm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 const void *B, const int ldb, const void *beta,
                 void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_csyrk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                 const void *alpha, const void *A, const int lda,
                 const void *beta, void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_csyr2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const void *alpha, const void *A, const int lda,
                  const void *B, const int ldb, const void *beta,
                  void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                  
void cblas_ctrmm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 void *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ctrsm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 void *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 

void cblas_zgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const void *alpha, const void *A,
                 const int lda, const void *B, const int ldb,
                 const void *beta, void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zsymm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 const void *B, const int ldb, const void *beta,
                 void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zsyrk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                 const void *alpha, const void *A, const int lda,
                 const void *beta, void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zsyr2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const void *alpha, const void *A, const int lda,
                  const void *B, const int ldb, const void *beta,
                  void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                  
void cblas_ztrmm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 void *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_ztrsm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_DIAG Diag, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 void *B, const int ldb)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 





void cblas_chemm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 const void *B, const int ldb, const void *beta,
                 void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_cherk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                 const float alpha, const void *A, const int lda,
                 const float beta, void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_cher2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const void *alpha, const void *A, const int lda,
                  const void *B, const int ldb, const float beta,
                  void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                  
void cblas_zhemm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const int M, const int N,
                 const void *alpha, const void *A, const int lda,
                 const void *B, const int ldb, const void *beta,
                 void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zherk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                 const double alpha, const void *A, const int lda,
                 const double beta, void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
                 
void cblas_zher2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const void *alpha, const void *A, const int lda,
                  const void *B, const int ldb, const double beta,
                  void *C, const int ldc)
{
    __NOT_IMPL__
    /* Init context if neccesary */
    ContextInit();
}
