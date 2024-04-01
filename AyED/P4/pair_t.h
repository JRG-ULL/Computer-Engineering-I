// AUTOR: Rodríguez González, Javier
// FECHA: 1 abr. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
//

#ifndef PAIRT_H_
#define PAIRT_H_

#include <iostream>

template <class T>
class pair_t {
 public:
  // constructores
  pair_t(void);
  pair_t(T, int);

  // destructor
  ~pair_t(void);

  // getters & setters
  T get_val(void) const;
  int get_inx(void) const;
  void set(T, int);

  // E/S
  std::istream& read(std::istream& is = std::cin);
  std::ostream& write(std::ostream& os = std::cout) const;

 private:
  T val_;
  int inx_;
};

template <class T>
pair_t<T>::pair_t() : val_(), inx_(-1) {}

template <class T>
pair_t<T>::pair_t(T val, int inx) : val_(val), inx_(inx) {}

template <class T>
pair_t<T>::~pair_t() {}

// Método de establecimiento de valor e índice.
template <class T>
void pair_t<T>::set(T val, int inx) {
  val_ = val;
  inx_ = inx;
}

// Método de devolución de índice.
template <class T>
int pair_t<T>::get_inx() const {
  return inx_;
}

// Método de devolución de valor.
template <class T>
T pair_t<T>::get_val() const {
  return val_;
}

// Método de lectura por línea de comandos (flujo de entrada).
template <class T>
std::istream& pair_t<T>::read(std::istream& is) {
  return is >> inx_ >> val_;
}

// Método de impresión por pantalla (flujo de salida).
template <class T>
std::ostream& pair_t<T>::write(std::ostream& os) const {
  return os << "(" << inx_ << ":" << val_ << ")";
}

// Sobrecarga del operador de flujo de salida.
template <class T>
std::ostream& operator<<(std::ostream& os, const pair_t<T>& p) {
  p.write(os);
  return os;
}

#endif  // PAIRT_H_
