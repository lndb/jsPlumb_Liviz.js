CC = clang
EM = python C:\emscripten\emcc
CFLAGS = -I. -I.. -I../.. -I../../common -I../../gvc \
	  -I../../pathplan -I../../cdt -I../../graph -I../../neatogen -I../../fdpgen -I../../dotgen \
	  -DHAVE_CONFIG_H

liviz-apis.bc:
	$(EM) -o liviz-apis.bc $(CFLAGS) liviz-apis.c

.PHONY: clean
clean:
	rm -f *.bc
