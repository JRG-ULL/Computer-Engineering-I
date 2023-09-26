/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author  Javier Rodríguez González
 * @date    20 Sep. 2023
 * @brief   This program reads two numbers given by the user, num1 and num2,
 *          and returns all the numbers between those two numbers, separated
 *          by commas.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P97156_en/
*/

/**
 * ! Deprecated method (IB-specific): After learning new algorithms and methods in the first
 * ! year's second four-month period, AyED, this program can be further simplified using a
 * ! ternary operator. 
 * 
 * * #include <iostream>
 * * int main()
 * * {
 * *   int num1;
 * *   int num2;
 * *   while (std::cin >> num1 >> num2)
 * *   {
 * *     for (int i = num1; i <= num2; i++)
 * *     {
 * *       std::cout << i;
 * *       if (i != num2)
 * *       {
 * *         std::cout << ",";
 * *       }
 * *       else
 * *       {
 * *         std::cout << std::endl;
 * *       }
 * *     }
 * *   }
 * *   return 0;
 * * }
*/

#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  while (cin >> num1 >> num2)
  {
    for (int i = num1; i <= num2; i++)
    {
      cout << i;
      i != num2
      ? cout << ","
      : cout << endl;
    }
  }
}