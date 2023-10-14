#include "Edge.h"

Edge::Edge(std::string origin, std::string destination, float weight) {
  origin = origin;
  destination = destination;
  weight = weight;
}

std::string Edge::getOrigin() { return origin; }

std::string Edge::getDestination() { return destination; }

float Edge::getWeight() { return weight; }
