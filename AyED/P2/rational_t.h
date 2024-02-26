// AUTOR: Rodríguez González, Javier
// FECHA: 19 Feb. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican con comentarios las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://google.github.io/styleguide/cppguide.html

// Comment Style: Use either the // or /* */ syntax, as long as you are
// consistent.// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

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
  rational_t(const int = 0, const int = 1);
  ~rational_t() {}

  // Spaces vs. Tabs: Use only spaces, and indent 2 spaces at a time.

  // getters
  int get_num() const;
  int get_den() const;

  // setters
  void set_num(const int);
  void set_den(const int);

  double value(void) const;
  rational_t opposite(void) const;
  rational_t reciprocal(void) const;

  bool is_equal(const rational_t&, const double precision = kEpsilon) const;
  bool is_greater(const rational_t&, const double precision = kEpsilon) const;
  bool is_less(const rational_t&, const double precision = kEpsilon) const;

  rational_t add(const rational_t&) const;
  rational_t substract(const rational_t&) const;
  rational_t multiply(const rational_t&) const;
  rational_t divide(const rational_t&) const;

  void write(ostream& os = cout) const;
  void read(istream& is = cin);

 private:
  // Class Data Members: Data members of classes, both static and non-static,
  // are named like ordinary nonmember variables, but with a trailing
  // underscore.
  int num_, den_;
};

// sobrecarga de los operadores de E/S
ostream& operator<<(ostream& os, const rational_t&);
istream& operator>>(istream& is, rational_t&);

// FASE I: operadores
rational_t operator+(const rational_t&, const rational_t&);
rational_t operator-(const rational_t&, const rational_t&);
rational_t operator*(const rational_t&, const rational_t&);
rational_t operator/(const rational_t&, const rational_t&);
