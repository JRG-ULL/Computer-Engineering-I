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

void PrintProgramPurpose() {
  std::cout << "\nThe program will take a year as its input and say if it's a leap\n";
  std::cout << "year or not. Do note that a leap year is that which has 366 days,\n";
  std::cout << "as opposed to natural years which only have 365. After the\n";
  std::cout << "Gregorian reformation, leap years are either multiples of four\n";
  std::cout << "which do not end in double zeroes, or years which end in double\n";
  std::cout << "zeroes such that, after taking said zeroes away, the remaining\n";
  std::cout << "number is divisible by four.\n\nPlease, introduce a year: ";
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with the wrong number of parameters.\nThis program should be called " << argv[0] << std::endl;
    return false;
  }
  return true;
}

void LeapYear(int year) {
  year % 4 == 0 && year % 100 != 0
    ? std::cout << "YES\n\n"
    : year % 100 == 0 && year % 400 == 0
      ? std::cout << "YES\n\n"
      : std::cout << "NO\n\n";
}

int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  int year{0};
  std::cin >> year;
  LeapYear(year);
  return 0;
}
