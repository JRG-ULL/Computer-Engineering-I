// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

int main() {
  rational_t a(1, 2), b(3), c;

  std::cout << "[READ & WRITE]" << std::endl;
  std::cout << "a.value() = " << a.value() << std::endl;
  std::cout << "b.value() = " << b.value() << std::endl;
  std::cout << "c.value() = " << c.value() << std::endl;

  std::cout << "\na: ";
  a.write();
  std::cout << "b: ";
  b.write();

  std::cout << std::endl;
  c.read();
  std::cout << "c: ";
  c.write();

  // FASE II: Comparaciones
  std::cout << "\n\n[FASE II] - Comparaciones" << std::endl;
  rational_t x(1, 3), y(2, 3);
  std::cout << "x: ";
  x.write();
  std::cout << "y: ";
  y.write();
  std::cout << "\nx == y? " << (x.is_equal(y) ? "true" : "false") << std::endl;
  std::cout << "x > y? " << (x.is_greater(y) ? "true" : "false") << std::endl;
  std::cout << "x < y? " << (x.is_less(y) ? "true" : "false") << std::endl;

  // FASE III: Operaciones
  std::cout << "\n\n[FASE III] - Operaciones" << std::endl; 
  std::cout << "a + b: ";
  a.add(b).write();
  
  std::cout << "b - a: ";
  b.substract(a).write();

  cout << "a * b: ";
  a.multiply(b).write();
  
  std::cout << "a / b: ";
  a.divide(b).write();

  std::cout << "a^2: ";
  a.square().write();

  std::cout << "a^3: ";
  a.cube().write();
  
  return 0;
}