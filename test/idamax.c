#include <stdio.h>
#include <cl_linpack_wrap.h>

static const int N = 7;
static double X[] = {
    1,
    2,
    -11,
    17,
    5,
    6,
    800,
    10
};
static const int incx = 1;
static unsigned int indexMax;

int main(int argc, char const *argv[])
{

	indexMax = (int)(cblas_idamax(N, X, incx));

	ContextDestroy();
	/* code */
	return 0;
}