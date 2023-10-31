/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P79784_Movements_on_the_ground.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		18 Oct. 2023
  * @brief	The program reads a sequence of characters, each one condifying
  *         a movement ('n' for north, 's' for south, 'e' for east and 'w' for
  *         west), and computes the final position of an object initially
  *         located at (0, 0). Suppose that the first component corresponds to
  *         the east-west direction, that going east means adding 1 to the
  *         that component, and that going south means adding 1 to the second
  *         component.
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
  std::cin >> std::noskipws;
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

        default:
        std::cout << "test\n";
        break;
      }
    }
    std::cout << "(" << x_axis << ", " << y_axis << ")\n";
    x_axis = 0;
    y_axis = 0;
  }
  return 0;
}

