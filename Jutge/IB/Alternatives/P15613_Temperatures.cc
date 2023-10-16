/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Infromática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    29 Sep. 2023
 * @brief   This program reads an integer number that represents temperature
 *          given in Celsius, and tells whether the weather is hot, cold, or
 *          if it's ok. It will assume it's hot if the temperature is higher
 *          than 30C, cold if it's lower than 10C, and ok otherwise. Moreover,
 *          it will warn the user if water would boil (100C) or freeze (0C)
 *          at the given temperature.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P15613
 */

#include <iostream>

int main()
{
  int temp;
  while (std::cin >> temp)
  {
    if (temp > 30)
    {
      std::cout << "it's hot\n";
      if (temp >= 100)
      {
        std::cout << "water would boil\n";
      }
    }
    else if (temp < 10)
    {
      std::cout << "it's cold\n";
      if (temp <= 0)
      {
        std::cout << "water would freeze\n";
      }
    }
    else
    {
      std::cout << "it's ok\n";
    }
  }
  return 0;
}
