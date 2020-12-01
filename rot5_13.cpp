#include <iostream>

void rot5_rot13(char& ch) {

  if (!isalpha(ch) && !isdigit(ch)){
    return;
  }
  
  if (isalpha(ch)){
    if (ch <= 90) { // ch is upper case
        ch = ch + 13;
        if (ch > 90) { // ch + 13 went beyond Z
            ch = 64 + (ch - 90);
        }
    }
    else if (ch >= 97) { // ch is lower case
        ch = ch + 13;
        if (ch > 122 || ch < 0) { // ch went beyong z
            ch = 96 + (ch - 122);
        }
    }
  }
    
  if (isdigit(ch)){
     ch = ch + 5;
     if (ch > 57){
       ch = 47 + (ch - 57);
     }
  }

}
