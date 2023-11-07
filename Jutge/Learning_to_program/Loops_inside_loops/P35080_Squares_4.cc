/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P35080_Squares_4.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   07 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P35080
 */

#include <iostream>

void Square(const int& size) {
  int print_value{0};
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
  bool first_input = true;
  while (std::cin >> size) {
    for (int number_of_squares = 1; number_of_squares <= size; number_of_squares++) {
      if (!first_input) std::cout << "\n";
      else first_input = false;
      Square(size);
    }
  }
  return 0;
}
