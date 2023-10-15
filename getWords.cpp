#include <iostream>
#include <vector>

std::vector<std::string> getWords(std::string line, char delimiter) {
  std::vector<std::string> words;
  std::string word;

  for (int i = 0; i < line.size(); i++) {

    if (i == line.size() - 1) {
      words.push_back(word + line[i]);
    } else if (line[i] == delimiter) {
      words.push_back(word);
      word = "";
    } else {
      word += line[i];
    }
  }
  return words;
}
