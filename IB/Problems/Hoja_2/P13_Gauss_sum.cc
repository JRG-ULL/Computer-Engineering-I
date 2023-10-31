/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P13_Gauss_sum.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   27 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 */

#include <iostream>

void Sumar(int gauss_sum) {
  std::cout << (gauss_sum * (gauss_sum + 1)) / 2 << std::endl;
}

int main() {
  int input_num;
  while (std::cin >> input_num) {
    Sumar(input_num);
  }
  return 0;
}
