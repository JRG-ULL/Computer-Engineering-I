/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P17913_Iterative_double_factorial.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   24 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P17913
 */

#include <iostream>

int double_factorial(int x) {
  int factorial{1};
  for (int i = x; i > 0; i -= 2) {
    factorial *= i;
  }
  return factorial;
}
