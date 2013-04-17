CC = clang
EM = python C:\emscripten\emcc
EMFLAGS = -s EXPORTED_FUNCTIONS="[\"_finalizeGVContext\",\"_prepareGVContext\",\"_getFirstNode\",\"_getNextNode\",\"_getCurentGraph\",\"_beginGVJob\",\"_testCountNodes\",\"_countEdges\",\"_extractGraph\",\"_runDotLayout\",\"_getNodeName\",\"_getGraphWidth\",\"_getGraphHeight\",\"_getEdgeColor\",\"_extractRanks\",\"_extractEdgesEarly\",\"_getEdgeLabel\"]"
CFLAGS = -I. -I.. -I../common -I../gvc -I../neatogen -I../sparse -I../rbtree -I../pack -I../pathplan -I../ortho -I../cdt -I../graph -I../dotgen \
       -DHAVE_CONFIG_H
	   
LIBS = liviz-apis/liviz-apis.bc \
	 ../common/libcommon-em.bc \
	 ../gvc/libgvc-em.bc \
	 ../graph/libgraph-em.bc \
	 ../cdt/libcdt-em.bc \
	 ../pathplan/libpathplan-em.bc \
	 ../sparse/libsparse-em.bc \
	 ../pack/libpack-em.bc \
	 ../rbtree/librbtree-em.bc \
	 ../ortho/libortho-em.bc \
	 ../neatogen/libneatogen-em.bc
	 
OBJS = sfdpinit.c spring_electrical.c \
	   LinkedList.c sparse_solve.c post_process.c \
	   stress_model.c uniform_stress.c \
	   QuadTree.c Multilevel.c PriorityQueue.c

sfdpgen-em.js: libsfdpgen-em.bc
	$(EM) -o sfdpgen-em.js libsfdpgen-em.bc $(LIBS) $(EMFLAGS)
	   
libsfdpgen-em.bc:
	$(EM) -o libsfdpgen-em.bc $(CFLAGS) $(OBJS)
		
.PHONY: clean
clean:
	rm -f *.bc
