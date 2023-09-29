/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería Informática
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    22 Sep. 2023
 * @brief   This program takes a natural number as its input and prints out the
 *          of each one of its digits as a result.
 * @bug     There are no known bugs.
 * @see
 */

#include <iostream>

int main()
{
  int num;
  int sum{0};
  while (std::cin >> num)
  {
    std::cout << "The sum of the digits of " << num << " is ";
    while (num > 0)
    {
      sum += num % 10;
      num /= 10;
    }
    std::cout << sum << "." << std::endl;
    sum = 0;
  }
  return 0;
}
