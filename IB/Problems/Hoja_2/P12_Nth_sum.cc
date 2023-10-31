/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P12_Nth_sum.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   27 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 */

#include <iostream>

int main() {
  int input_num;
  while (std::cin >> input_num) {
    int sum{0};
    for (int i = 0; i <= input_num; i++) {
      sum += i;
    }
    std::cout << sum << "\n";
  }
  return 0;
}
