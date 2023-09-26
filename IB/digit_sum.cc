/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    25 Sep. 2023
 * @brief
 * @bug     There are no known bugs.
 * @see
 */

#include <iostream>

int main()
{
  int num;
  int sum;
  while (std::cin >> num)
  {
    while (num > 0)
    {
      sum += num % 10;
      num /= 10;
      std::cout << num << " ";
    }
  std::cout << sum << std::endl;
  sum = 0;
  }
  return 0;
}
