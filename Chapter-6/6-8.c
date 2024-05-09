/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 8

   Write a program that prints a one-month calendar. The user
   specifies the number of days in the month and the day of
   the week on which the month begins:

       Enter number of days in month: 31
       Enter starting day of the week (1=Sun, 7=Sat): 3

              1  2  3  4  5
        6  7  8  9 10 11 12
       13 14 15 16 17 18 19
       20 21 22 23 24 25 26 
       27 28 29 30 31

   Hint: This program isn't as hard as it looks. The most 
   important part is a for statement that uses a variable i
   to count from 1 to n, where n is the number of days in the
   month, printing each value of i. Inside the loop, an if
   statement tests whether i is the last day in the week; if
   so, it prints a new-line character.

*/

/*
 * Name: 6.8.c
 * Purpose: learning C
 * Author: dontgetmad
*/

// This sucked, it had to look at the solution and still didnt get it
// I kept trying and finally for a solution but I'm not sure if this counts :/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int num_of_days, day_of_week, count = 0;

  printf("Enter number of days in months: ");
  scanf("%d", &num_of_days);

  printf("Enter starting day of the week (1=Mon, 7=Sun): ");
  scanf("%d", &day_of_week);

  for (int i = 1; i < day_of_week; i++) {
    printf("   ");
    count++;
  }

  for (int i = 1; i <= num_of_days; i++) {
    printf("%3d", i);
    count++;
    if (count % 7 == 0) {
      printf("\n");
    }
  }

  printf("\n");

  return 0;
}
