/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    22 Sep. 2023
 * @brief   This program reads a number given by the user as input, and
 *          prints out the n-th harmonic number. A harmonic number is defined
 *          as the sum of the reciprocals of the first n positive integers.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P59539_en/
 */

#include <iostream>
#include <iomanip>

int main()
{
  int limit;
  double harmonic;
  while (std::cin >> limit)
  {
    for (int i = 1; i <= limit; i++)
    {
      harmonic += 1.0000 / i;
    }
    std::cout << std::setprecision(4) << std::fixed << harmonic << std::endl;
    harmonic = 0;
  }
  return 0;
} 
