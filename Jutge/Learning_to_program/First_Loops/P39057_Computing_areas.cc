/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file    P39057_Computing_areas.cc
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    11 Oct. 2023
 * @brief   This program reads several descriptions of rectangles and circles,
 *          and for each one prints its corresponding area. Input begins with
 *          a number 'num', followed by 'num' descriptions. If of a rectangle,
 *          we have the word "rectangle" followed by two strictly positive
 *          real numbers: its length and its width. If of a circle, we have the
 *          word "circle" followed by a strictly positive real number: its
 *          radius. For each description print its area with 6 digits after the
 *          decimal point.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P39057
 */

#include <iostream>
#include <iomanip>  // std::setprecision 
#include <string>

int main()
{
  int descnum;
  std::string shape;
  double length;
  double width;
  double radius;
  const double pi = 3.14159265358979323846;
  std::cin >> descnum;
  for (int i = 0; i < descnum; i++)
  {
    std::cin >> shape;
    if (shape == "rectangle")
    {
      std::cin >> length >> width;
      std::cout << std::fixed << std::setprecision(6) << static_cast<double>(length * width) << std::endl;
    }
    else if (shape == "circle")
    {
      std::cin >> radius;
      std::cout << std::fixed << std::setprecision(6) << static_cast<double>(pi * radius * radius) << std::endl;
    }
    else
    {
      break;
    }
  }
  return 0;
}

