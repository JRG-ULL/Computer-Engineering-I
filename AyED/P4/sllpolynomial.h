// AUTOR: Rodríguez González, Javier
// FECHA: 1 abr. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
//

#ifndef SLLPOLYNOMIAL_H_
#define SLLPOLYNOMIAL_H_

#include <math.h>  // fabs, pow

#include <iostream>

#include "pair_t.h"
#include "sll_t.h"
#include "vector_t.h"

#define kEpsilon 1.0e-6

typedef pair_t<double> pair_double_t;           // Campo data_ de SllPolynomial
typedef sll_node_t<pair_double_t> SllPolyNode;  // Nodos de SllPolynomial

// Clase para polinomios basados en listas simples de pares
class SllPolynomial : public sll_t<pair_double_t> {
 public:
  // constructores
  SllPolynomial(void) : sll_t(){};
  SllPolynomial(const vector_t<double>&, const double = kEpsilon);

  // destructor
  ~SllPolynomial(){};

  // E/S
  void Write(std::ostream& = std::cout) const;

  // operaciones
  double Eval(const double) const;
  bool IsEqual(const SllPolynomial&, const double = kEpsilon) const;
  void Sum(const SllPolynomial&, SllPolynomial&, const double = kEpsilon);
};

bool IsNotZero(const double val, const double eps = kEpsilon) {
  return fabs(val) > eps;
}

// FASE II
// constructor
SllPolynomial::SllPolynomial(const vector_t<double>& v, const double eps) {
  for (int i = v.get_size() - 1; i >= 0; --i) {
    if (IsNotZero(v[i], eps)) {
      pair_double_t pair(v[i], i);
      SllPolyNode* node = new SllPolyNode(pair);
      push_front(node);
    }
  }
}

// E/S
void SllPolynomial::Write(std::ostream& os) const {
  os << "[ ";
  bool first{true};
  SllPolyNode* aux{get_head()};
  while (aux != NULL) {
    int inx{aux->get_data().get_inx()};
    double val{aux->get_data().get_val()};
    if (val > 0)
      os << (!first ? " + " : "") << val;
    else
      os << (!first ? " - " : "-") << fabs(val);
    os << (inx > 1 ? " x^" : (inx == 1) ? " x" : "");
    if (inx > 1) os << inx;
    first = false;
    aux = aux->get_next();
  }
  os << " ]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const SllPolynomial& p) {
  p.Write(os);
  return os;
}

// Operaciones con polinomios

// FASE III
// Evaluación de un polinomio representado por lista simple
double SllPolynomial::Eval(const double x) const {
  double result{0.0};
  SllPolyNode* aux = get_head();
  while (aux != NULL) {
    double val = aux->get_data().get_val();
    int inx = aux->get_data().get_inx();
    result += val * pow(x, inx);
    aux = aux->get_next();
  }
  return result;
}

// Comparación si son iguales dos polinomios representados por listas simples
bool SllPolynomial::IsEqual(const SllPolynomial& sllpol,
                            const double eps) const {
  bool differents = false;
  SllPolyNode* aux1 = get_head();
  SllPolyNode* aux2 = sllpol.get_head();
  while (aux1 != NULL && aux2 != NULL) {
    if (fabs(aux1->get_data().get_val() - aux2->get_data().get_val()) > eps ||
        aux1->get_data().get_inx() != aux2->get_data().get_inx()) {
      differents = true;
      break;
    }
    aux1 = aux1->get_next();
    aux2 = aux2->get_next();
  }
  if (aux1 != NULL || aux2 != NULL) {
    differents = true;
  }
  return !differents;
}

// FASE IV
// Generar nuevo polinomio suma del polinomio invocante mas otro polinomio
void SllPolynomial::Sum(const SllPolynomial& sllpol, SllPolynomial& sllpolsum,
                        const double eps) {
  SllPolyNode* aux1 = get_head();
  SllPolyNode* aux2 = sllpol.get_head();
  vector_t<double> list;
  list.resize(12);
  while (aux1 != NULL) {
    for (int i = 0; i < list.get_size(); ++i) {
      if (aux1->get_data().get_inx() == i) {
        list.at(i) = aux1->get_data().get_val();
      }
    }
    aux1 = aux1->get_next();
  }
  while (aux2 != NULL) {
    for (int i = 0; i < list.get_size(); ++i) {
      if (aux2->get_data().get_inx() == i) {
        list.at(i) += aux2->get_data().get_val();
      }
    }
    aux2 = aux2->get_next();
  }
  SllPolynomial result(list);
  result.Write();
}

#endif  // SLLPOLYNOMIAL_H_
