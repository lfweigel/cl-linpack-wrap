CC = gcc
CFLAGS = -Wall -Werror -O3 -g
INCLUDES = -I../src -I/opt/clAmdBlas-1.10.321/include/ -I/opt/AMDAPP/include/
LD_FLAGS = -L../lib/.libs/ -L/opt/clAmdBlas-1.10.321/lib32/
LDADD = -lcl-linpack -lclAmdBlas

TARGET = daxpy dcopy dgemm dgemv dger dscale dswap dtrsm dtrsv idamax

all: $(TARGET)

%: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LD_FLAGS) $< -o $@ $(LDADD)

clean:
	rm -rf $(TARGET)