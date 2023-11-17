/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    21 Sep. 2023
 * @brief   This program takes three numbers given by the user as input,
 *          and returns the maximum out of the three. Do note that these
 *          three numbers must be integers, otherwise the program will
 *          round up any decimal part and may give an inaccurate selection.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P90615
 */

#include <iostream>

int main() {
  int num1;
  int num2;
  int num3;
  while (std::cin >> num1 >> num2 >> num3) {
    num1 >= num2 && num1 >= num3
      ? std::cout << num1 << std::endl
      : num2 >= num1 && num2 >= num3
        ? std::cout << num2 << std::endl
        : std::cout << num3 << std::endl;
  }
  return 0;
}

