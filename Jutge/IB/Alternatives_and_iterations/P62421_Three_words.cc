/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P62421_Three_words.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief	This program reads three words and prints a line with said words reversed: word1 word2 word3 --> word3 word2 word1.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P62421
  */

#include <iostream>
#include <string>

int main()
{
  std::string word1;
  std::string word2;
  std::string word3;
  while (std::cin >> word1 >> word2 >> word3)
  {
    std::cout << word3 << " " << word2 << " " << word1 << std::endl;
  }
  return 0;
}
