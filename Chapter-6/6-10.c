/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 10

   Programming Project 9 in Chapter 5 asked you to write a 
   program that determines which of two dates come earlier
   on the calendar. Generalize the program so that the user
   may enter any number of dates. The user will enter 0/0/0
   to indicate that no more dates will be entered.

       Enter a date (mm/dd/yy): 3/6/08
       Enter a date (mm/dd/yy): 5/17/07
       Enter a date (mm/dd/yy): 6/3/07
       Enter a date (mm/dd/yy): 0/0/0
       5/17/07 is the earliest date

*/

/*
 * Name: 6.10.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int day, month, year;
  int temp_day = 12, temp_month = 12, temp_year = 99;
  // total number of days since year 2000
  int total_days, total_temp_days;

  do {
    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    total_days = day + ((month * 30) + (year * 365));

    if (day + month + year == 0) {
      printf("%d/%d/%02d\n", temp_day, temp_month, temp_year);
      return 0;
    }

    total_temp_days = temp_day + ((temp_month * 30) + (temp_year * 365));

    if (total_days < total_temp_days) {
      temp_day = day;
      temp_month = month;
      temp_year = year;
    }

  } while (1);

  return 0;
}
