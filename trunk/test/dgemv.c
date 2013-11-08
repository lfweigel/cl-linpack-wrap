#include <stdio.h>
#include <cl_linpack_wrap.h>

static const enum CBLAS_ORDER order = CblasRowMajor;

static const int M = 4;
static const int N = 5;

static const double alpha = 10;

static const enum CBLAS_TRANSPOSE transA = CblasNoTrans;
static const double A[] = {
    11, 12, 13, 14, 15,
    21, 22, 23, 24, 25,
    31, 32, 33, 34, 35,
    41, 42, 43, 44, 45
};
static const int lda = 5;        /* i.e. lda = N */

static const double X[] = {
    11,
    21,
    31,
    41,
    51,
};
static const int incx = 1;

static const double beta = 20;

static double Y[] = {
    11,
    21,
    31,
    41,
};
static const int incy = 1;

static const int off  = 1;
static const int offA = 5 + 1;   /* M + off */
static const int offX = 1;       /* off */
static const int offY = 1;       /* off */

static void
printResult()
{
    int i, nElements;

    nElements = (sizeof(Y) / sizeof(double)) / incy;
    for (i = 0; i < nElements; i++) {
        printf("%d\n", (int)Y[i * incy]);
    }
}

int main(int argc, char const *argv[])
{

	cblas_dgemv(order, transA, M, N, alpha, A, lda, X, incx, beta, Y, incy);
	printResult();

	/* Destroy CL context */
	ContextDestroy();
	
	return 0;
}