/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    22 Sep. 2023
 * @brief   This program takes three numbers as its input: hours, minutes
 *          and seconds. It will print out said numbers adding a single
 *          second to the total digits, printing out the resutl formatted
 *          as an actual clock.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P34279_en/
 */

/**
 * Deprecated code (IB specific)
 *
 * #include <iostream>
 *
 * int main()
 * {
 *   int sec;
 *   int min;
 *   int hour;
 *   while (std::cin >> hour >> min >> sec)
 *   {
 *     sec = sec + 1;
 *     if (sec >= 60)
 *     {
 *       min = min + 1;
 *       sec = 0;
 *     }
 *     if (min >= 60)
 *     {
 *       hour = hour + 1;
 *       min = 0;
 *     }
 *     if (hour >= 24)
 *     {
 *       hour = 0;
 *     }
 *     if (hour < 10)
 *     {
 *       std::cout << "0" << hour << ":";
 *     }
 *     else
 *     {
 *       std:: cout << hour << ":";
 *     }
 *     if (min < 10)
 *     {
 *       std::cout << "0" << min << ":";
 *     }
 *     else
 *     {
 *       std::cout << min << ":";
 *     }
 *     if (sec < 10)
 *     {
 *       std::cout << "0" << sec << std::endl;
 *     }
 *     else
 *     {
 *       std::cout << sec << std::endl;
 *     }
 *   }
 *   return 0;
 * }
 */

#include <iostream>
using namespace std;

int main()
{
  int hour;
  int min;
  int sec;
  while (cin >> hour >> min >> sec)
  {
    sec++;
    if (sec >= 60)
    {
      min++;
      sec = 0;
    }
    if (min >= 60)
    {
      hour++;
      min = 0;
    }
    if (hour >= 24)
    {
      hour = 0;
    }
    hour < 10 
      ? cout << "0" << hour << ":"
      : cout << hour << ":";
    min < 10 
      ? cout << "0" << min << ":"
      : cout << min << ":";
    sec < 10 
      ? cout << "0" << sec  <<endl
      : cout << sec << endl;
  }
  return 0;
}
