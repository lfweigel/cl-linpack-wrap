#include <stdio.h>
#include <cl_linpack_wrap.h>

static const int N = 7;
static const double alpha = 10;
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
    15,
    11,
    1,
    2,
    1,
    8,
    1,
};
static const int incy = 1;


static void
printResult(void)
{
    int i;
    printf("\nResult:\n");

    printf("Y\n");
    for (i = 0; i < N; i++) {
            printf("\t%f\n", Y[i]);
    }
}

int main(int argc, char const *argv[])
{
	
	cblas_daxpy(N, alpha, X, incx, Y, incy);
	printResult();

	/* Destroy CL context */
	ContextDestroy();

	return 0;
}