/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    17 Nov. 2023
 * @brief   
 * @bugs    There are no known bugs.
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "\nAfter receiving a string of characters with no spaces, this program\n";
  std::cout << "will print out the same string but changing all lowercase characters\n";
  std::cout << "into uppercase characters and vice versa. Numbers and other\n";
  std::cout << "non-alphanumeric characters will not be affected by this change.\n\n";
  std::cout << "Please, introduce a string of characters (with no spaces): ";
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed using the wrong number of parameters.\nThis program should be called " << argv[0] << "\n\n";
    return false;
  }
  return true;
}

void ChangeCase(std::string input) {
  for (int i = 0; i < input.size(); i++) {
    if (input.at(i) >= 65 && input.at(i) <= 90) input.at(i) += 32;
    else if (input.at(i) >= 97 && input.at(i) <= 122) input.at(i) -= 32;
    std::cout << input.at(i);
  }
  std::cout << "\n\n";
}

int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::string input;
  std::cin >> input;
  ChangeCase(input);
  return 0;
}
