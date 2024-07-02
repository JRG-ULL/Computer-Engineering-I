/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    3 Oct. 2023
 * @brief   This program takes a binary number as its input and prints out
 *          its decimal representation on screen. The program will only process
 *          a single number, so vectors, arrays or strings are not allowed as
 *          input. Were the user to give a non-binary number, the program will
 *          exit displaying an error message.
 * @bug     There are no known bugs.
 * @see
 */

#include <iostream>

// Function that prints the program's purpose on the screen.
void PrintProgramPurpose() {
  std::cout
      << "\nThis program takes a binary number as its input and prints out\n"
      << "its decimal representation on screen. The program will only process\n"
      << "a single number, so vectors, arrays or strings are not allowed as\n"
      << "input. Were the user to give a non-binary number, the program will\n"
      << "exit displaying an error message.\n\nPlease, introduce a binary "
         "number: ";
}

// Function that checks if the program has the correct number of parameters it
// needs to properly function.
bool CheckCorrectParameters(const int argc, char* argv[],
                            const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with the wrong number of "
                 "parameters.\nThis program should be called "
              << argv[0] << "\n\n";
    return false;
  }
  return true;
}

// Power function to properly calculate the decimal expression of the binary
// number input by the user.
int Power(const int& base, int exponential) {
  int power{1};
  if (exponential == 0) power = 1;
  for (int i = 1; i <= exponential; i++) {
    power *= base;
  }
  return power;
}

// Function that checks if the input number is a true binary number or not.
bool CheckBinary(int binary) {
  while (binary > 0) {
    if (binary % 10 > 1) {
      std::cout << "Wrong Input.\n\n";
      return false;
    }
    binary /= 10;
  }
  return true;
}

// Function that calculates the decimal expression of the binary number given by
// the user.
int BinaryToDecimal(int binary) {
  int decimal{0};
  int exponential{0};
  while (binary > 0) {
    if (binary % 10 != 0) {
      decimal += Power(2, exponential);
    }
    binary /= 10;
    exponential++;
  }
  return decimal;
}

// Function that prints out the resulting decimal expression.
void PrintBinaryConversion(const int& binary) {
  std::cout << "The decimal representation of " << binary << " is "
            << BinaryToDecimal(binary) << ".\n\n";
}

// Main function, in which the user will input the binary number the program
// will use to print out the decimal representation of.
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  int binary;
  std::cin >> binary;
  if (!CheckBinary(binary)) {
    return 0;
  }
  PrintBinaryConversion(binary);
  return 0;
}
