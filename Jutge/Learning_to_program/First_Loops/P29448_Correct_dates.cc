/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P29448_Correct_dates.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    8 Nov. 2023
 * @brief   This program reads several dates, and for each one tells if it is
 *          correct or not according to the Gregorian calendar.Each date
 *          consists of three integer numbers, corresponding to the day, month
 *          and year, respectively. All years are between 1800 and 9999.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P29448
 */

#include <iostream>

int main() {
  int day;
  int month;
  int year;
  while (std::cin >> day >> month >> year) {
    switch (month) {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        day < 1 || day > 31 
          ? std::cout << "Incorrect Date\n"
          : std::cout << "Correct Date\n";
          break;
      
      case 4: case 6: case 9: case 11:
        day < 1 || day > 30
          ? std::cout << "Incorrect Date\n"
          : std::cout << "Correct Date\n";
          break;
      
      case 2:
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
          day < 1 || day > 29
            ? std::cout << "Incorrect Date\n"
            : std::cout << "Correct Date\n";
        }
        else {
          day < 1 || day > 28
            ? std::cout << "Incorrect Date\n"
            : std::cout << "Correct Date\n";
        }
        break;
        
      default:
        std::cout << "Incorrect Date\n";
        break;
    }
  }
  return 0;
}
