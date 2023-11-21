/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P57474_Iterative_factorial.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   21 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P57474
 */

#include <iostream>

int factorial(int n) {
  int factorial{1};
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }
  return factorial;
}