#ifndef _GRAPH_
#define _GRAPH_

#include "edge.h"
#include "vertex.h"

class Graph {
public:
  Graph(std::vector<Edge> _edges);

private:
  std::vector<Edge> edges;
};

#endif /* _GRAPH_ */
