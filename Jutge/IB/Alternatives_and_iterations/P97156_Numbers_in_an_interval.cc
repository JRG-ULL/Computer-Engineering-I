/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P97156_Numbers_in_an_interval.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   22 Oct. 2023
 * @brief  This program takes two numbers, 'num1' and 'num2', and prints all numbers between said given numbers separated with commas.
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P97156
 */

#include <iostream>

int main() {
  int num1;
  int num2;
  while (std::cin >> num1 >> num2) {
    if (num1 > num2) {
      std::cout << std::endl;
    } else {
      for (int i = num1; i < num2; i++) {
          std::cout << i << ",";
        }
      std::cout << num2 << std::endl;
    }
  }
  return 0;
}

