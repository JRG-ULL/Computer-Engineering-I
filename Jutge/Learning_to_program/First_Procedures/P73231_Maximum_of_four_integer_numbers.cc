/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P73231_Maximum_of_four_integer_numbers.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   21 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P73231
 */

#include <iostream>

int max4(int a, int b, int c, int d) {
  int max = a;
  if (max < b) max = b;
  if (max < c) max = c;
  if (max < d) max = d;
  return max;
}