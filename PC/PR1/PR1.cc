#include <iomanip>
#include <iostream>

int main() {
  std::cout << "PR1: Principios de computadores." << std::endl;
  double error;
  // Bucle do-while hasta que se introduzca un error válido.
  do {
    std::cout << "\nIntroduzca el máximo error permitido: ";
    std::cin >> error;
    if (error < 0.00001 || error >= 1) {
      std::cout
          << "\nERROR: El error introducido debe cumplir 0.00001 <= error < 1"
          << std::endl;
    } else {
      break;
    }
  } while (true);
  double e_number = 1.0;   // Iniciamos el número e en 1 (1/0!).
  double den = 1;          // Iniciamos el denominador en 1 (0!).
  double last_term = 1.0;  // Valor del último término de la suma (1/n!).
  double terms = 1;  // Número de términos empleados en la aproximación.
  while (last_term >= error) {
    den *= terms;
    last_term = 1 / den;
    e_number += last_term;
    ++terms;
  }
  std::cout << "\nNúmero e (aproximado): " << std::fixed
            << std::setprecision(16) << e_number << std::endl;
  std::cout << "Número de términos empleados: " << int(terms) << std::endl;
  std::cout << "PR1: Fin del programa." << std::endl;
  return 0;
}