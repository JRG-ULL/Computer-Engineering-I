/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    3 Oct. 2023
 * @brief   The program will take a year as its input and say if it's a leap
 *          year or not. Do note that a leap year is that which has 366 days,
 *          as opposed to natural years which only have 365. After the
 *          Gregorian reformation, leap years are either multiples of four
 *          which do not end in double zeroes, or years which end in double
 *          zeroes such that, after taking said zeroes away, the remaining
 *          number is divisible by four.
 * @bug     There are no known bugs.
 * @see
 */

#include <iostream>

int main()
{
  int year;
  while (std::cin >> year)
  {
    year % 4 == 0 && year % 100 != 0
      ? std::cout << "YES\n"
      : year % 100 == 0 && year % 400 == 0
      ? std::cout << "YES\n"
      : std::cout << "NO\n";
  }
  return 0;
}
