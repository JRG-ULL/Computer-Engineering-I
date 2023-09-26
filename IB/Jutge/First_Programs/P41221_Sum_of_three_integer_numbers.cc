/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    25 Sep. 2023
 * @brief   This program takes three numbers given by the user as its input:
 *          num1, num2 and num3, respectively. As its output, the program
 *          prints out the result of their sum in a new line. Do note that the
 *          result as well as the numbers given by the user must and will be
 *          integers, which implies no decimal numbers will be printed out.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P41221
 */

#include <iostream>

int main()
{
  int num1;
  int num2;
  int num3;
  while (std::cin >> num1 >> num2 >> num3)
  {
    std::cout << num1 + num2 + num3 << std::endl;
  }
  return 0;
}
