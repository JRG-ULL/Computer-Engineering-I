/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    20 Sep. 2023
 * @brief   This program takes as input three numbers given by the user. These
 *          numbers must all be integers. Once given the three numbers, the
 *          program will return the biggest number out of the three.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P90615_en
*/

#include <iostream>
/* using namespace std; */

int main()
{
  int num1;
  int num2;
  int num3;
  while (std::cin >> num1 >> num2 >> num3)
  {
    if (num1 >= num2 && num1 >= num3)
    {
      std::cout << num1 << std::endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
      std::cout << num2 << std::endl;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
      std::cout << num3 << std::endl;
    }
  }
  return 0;
}