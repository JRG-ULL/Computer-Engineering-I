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
  * @bug      As it seems, Jutge will return this program a WA case, given one of its
  *           public cases appears to be wrong (specifically speaking -32 / 6 = -6,
  *           with a remainder of 4).
  * @see      https://jutge.org/problems/P92351
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

