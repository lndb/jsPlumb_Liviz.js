CC = clang
EM = python C:\emscripten\emcc
CFLAGS = -I. -I.. -I../common -I../gvc -I../pack -I../ortho -I../sparse -I../rbtree -I../sfdpgen -I../pathplan -I../cdt -I../graph -I../cgraph \
       -DHAVE_CONFIG_H
OBJS = adjust.c circuit.c edges.c geometry.c \
	heap.c hedges.c info.c neatoinit.c legal.c lu.c matinv.c \
	memory.c poly.c printvis.c site.c solve.c neatosplines.c stuff.c \
	voronoi.c stress.c kkutils.c matrix_ops.c embed_graph.c dijkstra.c \
	conjgrad.c pca.c closest.c bfs.c constraint.c quad_prog_solve.c \
	smart_ini_x.c constrained_majorization.c opt_arrangement.c \
    overlap.c call_tri.c \
	compute_hierarchy.c delaunay.c multispline.c \
	constrained_majorization_ipsep.c \
	mosek_quad_solve.c quad_prog_vpsc.c

libpathplan-em.bc:
	$(EM) -o libneatogen-em.bc $(CFLAGS) $(OBJS)
	
.PHONY: clean
clean:
	rm -f *.bc
