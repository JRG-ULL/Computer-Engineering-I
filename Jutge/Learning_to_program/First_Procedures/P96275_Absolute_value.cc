/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P96275_Absolute_value.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   21 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P96275
 */

#include <iostream>

int absolute(int n) {
  if (n < 0) n *= -1;
  return n;
}