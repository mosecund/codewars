//
// Created by Ismael Secundar on 02/02/2023.
//

#include <string>

using namespace std;
std::string fakeBin(std::string str){
  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == '4' || str[i] == '3' || str[i] == '2' ||str[i] == '1' ||str[i] == '0')
      str[i]='0';
    else
      str[i]='1';
  }
  return str;
}