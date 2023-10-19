/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @file   P81629_Minimum_change.cc
 * @author Javier Rodríguez González (alu0101563428@ull.edu.es)
 * @date   18 Oct. 2023
 * @brief  
 * @bug    There are no known bugs.
 * @see    https://jutge.org/problems/P81629
 */

#include <iostream>

int main()
{
  int euros;
  int cents;
  while (std::cin >> euros >> cents)
  {
    std::cout << "Banknotes of 500 euros: " << euros / 500 << std::endl;
    std::cout << "Banknotes of 200 euros: " << (euros %= 500) / 200 << std::endl;
    std::cout << "Banknotes of 100 euros: " << (euros %= 200) / 100 << std::endl;
    std::cout << "Banknotes of 50 euros: " << (euros %= 100) / 50 << std::endl;
    std::cout << "Banknotes of 20 euros: " << (euros %= 50) / 20 << std::endl;
    std::cout << "Banknotes of 10 euros: " << (euros %= 20) / 10 << std::endl;
    std::cout << "Banknotes of 5 euros: " << (euros %= 10) / 5 << std::endl;
    std::cout << "Coins of 2 euros: " << (euros %= 5) / 2 << std::endl;
    std::cout << "Coins of 1 euro: " << (euros %= 2) / 1 << std::endl;
    std::cout << "Coins of 50 cents: " << cents / 50 << std::endl;
    std::cout << "Coins of 20 cents: " << (cents %= 50) / 20 << std::endl;
    std::cout << "Coins of 10 cents: " << (cents %= 20) / 10 << std::endl;
    std::cout << "Coins of 5 cents: " << (cents %= 10) / 5 << std::endl;
    std::cout << "Coins of 2 cents: " << (cents %= 5) / 2 << std::endl;
    std::cout << "Coins of 1 cent: " << (cents %= 2) / 1 << std::endl;
  }
  return 0;
}
