/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P42280_Chess_board_1.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   03 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P422801
 */

#include <iostream>

int Chess(const std::string& coins) {
  int chess_sum{0};
  for (int i = 0; i < coins.size(); i++) {
     chess_sum += coins.at(i);
  }
  return chess_sum;
}

int main() {
  int rows;
  int columns;
  while (std::cin >> rows >> columns) {
    std::string coins;
    for (int size = 0; size < rows; size++) {
      std::cin >> coins;
    }
    std::cout << Chess(coins) << std::endl;
  }
  return 0;
}
