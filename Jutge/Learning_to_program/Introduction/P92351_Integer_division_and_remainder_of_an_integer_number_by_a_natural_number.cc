/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @author   Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date     27 Sep. 2023
  * @brief    This program reads two natural numbers dividend and divisor, with divisor > 0,
  *           and prints the integer division and the remainder of dividend divided by
  *           dividend, separated by a space.  
  * @bug      There are no known bugs
  * @see      https://jutge.org/problems/P92351
  */

#include <iostream>

int main()
{
  int dividend;
  int divisor;
  while (std::cin >> dividend >> divisor)
  {
    dividend % divisor < 0
      ? std::cout << (dividend / divisor) - 1 << " " << (dividend % divisor) + divisor << std::endl
      : std::cout << dividend / divisor << " " << dividend % divisor << std::endl;
  }
  return 0;
}

