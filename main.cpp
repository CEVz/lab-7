#include <iostream>
#include <string>
#include <locale>
#include <regex>

#include "rot5_13.h"

int main () {

  std::string decipher;
  std::string encrypt;
  getline(std::cin, encrypt);
  std::locale loc;
  std::string zeroToNine = "0123456789";
  
  rot5_13(encrypt, decipher, zeroToNine);

  return 0;


}
