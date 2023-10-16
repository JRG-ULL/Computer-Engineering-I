/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P67723_Greatest_common_divisor.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief	This program computes the greatest common divisor of two strictly positive natural given numbers.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P67723
  */

#include <iostream>

int  main()
{
  int num1;
  int num2;
  int gcd;
  int aux1;
  int aux2;
  while (std::cin >> num1 >> num2)
  {
    std::cout << "The gcd of " << num1 << " and " << num2 << " is ";
    for (int i = 1; i < num1; i++)
    {
      if (num1 % i == 0)
      {
        aux1 = i;
      }
    }
  }
}