//
// Created by Ismael Secundar on 02/02/2023.
//

using namespace std;

string bool_to_word(bool value)
{
  string res = "";
  if (value == true)
  {
    res = "Yes";
  }

  else {res = "No";}

  return res;
}