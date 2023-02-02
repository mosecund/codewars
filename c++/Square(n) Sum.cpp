//
// Created by Ismael Secundar on 02/02/2023.
//

#include <vector>

int square_sum(const std::vector<int>& numbers)
{

  int result = 0;
  for (unsigned i = 0; i < numbers.size(); i++)
  {
    result += (numbers[i]*numbers[i]);
  }

  return result;
}