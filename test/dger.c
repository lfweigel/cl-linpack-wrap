#include <stdio.h>
#include <cl_linpack_wrap.h>

static const enum CBLAS_ORDER order = CblasRowMajor;

static const int M = 5;
static const int N = 5;
static const double alpha = 10;

static double A[] = {
    11, 12, 13, 14, 15,
    21, 22, 23, 24, 25,
    31, 32, 33, 34, 35,
    41, 42, 43, 44, 45,
	81, 22, 33, 14, 75
};
static const int lda = 5;    /* i.e. lda = N */

static const double X[] = {
    11,
    21,
    31,
    41,
    51,
	91,
};
static const int incx = 1;

static const double Y[] = {
    45,
    23,
    39,
    45,
    50,
	10,
};
static const int incy = 1;


static void
printResult(void)
{
    int i, j;
    printf("\nResult:\n");

    for (i = 0; i < M; i++) {
		for(j = 0; j < N; j++)
			printf("\t%f", A[ i*N + j ]);
		printf("\n");
    }
}

int main(int argc, char const *argv[])
{
	cblas_dger(order, M, N, alpha, X, incx, Y, incy, A, lda);
	printResult();

	ContextDestroy();

	return 0;
}