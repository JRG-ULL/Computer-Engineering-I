/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    29 Sep. 2023
 * @brief   This program reads two integer numbers and prints out their maximum
 *          in a new line.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P56118
 */

#include <iostream>

int main()
{
  int num1;
  int num2;
  while (std::cin >> num1 >> num2)
  {
    if (num1 >= num2)
    {
      std::cout << num1 << std::endl;
    }
    else
    {
      std::cout << num2 << std::endl;
    }
  }
  return 0;
}

/**
 * #include <iostream>
 *
 * int main()
 * {
 *   int num1;
 *   int num2;
 *   while (std::cin >> num1 >> num2)
 *   {
 *     num1 >= num2
 *       ? std::cout << num1 << std::endl
 *       : std::cout << num2 << sstd::endl;
 *   }
 *   return 0;
 * }
 */
