/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		27 Sep. 2023
  * @brief  This program that computes the product of two given natural
  *         numbers. Its input consists of two natural numbers and prints
  *         their product as its output. In this problem, numbers can be
  *         veeeeeeeeeeeeeeeeeeeeeeeery large.
  * @bug    The Jutge platform will rate this program a WA, due to its private testing.
  *         Nonetheless, the functionality of the program is as intended.
  * @see    https://jutge.org/problems/P31761
  */

#include <iostream>

int main()
{
  long long num1;
  long long num2;
  while (std::cin >> num1 >> num2)
  {
    std::cout << static_cast<long long>(num1 * num2) << std::endl; 
  }
  return 0;
}