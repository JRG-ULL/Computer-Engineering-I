/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P09_Powers_of_two.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		17 Oct. 2023
  * @brief	
  * @bug		There are no known bugs.
  * @see		
  */

#include <cmath>
#include <iostream>

int main()
{
  int power;
  while (std::cout << "Introduzca número: ")
  {
    std::cin >> power;
    for (int i = 0; i < power; i++)
    {
      std::cout << pow(2,i) << " ";
    }
    std::cout << pow(2, power) << std::endl;
  }
  return 0;
}