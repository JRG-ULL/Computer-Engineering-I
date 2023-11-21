/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P37760_Trigonometry.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   21 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P37760
 */

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double angle{0.0};
  while (std::cin >> angle) {
    const double pi = 3.1415926536;
    angle *= (pi / 180.0);
    double cosine = cos(angle);
    if (angle == ) cosine *= -1.0;
    std::cout << std::fixed << std::setprecision(6) << sin(angle) << " " << cosine << std::endl;
  }
  return 0;
}