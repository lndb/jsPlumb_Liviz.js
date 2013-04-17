CC = clang
EM = python C:\emscripten\emcc
CFLAGS = -I. -I.. \
       -DHAVE_CONFIG_H
OBJS = misc.c red_black_tree.c stack.c

librbtree-em.bc:
	$(EM) -o librbtree-em.bc $(CFLAGS) $(OBJS)
	
.PHONY: clean
clean:
	rm -f *.bc
