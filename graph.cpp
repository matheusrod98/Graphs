#include <iostream>
#include <map>

#include "edge.h"
#include "graph.h"
#include "vertex.h"

Graph::Graph(std::vector<std::vector<std::string>> _graphMatrix) {
  AdjacencyList adjacencyList;

  for (int i = 0; i < _graphMatrix.size(); i++) {
    std::vector<std::map<Vertex, float>> vertexAdjacences;
    for (int j = 0; j <= _graphMatrix[i].size(); j++) {
      if (_graphMatrix[i][j] == _graphMatrix[i][0]) {
        Vertex vertex(_graphMatrix[i][j]);
        std::map<Vertex, float> vertexAdjacency;

        // std::cout << "0: " << stof(_graphMatrix[i][0]) << std::endl;
        // std::cout << "1: " << stof(_graphMatrix[i][1]) << std::endl;
        // TODO stof was ignoring the rest of the string because 2,2 can't be
        // converted to a float.
        std::cout << "2: " << _graphMatrix[i][2] << std::endl;

        vertexAdjacences.push_back(vertexAdjacency);
      }
    }
    // adjacencyList[_graphMatrix[i][0]] = vertexAdjacences;
  }
}

// void Graph::printAdjacencyList() {
//
//   for (auto adjacencyListIterator : adjacencyList) {
//     std::cout << "Entered for loop" << std::endl;
//     for (int vertexAdjacencyIndex = 0;
//          vertexAdjacencyIndex < adjacencyListIterator.second.size();
//          vertexAdjacencyIndex++) {
//       for (auto vertexIterator :
//            adjacencyListIterator.second[vertexAdjacencyIndex]) {
//         std::cout << vertexIterator.first.getLabel() << vertexIterator.second
//                   << " ";
//       }
//       std::cout << std::endl;
//     }
//   }
// }
