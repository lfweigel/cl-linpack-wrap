if BUILD_CLLINPACKWRAP

lib_LTLIBRARIES = $(top_builddir)/lib/libcl-linpack.la

__top_builddir__lib_libcl_linpack_la_LDFLAGS = -version-info 1:0:0 @CLLINPACKWRAP_LDFLAGS@

__top_builddir__lib_libcl_linpack_la_CFLAGS = @CLLINPACKWRAP_INCLUDES@

__top_builddir__lib_libcl_linpack_la_SOURCES = \
	cl_linpack_wrap.c \
	cl_linpack_wrap.h

endif
