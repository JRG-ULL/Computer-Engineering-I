/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    25 Sep. 2023
 * @brief   This program reads several numbers and prints out the sum of the
 *          digits of each one of them. Input consists of a sequence of natural
 *          numbers. For every number, print the sum of its digits following
 *          the format of the example.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P33839
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
