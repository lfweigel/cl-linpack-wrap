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

###############
# Debug/Profile
###############

debug=false
CFLAGS="-msse2 -O3 -std=gnu99 -DNDEBUG"
CXXFLAGS="-std=gnu++0x -O3 -DNDEBUG"
AC_ARG_ENABLE(debug,
[  --enable-debug    Turn on debugging],
[
	case "${enableval}" in
	yes)
		debug=true
		
		# Add flag '-Wno-error=deprecated-declarations' only if it is supported.
		# This flag prevents warnings caused by newer GTK versions that would cause with -Werror
		CXXFLAGS="-msse2 -std=gnu++0x -Wall -Werror -g -O0"
		saved_flags="-msse2 -Wall -Werror -DMHANDLE -g -O0 -std=gnu99"
		CFLAGS="-Wno-error=deprecated-declarations"
		AC_MSG_CHECKING([whether CC supports -Wno-error=deprecated-declarations])
		AC_COMPILE_IFELSE([AC_LANG_PROGRAM([])],
				[ AC_MSG_RESULT([yes]) ]
				[ saved_flags="$saved_flags -Wno-error=deprecated-declarations" ],
				[ AC_MSG_RESULT([no]) ]
			)
		CFLAGS="$saved_flags"
		;;
	no)
		;;
	*)
		AC_MSG_ERROR(bad value ${enableval} for --enable-debug)
		;;
	esac
],
[])

profile=false
AC_ARG_ENABLE(profile,
[  --enable-profile    Turn on profiling],
[
	case "${enableval}" in
	yes)
		CFLAGS+=" -pg"
		profile=true
		;;
	no)
		;;
	*)
		AC_MSG_ERROR(bad value ${enableval} for --enable-profile)
		;;
	esac
],
[])

AC_ARG_ENABLE(no-strict-aliasing,
[  --enable-no-strict-aliasing    Allow for no strict aliasing],
[
	case "${enableval}" in
	yes)
		CFLAGS+=" -fno-strict-aliasing"
		;;
	no)
		;;
	*)
		AC_MSG_ERROR(bad value ${enableval} for --enable-no-strict-aliasing)
		;;
	esac
],
[])
AC_SUBST([CFLAGS])


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
# Test CL BLAS
######################
have_cl_blas=no

if test "x$CLBLASROOT" != "x"
then
	# Use temporary CFLAGS, LDFLAGS
	saved_cflags="$CFLAGS"
	saved_ldflags="$LDFLAGS"
	saved_libs="$LIBS"
	CFLAGS="-I$AMDAPPSDKROOT/include -I$CLBLASROOT/src"
	LDFLAGS="-L$CLBLASROOT/src/library/"
	LIBS="-lclBLAS"

	# Try program
	AC_LINK_IFELSE(
	[
		AC_LANG_PROGRAM(
			[[#include <clBLAS.h>]],
			[[
			    cl_uint major,minor,patch;
			    clblasStatus err;
			    err = clblasGetVersion(&major,&minor,&patch);
			]]
		)
	],
	[
		have_cl_blas=yes
	])

	# Restore original CFLAGS, LDFLAGS, LIBS
	CFLAGS="$saved_cflags"
	LDFLAGS="$saved_ldflags"
	LIBS="$saved_libs"
fi

# Warning if not
if test "x$have_cl_blas" = "xno"
then
	AC_MSG_WARN([
	
	The CL BLAS library is not presently installed in your system, as
	detected by the absence of the CLBLASROOT environment variable. The
	headers and libraries provided by this package are needed.
	])
fi


AM_CONDITIONAL(BUILD_CLLINPACKWRAP, test x$have_amd_opencl = xyes -a x$have_cl_blas = xyes)
if(test x$have_amd_opencl = xyes -a x$have_cl_blas = xyes)
then
	AC_DEFINE(BUILD_CLLINPACKWRAP, [1])
	CLLINPACKWRAP_LDFLAGS="-L$CLBLASROOT/src/library -L$AMDAPPSDKROOT/lib/x86 -L$AMDAPPSDKROOT/lib/x86_64 -lclBLAS -lOpenCL"
	AC_SUBST([CLLINPACKWRAP_LDFLAGS])
	CLLINPACKWRAP_INCLUDES="-I$AMDAPPSDKROOT/include -I$CLBLASROOT/src"
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
