/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P98458_Minimum_and_maximum.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   24 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P98458
 */

#include <iostream>

void min_max(int a, int b, int& mn, int& mx) {
  if (a >= b) {
    mn = b;
    mx = a;
  } else {
    mn = a;
    mx = b;
  }
  std::cout << mn << " " << mx << std::endl;
}
