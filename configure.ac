AC_INIT([clblas_wrapper], [0.1])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([-Wall -Werror])
AM_PROG_AS
AC_PROG_CC
AC_PROG_CXX
AC_PROG_INSTALL

# Silent rules if supported
ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

# Libtool
LT_INIT
AC_PROG_LIBTOOL

##################
# Test AMD OpenCL
##################
have_amd_opencl=no

if test "x$AMDAPPSDKROOT" != "x"
then
	# Use temporary CFLAGS, LDFLAGS
	saved_cflags="$CFLAGS"
	saved_ldflags="$LDFLAGS"
	saved_libs="$LIBS"
	CFLAGS="-I$AMDAPPSDKROOT/include"
	LDFLAGS="-L$AMDAPPSDKROOT/lib/x86 -L$AMDAPPSDKROOT/lib/x86_64"
	LIBS="-lOpenCL"

	# Try program
	AC_LINK_IFELSE(
	[
		AC_LANG_PROGRAM(
			[[#include <CL/cl.h>]],
			[[
				cl_int ret;
				cl_platform_id platform;
				cl_uint num_platforms;
				ret = clGetPlatformIDs(1, &platform, &num_platforms);
			        return CL_SUCCESS;
			]]
		)
	],
	[
		have_amd_opencl=yes
	])

	# Restore original CFLAGS, LDFLAGS, LIBS
	CFLAGS="$saved_cflags"
	LDFLAGS="$saved_ldflags"
	LIBS="$saved_libs"
fi

# Warning if not
if test "x$have_amd_opencl" = "xno"
then
	AC_MSG_WARN([
	
	The AMD OpenCL SDK is not presently installed in your system, as
	detected by the absence of the AMDAPPSDKROOT environment variable. The
	headers and libraries provided by this package are needed to build the
	Valar benchmark. Otherwise the AMD version won't be build.
	])
fi

######################
# Test AMD OpenCL BLAS
######################
have_amd_cl_blas=no

if test "x$AMDBLASROOT" != "x"
then
	# Use temporary CFLAGS, LDFLAGS
	saved_cflags="$CFLAGS"
	saved_ldflags="$LDFLAGS"
	saved_libs="$LIBS"
	CFLAGS="-I$AMDAPPSDKROOT/include -I$AMDBLASROOT/include"
	LDFLAGS="-L$AMDBLASROOT/lib32/ -L$AMDBLASROOT/lib64"
	LIBS="-lclAmdBlas"

	# Try program
	AC_LINK_IFELSE(
	[
		AC_LANG_PROGRAM(
			[[#include <clAmdBlas.h>]],
			[[
			    cl_uint major,minor,patch;
			    clAmdBlasStatus err;
			    err = clAmdBlasGetVersion(&major,&minor,&patch);
			]]
		)
	],
	[
		have_amd_cl_blas=yes
	])

	# Restore original CFLAGS, LDFLAGS, LIBS
	CFLAGS="$saved_cflags"
	LDFLAGS="$saved_ldflags"
	LIBS="$saved_libs"
fi

# Warning if not
if test "x$have_amd_cl_blas" = "xno"
then
	AC_MSG_WARN([
	
	The AMD OpenCL BLAS library is not presently installed in your system, as
	detected by the absence of the AMDBLASROOT environment variable. The
	headers and libraries provided by this package are needed.
	])
fi

AM_CONDITIONAL(BUILD_CLLINPACKWRAP, test x$have_amd_opencl = xyes -a x$have_amd_cl_blas = xyes)
if(test x$have_amd_opencl = xyes -a x$have_amd_cl_blas = xyes)
then
	AC_DEFINE(BUILD_CLLINPACKWRAP, [1])
	CLLINPACKWRAP_LDFLAGS="-L$AMDBLASROOT/lib32/ -L$AMDBLASROOT/lib64 -L$AMDAPPSDKROOT/lib/x86 -L$AMDAPPSDKROOT/lib/x86_64 -lclAmdBlas -lOpenCL"
	AC_SUBST([CLLINPACKWRAP_LDFLAGS])
	CLLINPACKWRAP_INCLUDES="-I$AMDAPPSDKROOT/include -I$AMDBLASROOT/include"
	AC_SUBST([CLLINPACKWRAP_INCLUDES])
fi


###########
# Makefiles
###########

AC_CONFIG_FILES([
	Makefile
	src/Makefile
])

AC_OUTPUT()
