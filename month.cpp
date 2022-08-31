/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Determine how many days are in a given year, month
 */

#include <iostream>

void get_input(const char *const msg, int& out)
{
   std::cout << msg;
   std::cin >> out;
}

int main()
{
   int year = 0;
   int month = 0;
   int days = 30;

   get_input("enter year: ", year);
   get_input("enter month: ", month);

   if (month == 2)
   {
      days = 28;
      if (!(((year % 4) > 0) || (((year % 100) == 0) && ((year % 400) > 0)))) // is leap year
         days++;
   }
   else
   {
      days += month <= 7 ? month % 2 : !(month % 2);
   }

   std::cout << days << " days\n";

   return 0;
}