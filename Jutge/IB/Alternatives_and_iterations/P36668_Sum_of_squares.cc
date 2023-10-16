/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P36668_Sum_of_squares.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    11 Oct. 2023
 * @brief   This program reads a natural number 'num' as its input and prints
 *          out the sum of the first 'num' squares as its result: 1^2 + 2^2 +
 *          3^2 + (num - 1)^2 + num^2. Do note that the summation has a
 *          closed formula, so a loop is not necessary for the program to
 *          execute properly.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P36668
 */

#include <iostream>

int main()
{
  long long num;
  while (std::cin >> num)
  {
    std::cout << (num * (num + 1) * (2 * num + 1)) / 6 << std::endl;
  }
  return 0;
}

