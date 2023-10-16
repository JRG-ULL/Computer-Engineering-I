/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @author   Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date     27 Sep. 2023
  * @brief    This program reads two natural numbers num1 and num2, with num2 > 0,
  *           and prints the integer division and the remainder of num1 divided by
  *           num1, separated by a space.  
  * @bug      There are no known bugs.
  * @see      https://jutge.org/problems/P48107
  */

#include <iostream>

int main()
{
  int num1;
  int num2;
  while (std::cin >> num1 >> num2)
  {
    std::cout << num1 / num2 << " " << num1 % num2 << std::endl;
  }
  return 0;
}

