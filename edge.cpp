#include "edge.h"

Edge::Edge(Vertex *origin, Vertex *destination, float weight) {
  this->origin = origin;
  this->destination = destination;
  this->weight = weight;
}
