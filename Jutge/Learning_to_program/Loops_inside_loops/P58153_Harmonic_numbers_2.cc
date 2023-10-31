/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P58153_Harmonic_numbers_2.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P581532
 */

#include <iostream>
#include <iomanip>

void Harmonic(const int& num1, const int& num2) {
  double harmonic{0.0};
  for (double i = 1.0; i <= num1; i++) {
    harmonic += 1.0 / i;
  }
  for (double j = 1.0; j <= num2; j++) {
    harmonic -= 1.0 / j;
  }
  std::cout << std::fixed << std::setprecision(10) << harmonic;
}

int main() {
  int num1;
  int num2;
  while (std::cin >> num1 >> num2) {
    Harmonic(num1, num2);
  }
  return 0;
}