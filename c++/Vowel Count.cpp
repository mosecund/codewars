//
// Created by Ismael Secundar on 02/02/2023.
//

#include <iostream>
#include <string>

using namespace std;
int getCount(string message){

  int compteur(0);
  string vowell("aeiou");

  for (unsigned long i = 0; i < message.length(); i++)
  {
    if (message[i] == 'a' or message[i]=='i' or message[i]=='u' or message[i]=='o' or message[i]=='e')
    {
      compteur++;
    }

  }

  return compteur;
}