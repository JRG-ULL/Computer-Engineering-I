/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P79784_Movements_on_the_ground.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		18 Oct. 2023
  * @brief	
  * @bug		There are no known bugs.
  * @see		https://jutge.org/problems/P79784
  */

#include <iostream>
#include <string>

int main()
{
  int x_axis{0};
  int y_axis{0};
  std::string coordinates;
  while (std::cin >> coordinates)
  {
    for (int i = 0; i < coordinates.size(); i++)
    {
      switch(coordinates.at(i))
      {
        case 'n':
        y_axis--;
        break;
        
        case 'w':
        x_axis--;
        break;
        
        case 's':
        y_axis++;
        break;
        
        case 'e':
        x_axis++;
        break;
      }
    }
    std::cout << "(" << x_axis << ", " << y_axis << ")\n";
    x_axis = 0;
    y_axis = 0;
  }
  return 0;
}

