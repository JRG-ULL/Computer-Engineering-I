/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    22 Sep. 2023
 * @brief   This program takes two numbers given by the user as its input,
 *          num1 and num2, and prints out all the numbers in between said
 *          numbers on screen. All the numbers will be separated by commas,
 *          and there will be no spaces. The two given numbers will be printed
 *          as well, as the first and last numbers of the interval respectively.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P97156_en
 */

/**
 * Deprecated code (IB specific)
 *
 * #include <iostream>
 *
 * int main()
 * {
 *   int num1;
 *   int num2;
 *   while (std::cin >> num1 >> num2)
 *   {
 *     for (int i = num1; i <= num2; i++)
 *     {
 *       std::cout << i;
 *       if (i != num2)
 *       {
 *         std::cout << ",";
 *       }
 *       else
 *       {
 *         std::cout << std::endl;
 *       }
 *     }
 *   }
 *   return 0;
 * }
 */

#include <iostream>

int main() {
  int num1;
  int num2;
  std::cin >> num1 >> num2;
  for (int i = num1; i <= num2; i++) {
    std::cout << i;
    (i != num2) ? std::cout << "," : std::cout << std::endl;
  }
  return 0;
}
