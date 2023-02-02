//
// Created by Ismael Secundar on 02/02/2023.
//

#include <iostream>
#include <string>

using namespace std;

class Printer
{
 public:
  Printer();
  static string printerError(const string &s){
    int s_size = s.length();
    int errors(0);
    int current_char(0);
    for (int i = 0; i < s_size; ++i) {
      current_char = (s[i]);

      if (current_char > 109 && current_char <=122){
        errors+=1;}
    }
    return to_string(errors)+"/"+ to_string(s_size);
  };
};