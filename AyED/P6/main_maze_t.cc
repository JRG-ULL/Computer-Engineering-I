// AUTOR: Rodríguez González, Javier
// FECHA: 27 abr. 2024
// EMAIL: alu0101563428@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 6
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/ccstyle.html
// Se compila con:
// g++ main_maze_t.cc maze_t.cc -o main_maze_t

#include <iostream>

#include "maze_t.h"

int main() {
  maze_t M;

  cin >> M;

  std::cout << M << std::endl;

  if (M.solve()) {
    std::cout << "¡¡ Se ha encontrado una salida al laberinto !!" << std::endl;
    std::cout << M << std::endl;
  } else
    std::cout << "No se ha podido encontrar la salida del laberinto..."
              << std::endl;

  return 1;
}