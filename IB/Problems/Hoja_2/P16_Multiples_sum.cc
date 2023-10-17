/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    multiples_sum.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   This program prints the sum of each and every multiple of 3 or
 *          5 smaller than 1000. 
 * @bug     There are no known bugs.
 * @see     https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit#heading=h.gjdgxs
 */

#include <iostream>

int main()
{
  int multiple_sum{0};
  for (int i = 1; i < 1000; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      multiple_sum += i;
    }
  }
  std::cout << multiple_sum << std::endl;
  return 0;
}
