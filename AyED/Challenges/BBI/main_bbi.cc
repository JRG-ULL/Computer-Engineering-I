/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Algoritmos y Estructuras de Datos 2023-2024
 * 
 * @file   main_bbi.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   13 Jun. 2024
 * @brief  
 * @bug    There are no known bugs.
 */

#include <iostream>

#include "vector_t.h"

int main() {
  vector_t<int> vec_1;
  vector_t<int> vec_2;
  vector_t<int> vec_3;

  std::cin >> vec_1 >> vec_2 >> vec_3;
  std::cout << "vec_1 = " << vec_1;
  std::cout << "vec_2 = " << vec_2;
  std::cout << "vec_3 = " << vec_3;
  std::cout << "BBI (vec_1): 8, from inx 3 to 11 = ";
  vec_1.BBI(8, 3, 11);
  std::cout << "BBI (vec_1): 27, from inx 2 to 24 = ";
  vec_1.BBI(27, 2, 24);
  std::cout << "BBI (vec_3): 12, from inx 0 to 4 = ";
  vec_1.BBI(12, 0, 4);
}