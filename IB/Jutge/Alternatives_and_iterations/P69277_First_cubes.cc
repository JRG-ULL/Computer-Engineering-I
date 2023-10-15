/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P69277_First_cubes.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief  This program reads a natural number 'num' and prints a line with 0^3, 1^3, ..., (num - 1)^3, num^3, separating each number with commas.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P
  */

#include <iostream>

int main()
{
  int num;
  while (std::cin >> num)
  {
    for (int i = 0; i < num; i++)
    {
      std::cout << i * i * i << ",";
    }
    std::cout << num * num * num << std::endl;
  }
  return 0;
}