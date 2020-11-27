#include <iostream>
#include <string>

#include "rot5_13.h"

int main () {

  std::string decipher;
  std::string encrypt;
  getline(std::cin, encrypt);
  test();
  rot_13(encrypt);

  

  return 0;


}
