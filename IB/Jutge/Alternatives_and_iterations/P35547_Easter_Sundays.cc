 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P35547_Easter_Sundays.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    11 Oct. 2023
 * @brief   Easter Sunday is a mobile holiday corresponding to the first Sunday
 *          after the first full moon of the spring. This program computes the
 *          day and the month of the Easter Sunday of every given year. The
 *          input must be comprised between 1800 and 9999. To solve these
 *          calculations, the program makes use of the Gauss method.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P35547
 */

#include <iostream>

int main()
{
  int year;
  int calc1;  // Just for ease of use and to avoid making the most r/programminghorror post-worthy code ever,
  int calc2;  // we'll store the necessary operating variables in these three variables.
  int calc3;
  while (std::cin >> year)
  {
    calc1 = year % 19;
    calc2 = ((19 * (year % 19)) + ((15 - ((13 + (8 * (year / 100))) / 25) + (year / 100) - ((year / 100) / 4)) % 30)) % 30;
    calc3 = ((2 * (year % 4)) + (4 * (year % 7)) + (6 * (((19 * (year % 19)) + ((15 - ((13 + (8 * (year / 100))) / 25) + (year / 100) - ((year / 100) / 4)) % 30)) % 30)) + ((4 + (year / 100) - ((year / 100) / 4)) % 7)) % 7;
    (calc2 + calc3 <= 9)
      ? std::cout << 22 + calc2 + calc3 << "/3\n"
      : calc2 == 29 && calc3 == 6
      ? std::cout << "19/4\n"
      : (calc2 == 28 && calc3 == 6) && calc1 > 10
      ? std::cout << "18/4\n"
      : std::cout << calc2 + calc3 - 9 << "/4\n";
  }
  return 0;
}
