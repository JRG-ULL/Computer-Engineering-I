/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P80660_Product_of_digits.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P61061
 */

#include <iostream>

void ProductOfDigits(int input) {
  int calc_aux = input;
  while (input >= 10) {
    int product{1};
    while (calc_aux > 0) {
      product *= calc_aux % 10;
      calc_aux /= 10;
    }
    std::cout << "The product of the digits of " << input << " is " << product << ".\n";
    input = product;
    calc_aux = product;
  }
  std::cout << "----------\n";
}

int main() {
  int input;
  while (std::cin >> input) {
    if (input < 10) std::cout << "The product of the digits of " << input << " is " << input << ".\n";
    ProductOfDigits(input);
  }
  return 0;
}