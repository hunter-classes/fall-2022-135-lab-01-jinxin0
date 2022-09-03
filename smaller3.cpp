/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Ask and return the smallest of the three number
 */

#include <iostream>

int main()
{
   int a = 0;
   int b = 0;
   int c = 0;

   std::cout << "Enter the first number: ";
   std::cin >> a;

   std::cout << "Enter the second number: ";
   std::cin >> b;
   
   std::cout << "Enter the third number: ";
   std::cin >> c;
   std::cout << "The smaller of the two is " << std::min(std::min(a, b), c) << '\n';
   return 0;
}