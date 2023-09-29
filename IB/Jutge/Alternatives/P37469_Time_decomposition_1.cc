/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    29 Sep. 2023
 * @brief   This program takes a number as its input and prints out the number
 *          of hours, minutes and seconds represented by said input number. The
 *          result will print as follows: hours, minutes and seconds such that
 *          3600hr + 60min + sec = number, with min < 60 and sec < 60.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P37469
 */

#include <iostream>

int main()
{
  int hour;
  int min;
  int sec;
  while (std::cin >> sec)
  {
    hour = sec / 3600;
    min = (sec % 3600) / 60;
    sec = (sec % 60) % 60;
    std::cout << hour << " " << min << " " << sec << std::endl;
  }
  return 0;
}
