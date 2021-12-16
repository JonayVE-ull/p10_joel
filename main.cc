#include <iostream>
#include <string>
#include "funciones.h"

int main(int argc, char* argv[]){
  std::string text_File{argv[1]};
  Search(text_File);
  return 0;
}