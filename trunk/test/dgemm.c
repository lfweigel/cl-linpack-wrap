#include <stdio.h>
#include <cl_linpack_wrap.h>

#define M  4
#define N  3
#define K  5

static const enum CBLAS_ORDER order = CblasRowMajor;

static const double alpha = 10;

static const enum CBLAS_TRANSPOSE transA = CblasNoTrans;
static const double A[M*K] = {
    11, 12, 13, 14, 15,
    21, 22, 23, 24, 25,
    31, 32, 33, 34, 35,
    41, 42, 43, 44, 45,
};
static const int lda = K;        /* i.e. lda = K */

static const enum CBLAS_TRANSPOSE transB = CblasNoTrans;
static const double B[K*N] = {
    11, 12, 13,
    21, 22, 23,
    31, 32, 33,
    41, 42, 43,
    51, 52, 53,
};
static const int ldb = N;        /* i.e. ldb = N */

static const double beta = 20;

static double C[M*N] = {
    11, 12, 13,
    21, 22, 23,
    31, 32, 33,
    41, 42, 43, 
};
static const int ldc = N;        /* i.e. ldc = N */

static const int off  = 1;
static const int offA = K + 1;   /* K + off */
static const int offB = N + 1;   /* N + off */
static const int offC = N + 1;   /* N + off */

static void
printResult(const char* str)
{
    size_t i, j, nrows;

    printf("%s:\n", str);

    nrows = (sizeof(C) / sizeof(double)) / ldc;
    for (i = 0; i < nrows; i++) {
        for (j = 0; j < ldc; j++) {
            printf("%d ", (int)C[i * ldc + j]);
        }
        printf("\n");
    }
}


int main(int argc, char const *argv[])
{
	/* Call */
	cblas_dgemm(order, transA, transB, M, N, K, alpha, A, lda, B, ldb, beta, C, ldc);
    printResult("clAmdBlasSgemm Result");

    /* Destroy CL context */
	ContextDestroy();

	return 0;
}