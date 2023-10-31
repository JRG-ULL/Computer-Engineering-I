/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P80660_The_sequence_of_Collatz.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P80660
 */

#include <iostream>

void Collatz(int num) {
  int steps{0};
  while (num > 1) {
    num % 2 == 0
      ? num /= 2
      : num = (num * 3) + 1;
    steps++;
    }
  std::cout << steps << std::endl;
}

int main() {
  int num;
  while (std::cin >> num) Collatz(num);
  return 0;
}