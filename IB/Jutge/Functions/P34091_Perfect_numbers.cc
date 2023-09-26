/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    25 Sep. 2023
 * @brief   This program executes a function that tells if a natural number is
 *          perfect or not. A natural number is called perfect if it is equal
 *          to the sum of all its divisors except itself. For instance, 28 is
 *          perfect, because 28 = 1 + 2 + 4 + 7 + 14.
 * @bug     There are no known bugs
 * @see     https://jutge.org/problems/P34091
 */

#include <iostream>
#include <cmath>

bool is_perfect(int num)
{
  num % 2 == 0 && sqrt(num) == (int)sqrt(num)
    ? return true
    : return false;
}
