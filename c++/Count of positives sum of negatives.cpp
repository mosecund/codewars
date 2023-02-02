//
// Created by Ismael Secundar on 02/02/2023.
//

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int negative_sum=0;
  int numbers_of_positive=0;
  std::vector<int> tmp;
  if (input.empty())
    return input;
  for (unsigned long i = 0; i < input.size(); ++i) {
    if (input[i]>0)
      numbers_of_positive+=1;

    else
      negative_sum-=input[i];
  }

  tmp.push_back(numbers_of_positive);
  tmp.push_back(-negative_sum);

  return tmp;

}