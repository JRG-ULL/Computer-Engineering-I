/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P14_Nth_factorial.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   27 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P14
 */

#include <iostream>

void Factorial(int nth_num) {
  for (int i = 1; i < nth_num; i++) {
    int factorial{nth_num};
    factorial *= nth_num - i;
  }
}

void PrintFactorial(int factorial) {
  std::cout << Factorial(factorial) << std::endl;
}

int main() {
  int input_num;
  while (std::cin >> input_num) {
    PrintFactorial(input_num);
  }
  return 0;
}
