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
  std::cout << "\nThis program prints out the function specified in the practice's\n";
  std::cout << "declaration. Three variables (x, y, t) will be used.\n\nPlease, introduce the three variables: ";
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with the wrong number of parameters.\nThis program should be called " << argv[0] << "\n\n";
    return false;
  }
  return true;
}

double Power(const double base, double exponential) {
  double power{1.0};
  if (base == 0.0) {
    return power;
  }
  for (int i = 1.0; i <= exponential; i++) {
    power *= base;
  }
  return power;
}

double SquareRoot(double base) {
  double square_root{0.0};
  for (double i = 0.0; i <= base; i++) {
    if (Power(i, 2.0) == base) square_root = i;
  }
  return square_root;
}

double FunctionExample(double first_parameter, double second_parameter, double third_parameter) {
  double numerator = SquareRoot(((2.0 * third_parameter) - 4.0));
  double denominator = Power(first_parameter, 2.0) - Power(second_parameter, 2.0);
  double function_example = numerator / denominator;
  return function_example;
}

void PrintFunction(double first_parameter, double second_parameter, double third_parameter) {
  std::cout << "The result of the function example for the variables " << first_parameter << ", " << second_parameter << " and "
            << third_parameter << " is " << FunctionExample(first_parameter, second_parameter, third_parameter) << ".\n\n";
}

int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  double first_parameter{0.0};
  double second_parameter{0.0};
  double third_parameter{0.0};
  std::cin >> first_parameter >> second_parameter >> third_parameter;
  PrintFunction(first_parameter, second_parameter, third_parameter);
  return 0;
}
