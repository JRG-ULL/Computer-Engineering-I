/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P79817_Powers.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   31 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P79817
 */

#include <iostream>

// Personally made Power function, not to be mistaken with the function pow()
// from the cmath.h library.
void Power(const int& base, const int& exponential) {
  int power{1};
  for (int i = 1; i <= exponential; i++) {
    power *= base;
  }
  std::cout << power << std::endl;
}

// Main function
int main() {
  int base;
  int exponential;
  while (std::cin >> base >> exponential) {
    switch (exponential) {  
      case 0:   // Any number to the power of zero is equal to one.
        std::cout << 1 << std::endl;
        break;

      default:  // For any exponential higher than three.
        Power(base, exponential);
        break;
    }
  }
  return 0;
 }
