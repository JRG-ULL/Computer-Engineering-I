/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P05_Average_of_four_numbers.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   This program takes four given numbers as its input, and prints out
 *          their average.
 * @bug     There are no known bugs.
 * @see    
 */

#include <iomanip>  // std::fixed, std::setprecision
#include <iostream>

int main()
{
  double num1;
  double num2;
  double num3;
  double num4;
  while (std::cout << "Primer valor: ")
  {
    std::cin >> num1;
    std::cout << "Segundo valor: ";
    std::cin >> num2;
    std::cout << "Tercer valor: ";
    std::cin >> num3;
    std:: cout << "Cuarto valor: ";
    std::cin >> num4;
    std::cout << "El promedio es: " << std::fixed << std::setprecision(2) << (num1 + num2 + num3 + num4) / 4.0 << std::endl;
  }
  return 0;
}
