/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    3 Oct. 2023
 * @brief   This program takes an integer number as its input and prints out
 *          its binary representation on screen. The program will only process
 *          a single number, so vectors, arrays and strings are not allowed as
 *          input. Were the user to give a non-binary number, the program will
 *          exit displaying an error message.
 * @bug     There are no known bugs.
 * @see
 */

#include <iostream>

int main()
{
  int binary;
  while (std::cin >> binary)
  {
    while (binary > 0)
    {
      std::cout << binary % 10;
      binary /= 10;
    }
    std::cout << std::endl;
  }
  return 0;
}
      
