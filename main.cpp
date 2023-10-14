#include <fstream>
#include <iostream>
#include <vector>

std::vector<std::string> getWords(std::string line, char delimiter) {
  std::vector<std::string> words;
  std::string word;

  for (int i = 0; i < line.size(); i++) {
    if (line[i] == delimiter) {
      words.push_back(word);
      word = "";
    } else {
      word += line[i];
    }
  }
  return words;
}

void printEnlacesFromFile(std::string filename) {
  std::ifstream fin;
  std::string line;
  std::string enlaces;

  fin.open(filename);

  while (!fin.eof()) {
    getline(fin, line);
    if (line.empty())
      continue;

    std::vector<std::string> word = getWords(line, ' ');
    enlaces = word[0] + word[1];

    std::cout << enlaces << std::endl;
  }
}

int main() {
  printEnlacesFromFile("enlaces.csv");
  return 0;
}
