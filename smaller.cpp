/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Ask and return the smaller of the two number
 */
#include <iostream>

int main()
{
   int a = 0;
   int b = 0;

   std::cout << "Enter the first number: ";
   std::cin >> a;

   std::cout << "Enter the second number: ";
   std::cin >> b;
   std::cout << "The smaller of the two is " << std::min(a, b) << '\n';
   return 0;
}