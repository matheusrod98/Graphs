#include <fstream>
#include <iostream>
#include <vector>

#include "getWords.h"
#include "graphMatrixBuilder.h"

GraphMatrixBuilder::GraphMatrixBuilder(std::string filename) {
  std::ifstream fin;
  std::string line;

  fin.open(filename);
  while (!fin.eof()) {
    getline(fin, line);
    if (line.empty()) {
      continue;
    }

    std::vector<std::string> words = getWords(line, ' ');
    graphMatrix.push_back(words);
  }
}

std::vector<std::vector<std::string>> GraphMatrixBuilder::getGraphMatrix() {
  return graphMatrix;
}
