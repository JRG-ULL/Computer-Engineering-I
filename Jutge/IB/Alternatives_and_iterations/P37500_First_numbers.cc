/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P37500_First_numbers.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    11 Oct. 2023
 * @brief   This program takes a natural number 'num' as its input, and prints
 *          out all natural numbers between zero and said natural number in an
 *          increasing order.
 * @bug     There are no known bugs
 * @see     https://jutge.org/problems/P37500
 */

#include <iostream>

int main()
{
  int num;
  while (std::cin >> num)
  {
    for (int i = 0; i <= num; i++)
    {
      std::cout << i << std::endl;
    }
  }
  return 0;
} 
