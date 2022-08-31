/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Determine if a given year is a leap year or not
 */

#include <iostream>

int main()
{
   bool is_leap_year = true;
   int year = 0;

   std::cout << "enter year: ";
   std::cin >> year;

   if ((year % 4) > 0) 
      is_leap_year = false;
   else if (((year % 100) == 0) && ((year % 400) > 0))
      is_leap_year = false;

   if (is_leap_year)
      std::cout << "Leap year\n";
   else
      std::cout << "Common year\n";
   return 0;
}