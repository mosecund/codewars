//
// Created by Ismael Secundar on 02/02/2023.
//

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
  if ((p1 == "scissors" && p2 == "paper") || (p1 == "paper" && p2 == "rock") || (p1 == "rock" && p2 == "scissors"))
    return "Player 1 won!";

  else if ((p2 == "scissors" && p1 == "paper") || (p2 == "paper" && p1 == "rock") || (p2 == "rock" && p1 == "scissors"))
    return "Player 2 won!";
  else
    return "Draw!";
}