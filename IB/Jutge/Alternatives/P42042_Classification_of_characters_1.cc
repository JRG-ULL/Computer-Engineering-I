/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 *
 * @author  Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date    29 Sep. 2023
 * @brief   This program reads a letter, and tells if it is an uppercase
 *          letter or a lowercase letter, and that also tells if it is a
 *          vowel or a consonant. Here, assume that the vowels are ‘a’,
 *          ‘e’, ‘i’, ‘o’ and ‘u’, and their corresponding uppercase
 *          letters.
 * @bug     There are no known bugs.
 * @see     https://jutge.org/problems/P42042
 */

#include <iostream>

int main()
{
  char letter;
  while (std::cin >> letter)
  {
    if (islower(letter))
    {
      std::cout << "lowercase" << std::endl;
    }
    else
    {
      std::cout << "uppercase" << std::endl;
    }
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
    std::cout << "vowel" << std::endl;
    }
    else
    {
    std::cout << "consonant" << std::endl;
    }
  }
  return 0;
}

/**
 * #include <iostream>
 *
 * int main()
 * {
 *   char letter;
 *   while (std::cin >> letter)
 *   {
 *     islower(letter)
 *       ? std::cout << "lowercase" << std::endl
 *       : std::cout << "uppercase" << std::endl;
 *     letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
 *     letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'
 *       ? std::cout << "vowel" << std::endl
 *       : std::cout << "consonant" << std::endl;
 *   }
 *   return 0;
 * }
 */
