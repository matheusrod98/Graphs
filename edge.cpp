#include "edge.h"

Edge::Edge(Vertex *_origin, Vertex *_destination, float _weight) {
  origin = _origin;
  destination = _destination;
  weight = _weight;
}
