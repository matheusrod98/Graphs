#ifndef _GRAPH_MATRIX_BUILDER_
#define _GRAPH_MATRIX_BUILDER_

#include <fstream>
#include <iostream>
#include <vector>

class GraphMatrixBuilder {
public:
  GraphMatrixBuilder(std::string filename);
  std::vector<std::vector<std::string>> getGraphMatrix();

private:
  std::vector<std::vector<std::string>> graphMatrix;
};

#endif /* _GRAPH_MATRIX_BUILDER_ */
