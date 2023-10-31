/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P72484_Rhombus.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P72484
 */

#include <iostream>

void Rhombus(const int& size) {
  for (int length = 1; length <= ((2 * size) - 1); length++) {
    for (int width = 1; width <= length; width++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int main() {
  int size;
  while (std::cin >> size) {
    Rhombus(size);
  }
  return 0;
}