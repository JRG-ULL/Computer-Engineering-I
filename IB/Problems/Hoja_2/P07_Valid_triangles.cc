/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
 * @file		P07_Valid_triangles.cc
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		17 Oct. 2023
  * @brief	This program takes three numbers as its input and interprets them as the sides of a triangle, then prints out whether the triangle is valid or not. If it is, it'll categorize the triangle be it equilateral, isosceles or scalene.
  * @bug		There are no known bugs.
  * @see		
  */

#include <iostream>

int main()
{
  double side1;
  double side2;
  double side3;
  while (std::cout << "Introduzca lado1: ")
  {
    std::cin >> side1;
    std::cout << "Introduzca lado2: ";
    std::cin >> side2;
    std::cout << "Introduzca lado3: ";
    std::cin >> side3;
    (side1 > side2 + side3) || (side2 > side3 + side1) || (side3 > side1 + side2)
      ? std::cout << "No es un triángulo válido.\n"
      : ((side1 == side2) && (side1 != side3)) || ((side2 == side3) && (side2 != side1)) || ((side3 == side1) && (side1 != side2))
        ? std::cout << "El triángulo es isósceles.\n"
        : (side1 == side2) && (side1 == side3)
          ? std::cout << "El triángulo es equilátero.\n"
          : std::cout << "El triángulo es escaleno.\n";
  }
  return 0;
}