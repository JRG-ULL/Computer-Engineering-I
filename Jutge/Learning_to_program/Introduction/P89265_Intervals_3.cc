/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P89265_Intervals_3.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   16 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P89265
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
    if (botlim1 == botlim2 && toplim1 == toplim2)
    {
      std::cout << "= , [" << botlim1 << "," << toplim1 << "]\n"; 
    }
    else if ((botlim1 >= botlim2 && toplim1 < toplim2) || (botlim1 > botlim2 && toplim1 <= toplim2))
    {
      std::cout << "1 , [" << botlim1 << "," << toplim1 << "]\n";
    }
    else if ((botlim2 >= botlim1 && toplim2 < toplim1) || (botlim2 > botlim1 && toplim2 <= toplim1))
    {
      std::cout << "2 , [" << botlim2 << "," << toplim2 << "]\n";
    }
    else
    {
      std::cout << "? , [";
      if (botlim1 >= botlim2 && botlim1 <= toplim2)
      {
        std::cout << botlim1 << ",";
      }
      else if (botlim2 >= botlim1 && botlim2 <= toplim1)
      {
        std::cout << botlim2 << ",";
      }
      if (toplim1 <= toplim2 && toplim1 >= botlim2)
      {
        std::cout << toplim1;
      }
      else if (toplim2 <= toplim1 && toplim2 >= botlim1)
      {
        std::cout << toplim2;
      }
      std::cout << "]\n";
    }
  }
  return 0;
}
