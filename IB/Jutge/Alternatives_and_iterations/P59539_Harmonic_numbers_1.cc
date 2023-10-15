/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P59539_Harmonic_numbers_1.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief	This program reads a natural number 'num' and prints out the 'num'-th harmonic number, defined as H(num) = 1 + 1/2 + ... + 1/num. Its harmonic number will be printed with four digits after the decimal point.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P59539
  */

#include <iostream>
#include <iomanip>  // std::fixed, std::setprecision()

int main()
{
  int num;
  double harmonic{0.0};
  while (std::cin >> num)
  {
    for (double i = 1.0; i <= num; i++)
    {
      harmonic += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl; 
    harmonic = 0;
  }
  return 0;
}