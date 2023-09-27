/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @author	Javier Rodríguez González (alu0101563428@ull.edu.es)
  * @date		27 Sep. 2023
  * @brief  This program converts to seconds a given amount of years,
  *         days, hours, minutes and seconds. The input consists of
  *         five natural numbers that represent the years, days, hours,
  *         minutes and seconds, respectively. The program assumes all
  *         the years have 365 days.
  * @bug    There are no known bugs.
  * @see    https://jutge.org/problems/P70955
  */

#include <iostream>

int main()
{
  int sec;
  int min;
  int hour;
  int day;
  int year;
  while (std::cin >> year >> day >> hour >> min >> sec)
  {
    std::cout << (year * 31536000) + (day * 86400) + (hour * 3600) + (min * 60) + sec << std::endl;
  }
  return 0;
}