// AUTOR: Rodríguez González, Javier
// FECHA: 19 Feb. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican con comentarios las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://google.github.io/styleguide/cppguide.html
// COMPILACIÓN: g++ -g rational_t.cpp main_p2.cpp -o main_p2

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <cmath>
#include <iostream>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "matrix_t.h"
#include "rational_t.h"
#include "vector_t.h"

int main() {
  rational_t a(1, 2), b(3, 1);

  // FASE I
  std::cout << "a + b: ";
  (a + b).write();

  std::cout << "b - a: ";
  (b - a).write();

  std::cout << "a * b: ";
  (a * b).write();

  std::cout << "a / b: ";
  (a / b).write();

  std::cout << std::endl;

  // FASE II
  vector_t<double> v, w;
  v.read(), v.write();
  w.read(), w.write();

  std::cout << "Producto escalar de vector_t<double>: " << scal_prod(v, w)
            << std::endl
            << std::endl;

  vector_t<rational_t> x;
  vector_t<rational_t> y;
  x.read(), x.write();
  y.read(), y.write();

  std::cout << "Producto escalar de vector_t<rational_t>: " << scal_prod(x, y)
            << std::endl
            << std::endl;

  // FASE III
  matrix_t<double> A;
  matrix_t<double> B;
  matrix_t<double> C;
  matrix_t<double> D;
  A.read(), A.write();
  B.read(), B.write();

  C.multiply(A, B);
  std::cout << "Multiplicación de matrices A y B: " << std::endl;
  C.write();

  return 0;
}