/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   min_max.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   03 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    
 */

#include <iostream>

void MinMax(const std::string& number) {
  int min = number.at(0);
  int max = number.at(0);
  for (int i = 0; i < number.size(); i++) {
    if (number.at(i) < min) min = number.at(i);
    if (number.at(i) > max) max = number.at(i);
  }
  std::cout << "El dígito menor de " << number << " es " << min << std::endl;
  std::cout << "El dígito mayor de " << number << " es " << max << std::endl;
}
