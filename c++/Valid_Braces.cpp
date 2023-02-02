//
// Created by Ismael Secundar on 02/02/2023.
//
#include "iostream"
#include <stack>

bool valid_braces(std::string braces)
{
  std::stack<char> s;
  int size = braces.size();
  for(int i = 0; i < size; i++){
    if(braces[i] == '(' || braces[i] == '{' || braces[i] == '['){
      s.push(braces[i]);
    }
    else if(braces[i] == ')' || braces[i] == '}' || braces[i] == ']'){
      if(s.empty()){
        return false;
      }
      else{

        if(braces[i] == ')' && s.top() == '(' || braces[i] == '}' && s.top() == '{' ||
            braces[i] == ']' && s.top() == '['){
          s.pop();
        }
        else{
          return false;
        }
      }
    }
  }
  return true;
}

int main() {
  std::cout << valid_braces("(){}[]");
  return 0;
}