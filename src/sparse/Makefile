CC = clang
EM = python C:\emscripten\emcc
CFLAGS = -I. -I.. -I../common \
       -DHAVE_CONFIG_H
OBJS = SparseMatrix.c general.c BinaryHeap.c IntStack.c

libsparse-em.bc:
	$(EM) -o libsparse-em.bc $(CFLAGS) $(OBJS)
	
.PHONY: clean
clean:
	rm -f *.bc
