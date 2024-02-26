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

using namespace std;

template <class T>
class vector_t {
 public:
  vector_t(const int = 0);
  ~vector_t();

  void resize(const int);

  // getters
  T get_val(const int) const;
  int get_size(void) const;

  // setters
  void set_val(const int, const T);

  // getters-setters
  T& at(const int);
  T& operator[](const int);

  // getters constantes
  const T& at(const int) const;
  const T& operator[](const int) const;

  void write(ostream& = cout) const;
  void read(istream& = cin);

 private:
  T* v_;
  int sz_;

  void build(void);
  void destroy(void);
};

// Constructor del vector
template <class T>
vector_t<T>::vector_t(const int n) {
  sz_ = n;
  build();
}

// Destructor del vector
template <class T>
vector_t<T>::~vector_t() {
  destroy();
}

// Desarrollo del constructor
template <class T>
void vector_t<T>::build() {
  v_ = NULL;
  if (sz_ != 0) {
    v_ = new T[sz_];
    assert(v_ != NULL);
  }
}

// Desarrollo del destructor
template <class T>
void vector_t<T>::destroy() {
  if (v_ != NULL) {
    delete[] v_;
    v_ = NULL;
  }
  sz_ = 0;
}

// Método de redimensión
template <class T>
void vector_t<T>::resize(const int n) {
  destroy();
  sz_ = n;
  build();
}

// Getter de valor
template <class T>
inline T vector_t<T>::get_val(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

// Getter de tamaño
template <class T>
inline int vector_t<T>::get_size() const {
  return sz_;
}

// Setter de valor
template <class T>
void vector_t<T>::set_val(const int i, const T d) {
  assert(i >= 0 && i < get_size());
  v_[i] = d;
}

// Getter de referencia
template <class T>
T& vector_t<T>::at(const int i) {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

// Sobrecarga del operador de indexación
template <class T>
T& vector_t<T>::operator[](const int i) {
  return at(i);
}

// Getter de referencia constante
template <class T>
const T& vector_t<T>::at(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

// Sobrecarga del operador constante de indexación
template <class T>
const T& vector_t<T>::operator[](const int i) const {
  return at(i);
}

// Método de escritura del vector (flujo de salida)
template <class T>
void vector_t<T>::write(ostream& os) const {
  os << get_size() << ":\t";
  for (int i = 0; i < get_size(); i++) os << at(i) << "\t";
  os << endl;
}

// Método de lectura del vector (flujo de entrada)
template <class T>
void vector_t<T>::read(istream& is) {
  is >> sz_;
  resize(sz_);
  for (int i = 0; i < sz_; ++i) is >> at(i);
}

// FASE II: producto escalar
template <class T>
T scal_prod(const vector_t<T>& v, const vector_t<T>& w) {
  assert(v.get_size() == w.get_size());
  T scal_prod{0};
  for (int i = 0; i < v.get_size(); ++i) {
    scal_prod += v.at(i) * w.at(i);
  }
  return scal_prod;
}

// Producto escalar de números racionales
double scal_prod(const vector_t<rational_t>& v, const vector_t<rational_t>& w) {
  assert(v.get_size() == w.get_size());
  double scal_prod{0.0};
  for (int i = 0; i < w.get_size(); ++i) {
    scal_prod += v.at(i).value() * w.at(i).value();
  }
  return scal_prod;
}
