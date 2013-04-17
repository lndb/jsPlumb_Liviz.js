CC = clang
EM = python C:\emscripten\emcc
CFLAGS = -I. -I.. -I../common -I../gvc -I../neatogen -I../pack -I../pathplan -I../cdt -I../graph \
       -DHAVE_CONFIG_H
OBJS = fPQ.c intset.c maze.c ortho.c partition.c rawgraph.c sgraph.c trapezoid.c

libortho-em.bc:
	$(EM) -o libortho-em.bc $(CFLAGS) $(OBJS)
	
.PHONY: clean
clean:
	rm -f *.bc
