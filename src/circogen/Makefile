CC = clang
EM = python C:\emscripten\emcc
EMFLAGS = -s EXPORTED_FUNCTIONS="[\"_finalizeGVContext\",\"_prepareGVContext\",\"_getFirstNode\",\"_getNextNode\",\"_getCurentGraph\",\"_beginGVJob\",\"_testCountNodes\",\"_countEdges\",\"_extractGraph\",\"_runDotLayout\",\"_getNodeName\",\"_getGraphWidth\",\"_getGraphHeight\",\"_getEdgeColor\",\"_extractRanks\",\"_extractEdgesEarly\",\"_getEdgeLabel\"]"
CFLAGS = -I. -I.. -I../common -I../gvc -I../pathplan -I../cdt -I../graph -I../neatogen -I../sparse -I../pack -I../sfdpgen \
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

DOTOBJS = circularinit.c nodelist.c block.c edgelist.c \
	      circular.c deglist.c blocktree.c blockpath.c \
	      circpos.c nodeset.c

circogen-em.js: circogen.bc
	$(EM) -o circogen-em.js circogen.bc $(LIBS) $(EMFLAGS)

circogen.bc:
	$(EM) -o circogen.bc $(CFLAGS) $(DOTOBJS)

.PHONY: clean
clean:
	cd liviz-apis; make clean
	rm -f testrun
	rm -f testrun-2.js
	rm -f *.bc
