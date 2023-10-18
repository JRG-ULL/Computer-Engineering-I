/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P90226_Comparison_of_words.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    18 Oct. 2023
 * @brief   This program takes two words as its input and prints a line telling
 *          their lexicographic order. That is: word1 > word2, word1 < word2, 
 *          or word1 = word2. The two words must be strictly made up of
 *          lowercase characters.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P90226
 */

#include <iostream>
#include <string>

int main()
{
  std::string word1;
  std::string word2;
  while (std::cin >> word1 >> word2)
  {
    word1 == word2
      ? std::cout << word1 << " = " << word2 << std::endl
      : word1 < word2
        ? std::cout << word1 << " < " << word2 << std::endl
        : std::cout << word1 << " > " << word2 << std::endl;
  }
  return 0;
}
