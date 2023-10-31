/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P90133_Logarithms.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P90133
 */

#include <iostream>

void Logarithm(const int& base, const int& number) {
  int aux = number;
  int logarithm{0};
  while (aux >= base) {
    aux /= base;
    logarithm++;
  }
  std::cout << logarithm << std::endl;
}

int main() {
  int base;
  int number;
  while (std::cin >> base >> number) Logarithm(base, number);
  return 0;
}