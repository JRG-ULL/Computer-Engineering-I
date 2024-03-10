// AUTOR: Rodríguez González, Javier
// FECHA: 8 Feb. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://google.github.io/styleguide/cppguide.html

// Comment Style: Use either the // or /* */ syntax, as long as you are
// consistent.

#pragma once

#include <algorithm>  // Solo empleado para el método de simplificación.
#include <cassert>
#include <cmath>
#include <iostream>

// Constant Names: Variables declared constexpr or const, and whose value is
// fixed for the duration of the program, are named with a leading "k" followed
// by mixed case.
#define kEpsilon 1e-6

using namespace std;

class rational_t {
  // Declaration Order: A class definition should usually start with a public:
  // section, followed by protected:, then private:.
 public:
  rational_t(const int = 0,
             const int =
                 1);  // Constructor de la clase (por parámetros y por defecto).
  ~rational_t() {}    // Destructor por defecto de la clase.

  // Spaces vs. Tabs: Use only spaces, and indent 2 spaces at a time.
  // getters
  int get_num() const;  // Método de acceso al numerador.
  int get_den() const;  // Método de acceso al denominador.

  // setters
  void set_num(
      const int);  // Método de modificación o establecimiento del numerador.
  void set_den(
      const int);  // Método de modificación o establecimiento del denominador.

  double value(void) const;

  // FASE II: Comparadores
  bool is_equal(const rational_t&, const double precision = kEpsilon)
      const;  // Comparador de igualdad.
  bool is_greater(const rational_t&, const double precision = kEpsilon)
      const;  // Comparador de superioridad.
  bool is_less(const rational_t&, const double precision = kEpsilon)
      const;  // Comparador de inferioridad
  bool is_zero(const double precision = kEpsilon) const;
  bool is_int() const;

  // FASE III: Operadores
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);
  rational_t square();
  rational_t cube();
  rational_t inverse();
  rational_t simplify();

  void write(ostream& = cout) const;
  void read(istream& = cin);

 private:
  // Class Data Members: Data members of classes, both static and non-static,
  // are named like ordinary nonmember variables, but with a trailing
  // underscore.
  int num_, den_;
};
