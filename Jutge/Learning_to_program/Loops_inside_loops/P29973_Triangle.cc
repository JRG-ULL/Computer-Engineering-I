/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P29973_Triangle.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P29973
 */

#include <iostream>

void Triangle(const int& size) {
  for (int length = 1; length <= size; length++) {
    for (int width = 1; width <= length; width++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int main() {
  int size;
  while (std::cin >> size) {
    Triangle(size);
  }
  return 0;
}