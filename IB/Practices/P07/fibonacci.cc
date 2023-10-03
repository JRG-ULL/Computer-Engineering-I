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
 *          given by the user and, following said number, prints the same
 *          amount of terms from the sequence.
 * @bug     There are no known bugs.
 * @see     
 */

#include <iostream>

int main()
{
  int num;
  int fibonacci{0};
  int aux{1};
  int sum{0};
  while (std::cin >> num)
  {
    switch (num)
    {
      case 0:
        std::cout << " ";
      case 1:
      std::cout << fibonacci;
      case 2:
      std::cout << fibonacci << " " << aux;
      default:
        std::cout << fibonacci << " " << aux << " ";
        for (int i = 2; i < num; i++)
        {
          sum = fibonacci + aux;
          std::cout << sum << " ";
          fibonacci = aux;
          aux = sum;
        }
    }
    std::cout << std::endl;
    fibonacci = 0;
    aux = 1;
    sum = 0;
  }
  return 0;
}
