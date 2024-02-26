// AUTOR: Rodríguez González, Javier
// FECHA: 19 Feb. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican con comentarios las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://google.github.io/styleguide/cppguide.html

#pragma once

#include <cassert>
#include <iostream>

#include "vector_t.h"

using namespace std;

template <class T>
class matrix_t {
 public:
  matrix_t(const int = 0, const int = 0);
  ~matrix_t();

  void resize(const int, const int);

  // getters
  int get_m(void) const;
  int get_n(void) const;

  // getters-setters
  T& at(const int, const int);
  T& operator()(const int, const int);

  // getters constantes
  const T& at(const int, const int) const;
  const T& operator()(const int, const int) const;

  // operaciones y operadores
  void multiply(const matrix_t<T>&, const matrix_t<T>&);

  void write(ostream& = cout) const;
  void read(istream& = cin);

 private:
  int m_, n_;  // m_ filas y n_ columnas
  vector_t<T> v_;

  int pos(const int, const int) const;
};

// Constructor de la matriz
template <class T>
matrix_t<T>::matrix_t(const int m, const int n) {
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}

// Destructor de la matriz
template <class T>
matrix_t<T>::~matrix_t() {}

// Método de redimensión
template <class T>
void matrix_t<T>::resize(const int m, const int n) {
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}

// Getter del número de filas
template <class T>
inline int matrix_t<T>::get_m() const {
  return m_;
}

// Getter del número de columnas
template <class T>
inline int matrix_t<T>::get_n() const {
  return n_;
}

// Getter de referencia de posición
template <class T>
T& matrix_t<T>::at(const int i, const int j) {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}

// Sobrecarga del operador de indexación
template <class T>
T& matrix_t<T>::operator()(const int i, const int j) {
  return at(i, j);
}

// Getter de referencia constante de posición
template <class T>
const T& matrix_t<T>::at(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}

// Sobrecarga del operador de indexación constante
template <class T>
const T& matrix_t<T>::operator()(const int i, const int j) const {
  return at(i, j);
}

// Método de escritura de la matriz (flujo de salida)
template <class T>
void matrix_t<T>::write(ostream& os) const {
  os << get_m() << "x" << get_n() << endl;
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j) os << at(i, j) << "\t";
    os << endl;
  }
  os << endl;
}

// Método de lectura de la matriz (flujo de entrada)
template <class T>
void matrix_t<T>::read(istream& is) {
  is >> m_ >> n_;
  resize(m_, n_);
  for (int i = 1; i <= get_m(); ++i)
    for (int j = 1; j <= get_n(); ++j) is >> at(i, j);
}

// Método de posición
template <class T>
inline int matrix_t<T>::pos(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return (i - 1) * get_n() + (j - 1);
}

// FASE III: producto matricial
template <class T>
void matrix_t<T>::multiply(const matrix_t<T>& A, const matrix_t<T>& B) {
  assert(A.get_n() == B.get_m());
  resize(A.get_m(), B.get_n());
  // Recorrido de las filas de A (Último paso a realizar, cambio de número de
  // fila: A[x][0], A[x][1], A[x][2], ..., A[x][m])
  for (int i = 1; i <= A.get_m(); ++i) {
    // Recorrido de las columnas de B (Lectura de los valores de cada columna de
    // B: B[x][0], B[x][1], B[x][2], ..., B[x][n])
    for (int j = 1; j <= B.get_n(); ++j) {
      T multiply{0};
      // Recorrido de las columnas de A (Primer paso a realizar, lectura de las
      // columnas de A: A[0][x], A[1][x], A[2][x], ..., A[n][x])
      for (int k = 1; k <= A.get_n(); ++k) {
        multiply += A(i, k) * B(k, j);
      }
      at(i, j) = multiply;
    }
  }
}