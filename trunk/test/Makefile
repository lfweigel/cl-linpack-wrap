CC = gcc
CFPLAGS = -Wall -Werror -O3 -g
INCLUDES = -I../src -I/opt/clAmdBlas-1.10.321/include/ -I/opt/AMDAPP/include/
LD_FLAGS = -L../lib/.libs/ -L/opt/clAmdBlas-1.10.321/lib32/
LDADD = -lcl-linpack -lclAmdBlas

target = dgemm

$(target): $(target).c
	$(CC) $(CFPLAGS) $(INCLUDES) $(LD_FLAGS) $< -o $@ $(LDADD)

clean:
	rm -rf $(target)