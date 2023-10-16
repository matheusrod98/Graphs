#include "edge.h"
#include "graph.h"
#include "graphMatrixBuilder.h"
#include "vertex.h"

int main() {

  GraphMatrixBuilder graphMatrixBuilder("graph.txt");
  std::vector<std::vector<std::string>> graphMatrix =
      graphMatrixBuilder.getGraphMatrix();

  for (int i = 0; i < graphMatrix.size(); i++) {
    for (int j = 0; j < graphMatrix[i].size(); j++) {
      std::cout << graphMatrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  Graph *graph = new Graph(graphMatrix);
  return 0;
}
