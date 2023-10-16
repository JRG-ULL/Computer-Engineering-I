/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P29448_Correct_dates.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    11 Oct. 2023
 * @brief   This program reads several dates, and for each one tells if it is
 *          correct or not according to the Gregorian calendar.Each date
 *          consists of three integer numbers, corresponding to the day, month
 *          and year, respectively. All years are between 1800 and 9999.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P29448
 */

#include <iostream>

int main()
{
  int day;
  int month;
  int year;
  while (std::cin >> day >> month >> year)
  {
    (day < 1 || month < 1) || (year < 1800 || year > 9999)
      ? std::cout << "Incorrect Date\n"
      : (day > 31) && ((month < 8 && month % 2 != 0) || (month >= 8 && month % 2 == 0))
      ? std::cout << "Incorrect Date\n"
      : (day > 30) && (((month > 2 && month < 8) && month % 2 == 0) || (month >= 8 && month % 2 != 0))
      ? std::cout << "Incorrect Date\n" 
      : (month == 2 && day > 29) && ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
      ? std::cout << "Incorrect Date\n"
      : (month == 2 && day > 28) && !((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
      ? std::cout << "Incorrect Date\n"
      : std::cout << "Correct Date\n";
  }
  return 0;
}
