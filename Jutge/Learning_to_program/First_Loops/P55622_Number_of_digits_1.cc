/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file    P55622_Number_of_digits_1.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief	This program reads a natural number 'num' and prints out its number of digits.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P55622
  */

#include <iostream>
#include <string>

int main()
{
  std::string num;
  while (std::cin >> num)
  {
    std::cout << "The number of digits of " << num << " is " << num.size() << ".\n";
  }
  return 0;
}
