/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P38045_Computing_square_roots_and_squares.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   21 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P38045
 */

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  int num;
  while (std::cin >> num) {
    std::cout << num * num << " " << std::fixed << std::setprecision(6) << static_cast<double>(sqrt(num)) << std::endl;
  }
  return 0;
}