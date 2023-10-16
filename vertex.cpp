#include "vertex.h"

Vertex::Vertex(std::string _label) { label = _label; }

std::string Vertex::getLabel() const { return label; }
