//
// Created by Ismael Secundar on 02/02/2023.
//

#include <string>
using namespace std ;

string reverseString (string str )
{
  string tmp="";
  for (int i = str.size()-1; i >= 0; i--) {
    tmp+=str[i];
  }
  str=tmp;
  return str ;
}