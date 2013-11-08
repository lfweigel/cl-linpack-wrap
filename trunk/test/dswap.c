#include <stdio.h>
#include <cl_linpack_wrap.h>

static const int N = 7;

static double X[] = {
    11,
    21,
    31,
    41,
    51,
    61,
    71,
};
static const int incx = 1;

static double Y[] = {
    45,
    23,
    39,
    45,
    50,
    55,
    65,
};
static const int incy = 1;


static void
printResult(void)
{
    int i;
    printf("\nResult:\n");

    printf("X\n");
    for (i = 0; i < N; i++) {
			printf("\t%f\n", X[i]);
    }

    printf("Y\n");
    for (i = 0; i < N; i++) {
            printf("\t%f\n", Y[i]);
    }
}

int main(int argc, char const *argv[])
{
    cblas_dswap(N, X, incx, Y, incy);
    printResult();

    ContextDestroy();

    return 0;
}