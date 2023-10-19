/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P92613_Rounding.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    18 Oct. 2023
 * @brief   This program takes a real number as its input (>= 0) and prints out
 *          the floor, ceiling and rounding of said number.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P92613
 */

#include <iostream>

int main()
{
  double num;
  while (std::cin >> num)
  {
    num - static_cast<int>(num) == 0.0
      ? std::cout << static_cast<long long>(num) << " " << static_cast<long long>(num) << " " << static_cast<long long>(num) << std::endl
      : (num - static_cast<long long>(num) > 0.0) && (num - static_cast<long long>(num) < 0.5)
        ? std::cout << static_cast<long long>(num) << " " << static_cast<long long>(num + 1) << " " << static_cast<long long>(num) << std::endl
        : std::cout << static_cast<long long>(num) << " " << static_cast<long long>(num + 1) << " " << static_cast<long long>(num + 1) << std::endl;
  }
  return 0;
}
