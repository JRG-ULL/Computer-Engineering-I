/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P04_Hypotenuse.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   This program takes the length of two sides of a rectangle triangle
 *          as its input, and prints out the length of its hypotenuse.
 * @bug     There are no known bugs.
 * @see    
 */

#include <cmath>    // sqrt() function
#include <iomanip>  // std::fixed, std::setprecision()
#include <iostream>

int main()
{
  double side_a;
  double side_b;
  while (std::cout << "Introduzca cateto a: ")
  {
    std::cin >> side_a;
    std::cout << "Introduzca cateto b: ";
    std::cin >> side_b;
    std::cout << "El valor de la hipotenusa es " << std::fixed << std::setprecision(2) << sqrt((side_a * side_a) + (side_b * side_b)) << std::endl;
  }
  return 0;
}
