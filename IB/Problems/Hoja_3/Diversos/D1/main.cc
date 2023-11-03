/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   main.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   03 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    
 */

#include "min_max.h"

int main() {
  std::string number;
  while (std::cin >> number) {
    MinMax(number);
  }
  return 0;
}
