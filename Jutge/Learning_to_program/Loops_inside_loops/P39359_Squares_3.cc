/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P39359_Squares_3.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   07 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P39359
 */

#include <iostream>

void Square(const int& size, int &print_value) {
  for (int rows = 1; rows <= size; rows++) {
    for (int columns = 1; columns <= size; columns++) {
      if (print_value > 9) print_value = 0;
      std::cout << print_value;
      print_value++;
    }
    std::cout << "\n";
  }
}

int main() {
  int size;
  int print_value{0};
  bool first_input = true;
  while (std::cin >> size) {
    if (!first_input) std::cout << "\n";
    else first_input = false;
    Square(size, print_value);
  }
  return 0;
}
