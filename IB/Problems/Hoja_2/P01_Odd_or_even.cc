/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P01_odd_or_even.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   This program checks if a given number is odd or even, and prints it
 *          on screen.
 * @bug     There are no known bugs.
 * @see    
 */

#include <iostream>

int main()
{
  int num;
  while (std::cout << "Introduzca un número: ")
  {
    std::cin >> num;
    num % 2 == 0
      ? std::cout << "Su número es par.\n"
      : std::cout << "Su número es impar.\n";
  }
  return 0;
}
