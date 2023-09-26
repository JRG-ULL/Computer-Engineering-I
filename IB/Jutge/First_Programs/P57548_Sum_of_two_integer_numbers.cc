/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González
 * @date    25 Sep. 2023
 * @brief   This program takes two numbers given by the user as its input, num1
 *          and num2, and prints out their sum in a separate line. Do note that
 *          this sum must be an integer as well, which means no decimals will
 *          be printed.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P57548
 */

#include <iostream>

int main()
{
  int num1;
  int num2;
  while (std::cin >> num1 >> num2)
  {
    std::cout << num1 + num2 << std::endl;
  }
  return 0;
}
