/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    25 Sep. 2023
 * @brief   This program prints out the first n numbers from the Fibonacci
 *          sequence: 0, 1, 1, 2, 3, 5, [...]. It takes a singular number 
 *          iven by the user and, following said number, prints the same
 *          amount of terms from the sequence.
 * @bug     There are no known bugs.
 * @see     
 */

#include <iostream>

int main()
{
  int num;
  int fibonacci;
  while (std::cin >> num)
  {
    for (int i = 0; i < num; i++)
    {
      fibonacci = i;
      std::cout << fibonacci << " ";
      fibonacci += fibonacci;
    }
    std::cout << std::endl;
  }
  return 0;
}
