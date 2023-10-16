/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    26 Sep. 2023
 * @brief   This program reads a number and prints its hexadecimal
 *          representation reversed, following the convention to use the
 *          letters from 'A' to 'F' to represent the values from 10 to 15.
 *          Input consists of a natural number.
 * @bug     There are no known bugs
 * @see     https://jutge.org/problems/P60816
 */

#include <iostream>

int main ()
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
        std::cout << "0123456789ABCDEF"[num % 16];
        num /= 16;
      }
    }
    std::cout << "\n";
  }
  return 0;
}
