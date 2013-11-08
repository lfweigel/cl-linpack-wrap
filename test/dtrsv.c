#include <stdio.h>
#include <cl_linpack_wrap.h>

static const enum CBLAS_ORDER order = CblasRowMajor;

static const int N = 4;

static const enum CBLAS_TRANSPOSE transA = CblasTrans;
static const enum CBLAS_UPLO uploA = CblasLower;
static const enum CBLAS_DIAG diagA = CblasNonUnit;
static const double A[] = {
    11,  0,  0,  0,
    12, 22,  0,  0,
    13, 23, 33,  0,
    14, 24, 34, 44
};
static const int lda = 4;    /* i.e. lda = N */

static double X[] = {
    11, 
	21, 
	31, 
	41 
};
static const int incx = 1;

static void
printResult(void)
{
    int i;

    printf("Result:\n\n");
    for (i = 0; i < N; i++) {
         printf("%f \n", X[i * incx]);
    }
}

int main(int argc, char const *argv[])
{
	cblas_dtrsv(order, uploA, transA, diagA, N, A, lda, X, incx);
	printResult();

	ContextDestroy();
	
	return 0;
}