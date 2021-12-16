#include "funciones.h"
#include <iostream>
#include <ctype.h>
#include <fstream>

bool IsVowel(char letter) {
  letter = tolower(letter);  
  return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}

void Search(const std::string& input_file) {
  std::ifstream file{input_file};
  std::string word, more_vowels, more_consonants;
  int number_of_vowels{0}, number_of_consonants{0};
  while(file >> word) {
    int vowels_aux{0}, consonants_aux{0};
    for(int i = 0; i < word.size(); ++i){
      IsVowel(word[i]) ? ++vowels_aux : ++consonants_aux;
    }
    if (vowels_aux > number_of_vowels) {
      more_vowels = word;
      number_of_vowels = vowels_aux;
    }
    if (consonants_aux > number_of_consonants) {
      more_consonants = word;
      number_of_consonants = consonants_aux;
    } 
  }
  std::cout << "La palabra con más vocales es: '" << more_vowels << "'" << std::endl;
  std::cout << "La palabra con más consonantes es: '" << more_consonants << "'" << std::endl;
}
