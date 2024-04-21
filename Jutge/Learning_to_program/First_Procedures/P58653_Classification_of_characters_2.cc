/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P58653_Classification_of_characters_2.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   24 Nov. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P586532
 */

#include <cctype>
#include <iostream>

void print_line(char c, std::string s, bool b) {
  std::cout << s << "('" << c << "') = ";
  if (b) std::cout << "true" << std::endl;
  else std::cout << "false" << std::endl;
}

bool letter(char input) {
  if (isalpha(input)) return true;
  else return false;
}

bool vowel(char input) {
  if (isalpha(input)) {
    switch (input) {
      case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
        return true;
        break;
    
      default:
        return false;
        break;
    }
  }
  else return false;
}

bool consonant(char input) {
  if (isalpha(input) && vowel(input) == false) return true;
  return false;
}

bool uppercase(char input) {
  if (isupper(input)) return true;
  else return false;
}

bool lowercase(char input) {
  if (islower(input)) return true;
  else return false;
}

bool digit(char input) {
  if (isdigit(input)) return true;
  else return false;
}

int main() {
  char input;
  while (std::cin >> input) {
    print_line(input, "letter", letter(input));
    print_line(input, "vowel", vowel(input));
    print_line(input, "consonant", consonant(input));
    print_line(input, "uppercase", uppercase(input));
    print_line(input, "lowercase", lowercase(input));
    print_line(input, "digit", digit(input));
  }
  return 0;
}
