#include <iostream>
#include <string>
#include <fstream>

int GetKey(std::string word) {
  int key{0};
  char letter = word[word.size() - 2];
  while(letter != 'R') {
    ++key;
    if(letter == 'Z') {
      letter = 'A';
    } else {
      letter = ++letter;
    }
  }
  
  return key;
}

void Descrypt() {
  std::string line;
  int size;
  std::cin >> size;
  for(int i = 0; i < size; ++i) {
    std::cin >> line;
    int key = GetKey(line);
    for(int j = 0; j < line.size() - 1; ++j) {
      if(line[j] + key > 90) {
        line[j] = 64 + (line[j] + key - 90);
      } else {
        line[j] += key; 
      }
    }
    std::cout << line.substr(0,line.size()-1) << std::endl;
  }
}

int main(int argc, char* argv[]) {
  Descrypt();
  return 1;
}