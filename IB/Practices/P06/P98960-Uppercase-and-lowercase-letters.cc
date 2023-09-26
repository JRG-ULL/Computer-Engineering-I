/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    21 Sep. 2023
 * @brief   This program takes a letter given by the user as input and
 *          returs the same letter in lowercase or uppercase, depending
 *          on how the input was given. If the user inputs a lowercase
 *          letter, the program will return an uppercase letter, and vice
 *          versa.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P98960_en
 */

/**
 * #include <iostream>
 *
 * int main() {
 *   char letter;
 *   while (std::cin >> letter) {
 *     if (islower(letter)) {
 *       std::cout << static_cast<char>(toupper(letter)) << std::endl;
 *     }
 *     else {
 *       std::cout << static_cast<char>(tolower(letter)) << std::endl;
 *     }
 *   }
 *   return 0;
 * }
*/

#include <iostream>
using namespace std;

int main()
{
  char letter;
  while (cin >> letter)
  {
    (islower(letter)) ?
      cout << toupper(letter) << endl :
      cout << tolower(letter) << endl;
  }
  return 0;
}
