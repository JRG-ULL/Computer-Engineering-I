/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P24080_Squares_1.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   07 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P24080
 */

#include <iostream>

void Square(const int& size) {
  for (int height = 1; height <= size; height++) {
    for (int base = 1; base <= size; base++) {
      std::cout << size;
    }
    std::cout << "\n";
  }
}

int main() {
  int size;
  bool first_input = true;
  while (std::cin >> size) {
    if (!first_input) std::cout << "\n";
    else first_input = false;
    Square(size);
  }
  return 0;
}
