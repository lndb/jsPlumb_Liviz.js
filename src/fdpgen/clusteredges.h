/* $Id: clusteredges.h,v 1.5 2011/01/25 16:30:48 ellson Exp $ $Revision: 1.5 $ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

#ifndef CLUSTEREDGES_H
#define CLUSTEREDGES_H

#include <render.h>
#include <adjust.h>

    extern int compoundEdges(graph_t * g, expand_t* pm, int splines);

#endif

#ifdef __cplusplus
}
#endif
