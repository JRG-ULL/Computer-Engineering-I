/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P78142_Average.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    11 Oct. 2023
 * @brief   This program reads a sequence of numbers and prints out their
 *          average. The input consists of a non-empty sequence of strictly
 *          positive real numbers. The average must be printed with 2 digits
 *          after the decimal point.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P78142
 */

#include <iomanip>
#include <iostream>
#include <string>

int main()
{
  double average_num{0.0};
  double average_den{0.0};
  std::string input;
  while (std::getline(std::cin, input))
  {
    for (int i = 0; i < input.size(); i++)
    {
      average_num += input.at(i);
      average_den++;
    }
    std::cout << std::fixed << std::setprecision(2) << average_num / average_den << std::endl;
  }
  return 0;
}
