/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P03_centimetres_to_inches.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   This program takes a given length and transforms it from centimetres
 *          to inches, using the conversion factor of in = cm / 2.54.
 * @bug     There are no known bugs.
 * @see    
 */

#include <iostream>
#include <iomanip>  // std::fixed, std::setprecision()

int main()
{
  double cm;
  while (std::cout << "Introduzca longitud: ")
  {
    std::cin >> cm;
    std::cout << cm << " cm = " << std::fixed << std::setprecision(2) << cm / 2.54 << " in\n";
  }
  return 0;
}
