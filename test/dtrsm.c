#include <stdio.h>
#include <cl_linpack_wrap.h>

static const enum CBLAS_ORDER order = CblasRowMajor;
static const enum CBLAS_SIDE side = CblasLeft;

static const int M = 4;
static const int N = 5;

static const double alpha = 10;

static const enum CBLAS_TRANSPOSE transA = CblasNoTrans;
static const enum CBLAS_UPLO uploA = CblasUpper;
static const enum CBLAS_DIAG diagA = CblasNonUnit;
static const double A[] = {
    11, 12, 13, 14,
     0, 22, 23, 24,
     0,  0, 33, 34,
     0,  0,  0, 44
};
static const int lda = 4;        /* i.e. lda = M */

static double B[] = {
    11, 12, 13, 14, 15,
    21, 22, 23, 24, 25,
    31, 32, 33, 34, 35,
    41, 42, 43, 44, 45
};
static const int ldb = 5;        /* i.e. ldb = N */

static const int off  = 1;
static const int offA = 4 + 1;   /* M + off */
static const int offB = 5 + 1;   /* N + off */

static void
printResult()
{
    int i, j, nrows;

    nrows = (sizeof(B) / sizeof(double)) / ldb;
    for (i = 0; i < nrows; i++) {
        for (j = 0; j < ldb; j++) {
            printf("%.5e ", B[i * ldb + j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    cblas_dtrsm(order, side, uploA, transA, diagA, M, N, alpha, A, lda, B, ldb);    
    printResult();

    ContextDestroy();

    return 0;
}