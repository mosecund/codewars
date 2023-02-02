//
// Created by Ismael Secundar on 02/02/2023.
//

#include <iostream>
#include <string>

using namespace std;

int converter(char roman_char)
{
  switch (roman_char)
  {
    case 'I':
      return 1;
      break;

    case 'V':
      return 5;
      break;

    case 'X':
      return 10;
      break;

    case 'L':
      return 50;
      break;

    case 'C':
      return 100;
      break;

    case 'D':
      return 500;
      break;

    case 'M':
      return 1000;
      break;

    default:
      return 0;
      break;
  }
}
int solution(string roman)
{

  int result = 0;

  for (int i = 0; i < roman.length(); i++)
  {
    if (converter(roman[i]) > converter(roman[i - 1]))
    {
      result += (converter(roman[i]) - converter(roman[i - 1])) - converter(roman[i - 1]);
    }

    else
    {

      result += converter(roman[i]);
    }
  }

  return result;
}