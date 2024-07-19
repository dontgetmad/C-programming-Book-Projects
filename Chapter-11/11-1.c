/*
Modify Programming Project 7 from Chapter 2 so that it includes the following function:

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the dollars parameter.
The twenties parameter points to a variable in which the function will store the number of $20 bills required. The tens, fives and ones parameters are similar.
*/

/*
 * Name: 11-1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int dollars;
  int twenties = 0, tens = 0, fives = 0, ones = 0;
  printf("Enter dollar amount ($): ");
  scanf("%d", &dollars);

  pay_amount(dollars, &twenties, &tens, &fives, &ones);

  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties,
         tens, fives, ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  while (dollars > 0) {
    if (dollars - 20 >= 0) {
      *twenties += 1;
      dollars -= 20;
    } else if (dollars - 10 >= 0) {
      *tens += 1;
      dollars -= 10;
    } else if (dollars - 5 >= 0) {
      *fives += 1;
      dollars -= 5;
    } else if (dollars - 1 >= 0) {
      *ones += 1;
      dollars -= 1;
    }
  }
}
