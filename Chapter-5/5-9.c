/*

   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 9

   Write a program that prompts the user to enter two
   dates and the indicates which date comes earlier
   on the calendar:

       Enter first date (mm/dd/yy): 3/6/08
       Enter second date (mm/dd/yy): 5/17/07
       5/17/07 is earlier than 3/6/08

   [rsantos] Though not mentioned in the problem statement,
   I coded the program to assume that the earliest year 
   is 2000.

*/
/*
 * Name: 5.9.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int day_1, month_1, year_1;
  // total number of days since year 2000
  int first_date_total_days;

  int day_2, month_2, year_2;
  int second_date_total_days;

  printf("Enter first date (dd/mm/yy): ");
  scanf("%d/%d/%d", &day_1, &month_1, &year_1);

  printf("Enter second date (dd/mm/yy): ");
  scanf("%d/%d/%d", &day_2, &month_2, &year_2);

  first_date_total_days = day_1 + ((month_1 * 30) + (year_1 * 365));
  second_date_total_days = day_2 + ((month_2 * 30) + (year_2 * 365));

  if (first_date_total_days < second_date_total_days) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", day_1, month_1, year_1,
           day_2, month_2, year_2);
  } else {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", day_2, month_2, year_2,
           day_1, month_1, year_1);
  }

  return 0;
}
