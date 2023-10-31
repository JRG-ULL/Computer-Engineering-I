/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P11_Fibonacci.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   27 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 */

#include <iostream>

int main() {
  int input;
  while (std::cin >> input) {
    int fib_aux1{0};
    int fib_aux2{1};
    switch (input) {
      case 0:
        std::cout << "\n";
        break;

      case 1:
        std::cout << fib_aux1 << "\n";
        break;

      case 2:
        std::cout << fib_aux1 << "," << fib_aux2 << "\n";
        break;

      default:
        std::cout << fib_aux1 << "," << fib_aux2 << ",";
        int sum{0};
        for (int i = 2; i < input -1; i++) {
          sum = fib_aux1 + fib_aux2;
          std::cout << sum << ",";
          fib_aux1 = fib_aux2;
          fib_aux2 = sum;
        }
        sum = fib_aux1 + fib_aux2;
        std::cout << sum << "\n";
        break;
    }
  }
  return 0;
}
