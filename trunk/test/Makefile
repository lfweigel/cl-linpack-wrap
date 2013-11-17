CBLASROOT = ../../clBLAS
CC = gcc
CFLAGS = -Wall -Werror -O3 -g
INCLUDES = -I../src -I$(CBLASROOT)/src -I/opt/AMDAPP/include/
LD_FLAGS = -L../lib/.libs/ -L$(CBLASROOT)/src/library
LDADD = -lcl-linpack -lclBLAS

TARGET = daxpy dcopy dgemm dgemv dger dscale dswap dtrsm dtrsv idamax

all: $(TARGET)

%: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LD_FLAGS) $< -o $@ $(LDADD)

clean:
	rm -rf $(TARGET)
