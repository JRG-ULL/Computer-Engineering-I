// AUTOR: Rodríguez González, Javier
// FECHA: 8 Feb. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://google.github.io/styleguide/cppguide.html

// Comment Style: Use either the // or /* */ syntax, as long as you are consistent.

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// Vertical Whitespace: Blank lines may help readability by visually separating the load-bearing content from the organizational wrapper.

// Function Declarations and Definitions: Return type on the same line as function name, parameters on the same line if they fit.
int rational_t::get_num() const {
  return num_;
}

int rational_t::get_den() const {
  return den_;
}
  
void rational_t::set_num(const int n) {
  num_ = n;
}
  
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}

double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// FASE II: Comparaciones

// Comparador de igualdad
bool rational_t::is_equal(const rational_t& r, const double precision) const { 
  return fabs(value() - r.value()) < precision;
}
 
// Comparador de superioridad
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  return value() - r.value() > precision;
}

// Comparador de inferioridad
bool rational_t::is_less(const rational_t& r, const double precision) const {
  return r.value() - value() > precision;
  // return value() - r.value() < -precision;
}

// Comprobador de cero
bool rational_t::is_zero(const double precision) const {
  return fabs(value()) < precision;
  // return get_num == 0;
}

// Comprobador de entero
bool rational_t::is_int() const {
  return get_num() % get_den() == 0;
}


// FASE III: Operaciones

// Operador suma
rational_t rational_t::add(const rational_t& r) {
  return rational_t(get_num() * r.get_den() + get_den() * r.get_num(), get_den() * r.get_den());
}

// Operador resta
rational_t rational_t::substract(const rational_t& r) {
  return rational_t(get_num() * r.get_den() - get_den() * r.get_num(), get_den() * r.get_den());
  // return add(r.opposite());
} 

// Operador multiplicación
rational_t rational_t::multiply(const rational_t& r) {
  return rational_t(get_num() * r.get_num(), get_den() * r.get_den());
}

// Operador División
rational_t rational_t::divide(const rational_t& r) {
  return rational_t(get_num() * r.get_den(), get_den() * r.get_num());
}

// Operador Cuadrado
rational_t rational_t::square() {
  return rational_t(get_num() * get_num(), get_den() * get_den());
}
// Operador Cubo
rational_t rational_t::cube() {
  return rational_t(get_num() * get_num() * get_num(), get_den() * get_den() * get_den());
}

// Operador Inverso
rational_t rational_t::inverse() {
  return rational_t(get_den(), get_num());
}

// Operador simplificación
rational_t rational_t::simplify() {
  return rational_t(get_num() / __gcd(get_num(), get_den()), get_den() / __gcd(get_num(), get_den()));
}

// E/S
void rational_t::write(ostream& os) const {
  os << get_num() << "/" << get_den() << " = " << value() << endl;
}

void rational_t::read(istream& is) {
  cout << "Numerador: ";
  is >> num_;
  cout << "Denominador: ";
  is >> den_;
  assert(den_ != 0);
}
