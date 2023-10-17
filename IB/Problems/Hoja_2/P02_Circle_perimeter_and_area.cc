/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P02_circle_perimeter_and_area.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   This program takes a given number as a circle's radius, and prints
 *          out its respective perimeter and area from it.
 * @bug     There are no known bugs.
 * @see    
 */

#include <iostream>
#include <iomanip>  // std::fixed, std::setprecision()

int main()
{
  double radius;
  const double pi = 3.1415926535;
  while (std::cout << "Introduzca el radio: ")
  {
    std::cin >> radius;
    std::cout << "Perímetro: " << std::fixed << std::setprecision(1) << 2.0 * pi * radius << std::endl;
    std::cout << "Área: " << std::fixed << std::setprecision(1) << pi * radius * radius << std::endl;
  }
  return 0;
}
