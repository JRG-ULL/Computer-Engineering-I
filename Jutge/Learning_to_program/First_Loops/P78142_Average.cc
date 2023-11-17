/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P78142_Average.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   07 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P78142
 */

#include <iostream>
#include <vector>

double Average(const std::vector<double>& sequence) {
  double sum{0.0};
  double number_of_elements{0.0};
  for (int i = 0; i < sequence.size(); i++) {
    sum += sequence.at(i);
    number_of_elements++;
  }
  double average = sum / number_of_elements;
  return average;
}

int main() {
  std::vector<double> sequence;
  while (std::cin >> sequence) {
    Average(sequence);
  }
  return 0;
}
