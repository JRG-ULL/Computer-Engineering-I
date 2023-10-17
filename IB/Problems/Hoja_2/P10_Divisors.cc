/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P10_Divisors.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		17 Oct. 2023
  * @brief	
  * @bug		There are no known bugs.
  * @see		
  */

#include <iostream>

int main()
{
  int num;
  while (std::cout << "Introduzca número: ")
  {
    std::cin >> num;
    for (int i = 1; i < num; i++)
    {
      if (num % i == 0)
      {
        std::cout << i << " ";
      }
    }
    std::cout << num << std::endl;
  }
  return 0;
}