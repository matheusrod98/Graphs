#include <string>
#include <vector>

#include "Edge.h"

class Vertex {
public:
  // TODO: Use generics wherever possible, make to program work with any type of
  // vertex
  Vertex(std::string label);
  void addEdge(Edge edge);
  std::string getLabel();

private:
  std::string label;
  std::vector<Edge> edges;
};
