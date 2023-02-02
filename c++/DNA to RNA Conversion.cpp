//
// Created by Ismael Secundar on 02/02/2023.
//

#include <string>

std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(),dna.end(),'T','U');
  return dna;
}