#ifndef _GRAPH_
#define _GRAPH_

#include <map>

#include "edge.h"
#include "vertex.h"

typedef std::map<Vertex, std::vector<std::map<Vertex, float>>> AdjacencyList;

class Graph {
public:
  Graph(std::vector<std::vector<std::string>> _graphMatrix);

private:
  AdjacencyList adjacencyList;
};

#endif /* _GRAPH_ */
