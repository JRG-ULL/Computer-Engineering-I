/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    20 Sep. 2023
 * @brief   This program takes a letter as an input. Said letter can be either uppercase
 *          or lowercase. Depending on the input, the program will return said letter in
 *          in uppercase (were the input to be lowercase) or lowercase (were the input to
 *          be lowercase).
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P98960_en
*/

/**
 * ! Deprecated method (IB-specific): After learning new algorithms and methods in the first
 * ! year's second four-month period, AyED, this program can be further simplified using a
 * ! ternary operator. 
 *
 * * #include <iostream>
 * * int main()
 * * {
 * *   char input;
 * *   while (std::cin >> input)
 * *   {
 * *     if (islower(input))
 * *     {
 * *       std::cout << static_cast<char>(toupper(input)) << std::endl;
 * *     }
 * *     else
 * *     {
 * *       std::cout << static_cast<char>(tolower(input)) << std::endl;
 * *     }
 * *   }
 * *   return 0;
 * * }
*/

#include <iostream>
using namespace std;

int main()
{
  char letter;
  while (cin >> letter)
  {
    islower(letter)
    ? cout << static_cast<char>(toupper(letter)) << endl
    : cout << static_cast<char>(tolower(letter)) << endl;
  }
  return 0;
}