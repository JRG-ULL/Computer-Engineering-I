/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P43850_Uncle_Ernie_the_Magician.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    23 Oct. 2023
 * @brief   This program takes several integer numbers as its input. Each number
 *          is the result of an original integer thought by the computer,
 *          between 0 and 2^31 - 1. For every given integer, it will print out
 *          the original integer thought by the computer.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P43850
 */

#include <iostream>
#include <string>

int main()
{
  long long thought_num;
  while (std::cin >> thought_num)
  {
    std::cout << ((((thought_num / 5) - 9) / 4) - 6) / 5 << std::endl;
  }
  return 0;
}
