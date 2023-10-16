/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    26 Sep. 2023
 * @brief   This program reads a number and prints its binary representation
 *          reversed. Its input consists of a natural number (positive
 *          integer). It prints, reversed, the binary representation of
 *          a number, with as many zeroes at its left as required.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P28754
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
    while (num > 0)
    {
      std::cout << num % 2;
      num /= 2;
    }
    std::cout << std::endl;
  }
  return 0;
}
