/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P56559_Intervals_2.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		15 Oct. 2023
  * @brief	This program tells if a given interval is inside another given interval. It will print '=' if both intervals are equal, '1' if the first is inside the second (but they are not equal), '2' if the second is inside the first (but they are not equal), or '?' otherwise.
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P56559
  */

#include <iostream>

int main()
{
  int botlim1;  // Bottom limit value of the first interval
  int toplim1;  // Top limit value of the first interval
  int botlim2;  // Bottom limit value of the second interval
  int toplim2;  // Top limit value of the second interval
  while (std::cin >> botlim1 >> toplim1 >> botlim2 >> toplim2)
  {
    botlim1 == botlim2 && toplim1 == toplim2
      ? std::cout << "=\n"
      : (botlim1 >= botlim2 && toplim1 < toplim2) || (botlim1 > botlim2 && toplim1 <= toplim2)
        ? std::cout << "1\n"
        : (botlim2 >= botlim1 && toplim2 < toplim1) || (botlim2 > botlim1 && toplim2 <= toplim1)
          ? std::cout << "2\n"
          : std::cout << "?\n";
  }
  return 0;
}