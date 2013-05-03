CC = clang
EM = python C:\emscripten\emcc
EMFLAGS = -s EXPORTED_FUNCTIONS="[\"_finalizeGVContext\",\"_prepareGVContext\",\"_getFirstNode\",\"_getNextNode\",\"_getCurentGraph\",\"_beginGVJob\",\"_testCountNodes\",\"_countEdges\",\"_extractGraph\",\"_runDotLayout\",\"_getNodeName\",\"_getGraphWidth\",\"_getGraphHeight\",\"_getEdgeColor\",\"_extractRanks\",\"_extractEdgesEarly\",\"_getEdgeLabel\"]"
CFLAGS = -I. -I.. -I../common -I../gvc -I../pack -I../ortho -I../sparse -I../rbtree -I../sfdpgen -I../neatogen -I../pathplan -I../cdt -I../graph -I../cgraph \
       -DHAVE_CONFIG_H
	   
LIBS = liviz-apis/liviz-apis.bc \
	 ../common/libcommon-em.bc \
	 ../gvc/libgvc-em.bc \
	 ../graph/libgraph-em.bc \
	 ../cdt/libcdt-em.bc \
	 ../pathplan/libpathplan-em.bc \
	 ../sparse/libsparse-em.bc \
	 ../pack/libpack-em.bc \
	 ../neatogen/libneatogen-em.bc
	   
OBJS = comp.c dbg.c grid.c fdpinit.c layout.c \
	   tlayout.c xlayout.c clusteredges.c

fdpgen-em.js: libfdpgen-em.bc
	$(EM) -o fdpgen-em.js libfdpgen-em.bc $(LIBS) $(EMFLAGS)
	
libfdpgen-em.bc:
	$(EM) -o libfdpgen-em.bc $(CFLAGS) $(OBJS)
	
.PHONY: clean
clean:
	rm -f *.bc
