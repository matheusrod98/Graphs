#include <string>

class Edge {
public:
  // TODO: Use generics wherever possible, make to program work with any type of
  // edge.
  Edge(std::string origin, std::string destination, float weight);
  std::string getOrigin();
  std::string getDestination();
  float getWeight();

private:
  std::string origin;
  std::string destination;
  float weight;
};
