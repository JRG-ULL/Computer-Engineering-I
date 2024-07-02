/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Algoritmos y Estructuras de Datos 2023-2024
 * 
 * @file   rising.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   16 Jun. 2024
 * @brief  
 * @bug    There are no known bugs.
 */

#include <iostream>
#include <vector>

void rising(std::vector<int>& numbers, int index) {
  const int min_value = index;
  const int max_value = (10 - numbers.size() + index);
  const int prev_value = index == 0 ? -1 : numbers[index - 1]; 
  // Caso base
  if (index == numbers.size()) {
    for (int i = 0; i < numbers.size(); ++i) {
      std::cout << numbers.at(i);
    }
    std::cout << std::endl;
  } else {
    // int max = (min_value > prev_value + 1) ? min_value : prev_value + 1;
    for (/* int i = max */ int i = prev_value + 1; i <= max_value; ++i) {
     numbers[index] = i;
     rising(numbers, index + 1);
    }
  }
}

int main() {
  int example = 0;
  std::vector<int> test(4);
  rising(test, example);
  return 0;
}