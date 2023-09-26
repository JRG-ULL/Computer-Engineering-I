/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    26 Sep. 2023
 * @brief   This program reads a number and prints out its multiplication
 *          table. Input consists of a natural number between 1 and 9.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P31170
 */

#include <iostream>

int main()
{
  int num;
  while (std::cin >> num)
  {
    for (int i = 1; i <= 10; i++)
    {
      std::cout << num << "*" << i << " = " << num * i << std::endl;
    }
  }
  return 0;
}

