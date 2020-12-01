#include <iostream>
#include <locale>
#include <regex>

void rot5_rot13(char& ch) {

   // Stub — Do nothing...
   ch = ch; // This “do nothing” statement is here to stop g++ from
            // issuing 'warning: unused parameter ‘ch’'.
}

void rot5_13(std::string encrypt, std::string decipher, std::string zeroToNine){
  
  std::locale loc;
  int key = 13;
  std::string rot5 = "5678901234";
    
  for (std::string::size_type i = 0; i < encrypt.length(); i++){
    encrypt[i] = std::toupper(encrypt[i], loc);
  }
    
  for (int i = 0; i < encrypt.length(); i++){
    int temp = encrypt[i] + key;
    if (isdigit(encrypt[i]) == true){
      for (int j = 0; j < zeroToNine.length(); j++){
	if (encrypt[i] == rot5[j]){
	  decipher += zeroToNine[j];
	}
      }
    }

    else if (encrypt[i] == 32){
      decipher += " ";
    }
    else if (temp > 90){
      temp -= 26;
      decipher += char(temp);
    }
    else{
      decipher += char(temp);
    }
  }
  
  std::cout << decipher << std::endl;

}
