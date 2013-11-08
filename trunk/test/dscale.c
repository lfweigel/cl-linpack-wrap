#include <stdio.h>
#include <cl_linpack_wrap.h>

static const enum CBLAS_ORDER order = CblasRowMajor;

static const size_t N = 5;
static const double alpha = 10;
static double X[] = {
    11,
    21,
    31,
    41,
    51,
};
static const int incx = 1;

static void
printResult(void)
{
    size_t i;
    printf("\nResult:\n");

    for (i = 0; i < N; i++) {
			printf("\t%f", X[i] );
		printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    cblas_dscal(N, alpha, X, incx);
    printResult();

    ContextDestroy();

    return 0;
}
