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
  for (int upper_half = 1; upper_half <= size; upper_half++) {                  // Loop to print the first half of the rhombus.
    for (int whitespace = size; whitespace > upper_half; whitespace--) {        // Necessary spaces for the rhombus' diamond-like shape.
      std::cout << " ";
    }
    for (int fill_upperL = 1; fill_upperL <= upper_half; fill_upperL++) {       // Loop to print out the left filling of the rhombus.
      std::cout << "*";
    }
    for (int fill_upperR = 1; fill_upperR <= upper_half - 1; fill_upperR++) {   // Loop to print out the right filling of the rhombus.
      std::cout << "*";
    }
    std::cout << "\n";
  }
  for (int lower_half = size + 1; lower_half <= (size * 2) - 1; lower_half++) { // Loop to print the lower half of the rhombus.
    for (int whitespace = size + 1; whitespace <= lower_half; whitespace++) {
      std::cout << " ";
    }
    for (int fill_lowerL = (size * 2) - 1; fill_lowerL >= lower_half; fill_lowerL--) {
      std::cout << "*";
    }
    for (int fill_lowerR = (size * 2) - 1; fill_lowerR >= lower_half + 1; fill_lowerR--) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}

int main() {
  int size;
  while (std::cin >> size) {
    Rhombus(size);
  }
  return 0;
}
