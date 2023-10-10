/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    9 Oct. 2023
 * @brief   This program takes two numbers as its input, and prints
 * 	    out all the numbers comprised between the first and the
 * 	    second one in decreasing order.
 * @bug	    There are no known bugs.
 * @see	    https://jutge.org/problems/P59875
 */

#include <iostream>

int main()
{
  int num1;
  int num2;
  while (std::cin >> num1 >> num2)
  {
    if (num1 >= num2)
    {
      for (int i = num1; i >= num2; i--)
      {
        std::cout << i << std::endl;
      }
    }
    else
    {
      for (int i = num2; i >= num1; i--)
      {
        std::cout << i << std::endl;
      }
    }
  }
  return 0;
}
