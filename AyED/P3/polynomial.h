// AUTOR: Rodríguez González, Javier
// FECHA: 9 mar. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
//

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

#include <math.h>  // fabs, pow

#include <iostream>

#include "sparse_vector_t.h"
#include "vector_t.h"

// Clase para polinomios basados en vectores densos de doubles
class Polynomial : public vector_t<double> {
 public:
  // constructores
  Polynomial(const int n = 0) : vector_t<double>(n){};
  Polynomial(const Polynomial& pol)
      : vector_t<double>(pol){};  // constructor de copia

  // destructor
  ~Polynomial(){};

  // E/S
  void Write(std::ostream& = std::cout, const double eps = kEpsilon) const;

  // operaciones
  double Eval(const double) const;
  bool IsEqual(const Polynomial&, const double = kEpsilon) const;
};

// Clase para polinomios basados en vectores dispersos
class SparsePolynomial : public sparse_vector_t {
 public:
  // constructores
  SparsePolynomial(const int n = 0) : sparse_vector_t(n){};
  SparsePolynomial(const Polynomial& pol) : sparse_vector_t(pol){};
  SparsePolynomial(const SparsePolynomial&);  // constructor de copia

  // destructor
  ~SparsePolynomial(){};

  // E/S
  void Write(std::ostream& = std::cout) const;

  // operaciones
  double Eval(const double) const;
  bool IsEqual(const SparsePolynomial&, const double = kEpsilon) const;
  bool IsEqual(const Polynomial&, const double = kEpsilon) const;

  // MODIFICACIONES
  // void PrintHigher(const double) const;
  // void PrintOdd() const;
  // void PrintEven() const;
};

// E/S
void Polynomial::Write(std::ostream& os, const double eps) const {
  os << get_size() << ": [ ";
  bool first{true};
  for (int i{0}; i < get_size(); i++)
    if (IsNotZero(at(i), eps)) {
      os << (!first ? " + " : "") << at(i)
         << (i > 1      ? " x^"
             : (i == 1) ? " x"
                        : "");
      if (i > 1) os << i;
      first = false;
    }
  os << " ]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Polynomial& p) {
  p.Write(os);
  return os;
}

// Operaciones con polinomios

// Evaluación de un polinomio representado por vector denso
double Polynomial::Eval(const double x) const {
  double result{0.0};
  for (int i = 0; i < get_size(); ++i) {
    // Sumamos al resultado el coeficiente en 'i' multiplicado por x elevado al
    // índice en 'i'.
    result += at(i) * pow(x, i);
  }
  return result;
}

// Comparación si son iguales dos polinomios representados por vectores densos
bool Polynomial::IsEqual(const Polynomial& pol, const double eps) const {
  bool differents = false;
  // Empleamos el tamaño del vector más pequeño para comparar.
  int minimal_size =
      (get_size() - pol.get_size() < eps) ? get_size() : pol.get_size();
  // Comprobamos cada coeficiente.
  for (int i = 0; i < minimal_size; ++i) {
    // Si la diferencia absoluta entre dos coeficientes es mayor que la
    // precisión, entonces no son iguales.
    if (fabs(at(i) - pol.at(i)) > eps) {
      differents = true;
    }
  }
  return !differents;
}

// constructor de copia
SparsePolynomial::SparsePolynomial(const SparsePolynomial& spol) {
  *this = spol;  // se invoca directamente al operator=
}

// E/S
void SparsePolynomial::Write(std::ostream& os) const {
  os << get_n() << "(" << get_nz() << "): [ ";
  bool first{true};
  for (int i{0}; i < get_nz(); i++) {
    int inx{at(i).get_inx()};
    os << (!first ? " + " : "") << at(i).get_val()
       << (inx > 1      ? " x^"
           : (inx == 1) ? " x"
                        : "");
    if (inx > 1) os << inx;
    first = false;
  }
  os << " ]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const SparsePolynomial& p) {
  p.Write(os);
  return os;
}

// Operaciones con polinomios

// Evaluación de un polinomio representado por vector disperso
double SparsePolynomial::Eval(const double x) const {
  double result{0.0};
  for (int i = 0; i < get_nz(); ++i) {
    // Sumamos al resultado el coeficiente en 'i' multiplicado por x elevado al
    // índice en 'i'.
    result += at(i).get_val() * pow(x, at(i).get_inx());
  }
  return result;
}

// Comparación si son iguales dos polinomios representados por vectores
// dispersos
bool SparsePolynomial::IsEqual(const SparsePolynomial& spol,
                               const double eps) const {
  bool differents = false;
  // Al tratarse de vectores dispersos, debemos comprobar el tamaño de ambos
  // vectores antes de comenzar la evaluación de cada coeficiente.
  if (get_nz() != spol.get_nz()) {
    differents = true;
  }
  // El uso de la variable 'minimal_size' es meramente para evitar una excepción
  // de programación.
  int minimal_size =
      (get_nz() - spol.get_nz() < eps) ? get_nz() : spol.get_nz();
  // Comprobamos cada coeficiente.
  for (int i = 0; i < minimal_size; ++i) {
    // Si la diferencia absoluta entre los coeficientes es mayor a la precisión
    // establecida, entonces no son iguales.
    if (fabs(at(i).get_val() - spol.at(i).get_val()) > eps) {
      differents = true;
    }
  }
  return !differents;
}

// Comparación si son iguales dos polinomios representados por
// vector disperso y vector denso
bool SparsePolynomial::IsEqual(const Polynomial& pol, const double eps) const {
  bool differents = false;
  // Empleamos el tamaño del vector más pequeño para comparar.
  int minimal_size =
      (get_nz() - pol.get_size() < eps) ? get_nz() : pol.get_size();
  // Comprobamos cada coeficiente.
  for (int i = 0; i < minimal_size; ++i) {
    // Si la diferencia absoluta entre los coeficientes es mayor a la precisión
    // establecida, entonces no son iguales.
    if (fabs(at(i).get_val() - pol.at(at(i).get_inx())) > eps) {
      differents = true;
    }
  }
  return !differents;
}

// MODIFICACIONES
// void SparsePolynomial::PrintOdd() const {
//   std::cout << "Monomios con exponentes impares:" << std::endl;
//   for (int i = 0; i < get_nz(); ++i) {
//     if (at(i).get_inx() % 2 != 0) {
//       std::cout << at(i).get_val() << std::endl;
//     }
//   }
// }

// void SparsePolynomial::PrintEven() const {
//   std::cout << "Monomios con exponentes pares:" << std::endl;
//   for (int i = 0; i < get_nz(); ++i) {
//     if (at(i).get_inx() % 2 == 0) {
//       std::cout << at(i).get_val() << std::endl;
//     }
//   }
// }

// void SparsePolynomial::PrintHigher(const double coeficient) const {
//   std::cout << "Coeficientes mayores a " << coeficient << std::endl;
//   for (int i = 0; i < get_nz(); ++i) {
//     if (at(i).get_val() > coeficient) {
//       std::cout << at(i).get_val() << std::endl;
//     }
//   }
// }

#endif  // POLYNOMIAL_H_
