/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P06_Reverse_number.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		17 Oct. 2023
  * @brief	This program takes a natural number as its input and prints out said number reversed.
  * @bug		There are no known bugs.
  * @see		https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit?skip_itp2_check=true
  */

#include <iostream>
#include <string>

int main()
{
  std::string num;
  while (std::cout << "Introduzca número: ")
  {
    std::cin >> num;
    for (int i = num.size() - 1; i >= 0; i--)
    {
      std::cout << num.at(i);
    }
    std::cout << "\n";
  }
  return 0;
}