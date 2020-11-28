#include <iostream>
#include <string>
#include <cctype>
#include <locale>

#include "rot5_13.h"

int main () {

  std::string decipher;
  std::string encrypt;
  getline(std::cin, encrypt);
  std::locale loc;

  //test();
  rot_13(encrypt, decipher);

  //std::locale loc;
  //std::string str="Test String.\n";
  //for (std::string::size_type i=0; i<str.length(); ++i){
  //std::cout << std::toupper(str[i],loc);
  //}

  

  return 0;


}
