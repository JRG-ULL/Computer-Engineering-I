/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file    P50327_Reversed_number.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief	This program reads a natural number and prints said number reversed, with as many zeros at its left as it has at its right.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P50327
  */

#include <iostream>

int main()
{
  int num;
  while (std::cin >> num)
  {
    if (num == 0)
    {
      std::cout << num;
    }
    else
    {
      while (num > 0)
      {
        std::cout << num % 10;
        num /= 10;
      }
    }
    std::cout << "\n";
  }
  return 0;
}