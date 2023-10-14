#include "Vertex.h"

Vertex::Vertex(std::string name) { label = name; }

std::string Vertex::getLabel() { return label; }

void Vertex::addEdge(Edge edge) { edges.push_back(edge); }
