CC = clang
EM = python C:\emscripten\emcc
CFLAGS = -I. -I.. -I../common -I../gvc -I../neatogen -I../pathplan -I../cdt -I../graph \
       -DHAVE_CONFIG_H
OBJS = ccomps.c pack.c

libpack-em.bc:
	$(EM) -o libpack-em.bc $(CFLAGS) $(OBJS)
	
.PHONY: clean
clean:
	rm -f *.bc
