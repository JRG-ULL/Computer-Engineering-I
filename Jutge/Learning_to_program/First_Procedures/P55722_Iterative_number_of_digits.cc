/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P55722_Iterative_number_of_digits.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   24 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P55722
 */

#include <iostream>

int number_of_digits(int n) {
  int digits{0};
  if (n == 0) {
    return digits + 1;
  } else {
    while (n > 0) {
      digits++;
      n /= 10;
    }
  }
  return digits;
}
