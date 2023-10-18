/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P97969_Counting_as_1.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Oct. 2023
 * @brief   
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P97969
 */

#include <iostream>
#include <string>

int main()
{
  std::string input;
  int count{0};
  while (std::getline(std::cin, input))
  {
    for (int i = 0; i < input.size(); i++)
    {
      if (input.at(i) == 'a')
      {
        count++;
      }
    }
    std::cout << count << std::endl;
    count = 0;
  }
  return 0;
}
