#include <iostream>
#include <locale>

void rot5_rot13(char& ch) {

   // Stub — Do nothing...
   ch = ch; // This “do nothing” statement is here to stop g++ from
            // issuing 'warning: unused parameter ‘ch’'.
}

void rot_13(std::string encrypt, std::string decipher){

  std::locale loc;
  int key = 13;

  for (std::string::size_type i = 0; i < encrypt.length(); i++){
    encrypt[i] = std::toupper(encrypt[i], loc);
  }

  std::cout << encrypt << std::endl;

  for (int i = 0; i < encrypt.length(); i++){
    int temp = encrypt[i] + key;
    if (encrypt[i] == 32){
      decipher += " ";
    }
    else if (temp > 90){
      temp -= 26;
      decipher += (char)temp;
    }
    else {
      decipher += (char)temp;
    }
  }

  std::cout << decipher << std::endl;
  
}

void test(){

  std::cout << "hello";

}
