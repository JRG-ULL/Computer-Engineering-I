// AUTOR: Rodríguez González, Javier
// FECHA: 1 abr. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// COMPILACIÓN: g++ -g main_sllpolynomial.cc -o main_sllpolynomial
// EJECUCIÓN: ./main_sllpolynomial < data_sllpolynomial.txt

#include <iostream>

#include "sllpolynomial.h"

int main() {
  vector_t<double> v1;
  vector_t<double> v2;
  vector_t<double> v3;
  std::cin >> v1 >> v2 >> v3;
  std::cout << "v1 = " << v1;
  std::cout << "v2 = " << v2;
  std::cout << "v3 = " << v3;
  std::cout << std::endl;

  // Fase II
  SllPolynomial sllp1(v1);
  SllPolynomial sllp2(v2);
  SllPolynomial sllp3(v3);
  std::cout << "sllp1 = " << sllp1;
  std::cout << "sllp2 = " << sllp2;
  std::cout << "sllp3 = " << sllp3;
  std::cout << std::endl;

  // Fase III
  double x1;
  double x2;
  double x3;
  std::cin >> x1 >> x2 >> x3;
  std::cout << "sllp1(" << x1 << ") = " << sllp1.Eval(x1) << std::endl;
  std::cout << "sllp1(" << x2 << ") = " << sllp1.Eval(x2) << std::endl;
  std::cout << "sllp1(" << x3 << ") = " << sllp1.Eval(x3) << std::endl;
  std::cout << "sllp2(" << x1 << ") = " << sllp2.Eval(x1) << std::endl;
  std::cout << "sllp2(" << x2 << ") = " << sllp2.Eval(x2) << std::endl;
  std::cout << "sllp2(" << x3 << ") = " << sllp2.Eval(x3) << std::endl;
  std::cout << "sllp3(" << x1 << ") = " << sllp3.Eval(x1) << std::endl;
  std::cout << "sllp3(" << x2 << ") = " << sllp3.Eval(x2) << std::endl;
  std::cout << "sllp3(" << x3 << ") = " << sllp3.Eval(x3) << std::endl;
  std::cout << std::endl;

  std::cout << "sllp1 == sllp1? " << (sllp1.IsEqual(sllp1) ? "true" : "false")
            << std::endl;
  std::cout << "sllp2 == sllp2? " << (sllp2.IsEqual(sllp2) ? "true" : "false")
            << std::endl;
  std::cout << "sllp3 == sllp3? " << (sllp3.IsEqual(sllp3) ? "true" : "false")
            << std::endl;
  std::cout << "sllp1 == sllp2? " << (sllp1.IsEqual(sllp2) ? "true" : "false")
            << std::endl;
  std::cout << "sllp2 == sllp1? " << (sllp2.IsEqual(sllp1) ? "true" : "false")
            << std::endl;
  std::cout << "sllp1 == sllp3? " << (sllp1.IsEqual(sllp3) ? "true" : "false")
            << std::endl;
  std::cout << "sllp3 == sllp1? " << (sllp3.IsEqual(sllp1) ? "true" : "false")
            << std::endl;
  std::cout << "sllp2 == sllp3? " << (sllp2.IsEqual(sllp3) ? "true" : "false")
            << std::endl;
  std::cout << "sllp3 == sllp2? " << (sllp3.IsEqual(sllp2) ? "true" : "false")
            << std::endl;
  std::cout << std::endl;

  // Fase IV
  SllPolynomial sllpsum12;
  SllPolynomial sllpsum23;

  std::cout << "sllp1 + sllp2 = ";
  sllp1.Sum(sllp2, sllpsum12);
  std::cout << "sllp2 + sllp3 = ";
  sllp2.Sum(sllp3, sllpsum23);

  return 0;
}
