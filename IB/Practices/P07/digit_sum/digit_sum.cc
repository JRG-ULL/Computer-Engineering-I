/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería Informática
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    22 Sep. 2023
 * @brief   This program takes a natural number as its input and prints out the
 *          sum of each one of its digits as a result.
 * @bug     There are no known bugs.
 * @see
 */

#include <iostream>

// Function that prints out the program's purpose.
void PrintProgramPurpose() {
  std::cout << "This program takes a natural number as its input and prints out the\nsum of each one of its digits as a result.\n\nPlease, introduce a number: ";
}

// Function that checks if the program has the correct number of parameters it needs to properly function.
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters.\nThis program should be called " << argv[0] << "\n\n";
    return false;
  }
  return true;
}

// Function that calculates the sum of the digits of the input number.
int DigitSum(int num) {
  int sum{0};
  while (num > 0) {
    sum += num % 10;
    num /= 10;
    }
  return sum;
}

// Function that prints out the resulting sum of digits of the input number.
void PrintDigitSum(const int& num) {
  std::cout << "The sum of digits of " << num << " is " << DigitSum(num) << ".\n";
}

// Main function, in which the user will input the number for the program to calculate the sum of digits of.
int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  int num;
  std::cin >> num;
  PrintDigitSum(num);
  return 0;
}
