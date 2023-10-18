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
    euros %= 500;
    std::cout << "Banknotes of 200 euros: " << euros / 200 << std::endl;
    euros %= 200;
    std::cout << "Banknotes of 100 euros: " << euros / 100 << std::endl;
    euros %= 100;
    std::cout << "Banknotes of 50 euros: " << euros / 50 << std::endl;
    euros %= 50;
    std::cout << "Banknotes of 20 euros: " << euros / 20 << std::endl;
    euros %= 20;
    std::cout << "Banknotes of 10 euros: " << euros / 10 << std::endl;
    euros %= 10;
    std::cout << "Banknotes of 5 euros: " << euros / 5 << std::endl;
    euros %= 5;
    std::cout << "Coins of 2 euros: " << euros / 2 << std::endl;
    euros %= 2;
    std::cout << "Coins of 1 euro: " << euros / 1 << std::endl;
    euros %= 1;
    std::cout << "Coins of 50 cents: " << cents / 50 << std::endl;
    cents %= 50;
    std::cout << "Coins of 20 cents: " << cents / 20 << std::endl;
    cents %= 20;
    std::cout << "Coins of 10 cents: " << cents / 10 << std::endl;
    cents %= 10;
    std::cout << "Coins of 5 cents: " << cents / 5 << std::endl;
    cents %= 5;
    std::cout << "Coins of 2 cents: " << cents / 2 << std::endl;
    cents %= 2;
    std::cout << "Coins of 1 cent: " << cents / 1 << std::endl;
    cents %= 1;
  }
  return 0;
}