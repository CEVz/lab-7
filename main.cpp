#include <iostream>
#include <string>

#include "rot5_13.h"

int main () {

  std::string original;
  getline(std::cin, original);

  for (int i = 0; i < original.length(); i++){
    rot5_rot13(original[i]);
  }

  std::cout << original << std::endl;

}
