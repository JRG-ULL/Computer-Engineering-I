/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P57846_Maximum_of_two_integer_numbers.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   21 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P57846
 */

#include <iostream>

int max2(int a, int b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}