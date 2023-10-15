#ifndef _EDGE_
#define _EDGE_

#include <string>

#include "vertex.h"

class Edge {
public:
  // TODO: Use generics wherever possible, make to program work with any type of
  // edge.
  Edge(Vertex *_origin, Vertex *_destination, float _weight);

private:
  Vertex *origin;
  Vertex *destination;
  float weight;
};

#endif /* _EDGE_ */
