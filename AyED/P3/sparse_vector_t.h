// AUTOR: Rodríguez González, Javier
// FECHA: 9 mar. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 4.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
//

#ifndef SPARSE_VECTORT_H_
#define SPARSE_VECTORT_H_

#include <math.h>  // fabs

#include <iostream>

#include "pair_t.h"
#include "vector_t.h"

#define kEpsilon 1.0e-6

typedef pair_t<double> pair_double_t;
typedef vector_t<pair_double_t> pair_vector_t;

class sparse_vector_t {
 public:
  // constructores
  sparse_vector_t(const int = 0);  // Constructor por defecto.
  sparse_vector_t(const vector_t<double>&,
                  const double = kEpsilon);  // Constructor normal.
  sparse_vector_t(const sparse_vector_t&);   // Constructor de copia.

  // operador de asignación
  sparse_vector_t& operator=(const sparse_vector_t&);

  // destructor
  ~sparse_vector_t();

  // getters
  int get_nz(void) const;
  int get_n(void) const;

  // getters-setters
  pair_double_t& at(const int);
  pair_double_t& operator[](const int);

  // getters constantes
  const pair_double_t& at(const int) const;
  const pair_double_t& operator[](const int) const;

  // E/S
  void write(std::ostream& = std::cout) const;

 private:
  pair_vector_t pv_;  // valores + índices
  int nz_;            // nº de valores distintos de cero = tamaño del vector
  int n_;             // tamaño del vector original

  // bool IsNotZero(const double, const double = kEpsilon) const;
};

bool IsNotZero(const double val, const double eps = kEpsilon) {
  return fabs(val) > eps;
}

sparse_vector_t::sparse_vector_t(const int n) : pv_(n), nz_(0), n_(n) {}

// FASE II
sparse_vector_t::sparse_vector_t(const vector_t<double>& v, const double eps)
    : pv_(), nz_(0), n_(0) {
  n_ = v.get_size();  // Obtenemos el tamaño del vector original.
  for (int i = 0; i < n_; ++i) {
    if (IsNotZero(v.at(i), eps)) {
      ++nz_;  // Contabilizamos el número de elementos no nulos.
    }
  }
  pv_.resize(nz_);  // Obtenemos el tamaño del nuevo vector (número de elementos
                    // no nulos del vector original).
  for (int i = 0, k = 0; i < n_; ++i) {
    if (IsNotZero(v.at(i), eps)) {
      // Creamos un par (valor, índice) y lo asignamos al vector pv_.
      pv_.at(k) = pair_double_t(v.get_val(i), i);
      ++k;
    }
  }
}

// constructor de copia
sparse_vector_t::sparse_vector_t(const sparse_vector_t& w) {
  *this = w;  // se invoca directamente al operator=
}

// operador de asignación
sparse_vector_t& sparse_vector_t::operator=(const sparse_vector_t& w) {
  nz_ = w.get_nz();
  n_ = w.get_n();
  pv_ = w.pv_;

  return *this;
}

// Destructor de la clase.
sparse_vector_t::~sparse_vector_t() {}

// Método de devolución del número de elementos no nulos.
inline int sparse_vector_t::get_nz() const { return nz_; }

// Método de devolución del tamaño original del vector.
inline int sparse_vector_t::get_n() const { return n_; }

// Método de devolución de referencia al par (valor, índice) en la posición
// dada.
pair_double_t& sparse_vector_t::at(const int i) {
  assert(i >= 0 && i < get_nz());
  return pv_[i];
}

// Operador de indexación.
pair_double_t& sparse_vector_t::operator[](const int i) { return at(i); }

// Versión constante del método 'at'.
const pair_double_t& sparse_vector_t::at(const int i) const {
  assert(i >= 0 && i < get_nz());
  return pv_[i];
}

// Versión constante del operador de indexación.
const pair_double_t& sparse_vector_t::operator[](const int i) const {
  return at(i);
}

// E/S
void sparse_vector_t::write(std::ostream& os) const {
  os << get_n() << "(" << get_nz() << "): [ ";
  for (int i = 0; i < get_nz(); i++) os << pv_[i] << " ";
  os << "]" << std::endl;
}

// Sobrecarga del operador de impresión por pantalla (flujo de salida).
std::ostream& operator<<(std::ostream& os, const sparse_vector_t& sv) {
  sv.write(os);
  return os;
}

#endif  // SPARSE_VECTORT_H_
