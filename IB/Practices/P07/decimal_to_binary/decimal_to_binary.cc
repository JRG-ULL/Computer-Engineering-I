/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   decimal_to_binary.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   17 Nov. 2023
 * @brief  This program takes a decimal number as its input and prints out
 *         its binary representation on screen. The program will only process
 *         a single number, so vectors, arrays or strings are not allowed as
 *         input.
 * @bug    There are no known bugs.
 */

#include <iostream>

// Function that prints out the program's purpose on screen.
void PrintProgramPurpose() {
  std::cout << "This program takes a decimal number as its input and prints out\n";
  std::cout << "its binary representation on screen. The program will only process\n";
  std::cout << "a single number, so vectors, arrays or strings are not allowed as\n";
  std::cout << "input.\n\nPlease, introduce a decimal number: ";
}

// Function that checks if the program has the correct number of parameters it requires to properly function.
bool (CheckProgramPurpose(const int argc, char *argv[], const int kCorrectNumber)) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with the wrong number of parameters.\nThis program should be called " << argv[0] << "\n\n";
    return false;
  }
  return true;
}

//
