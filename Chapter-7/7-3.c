/*

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 3

   Modify the sum2.c program of Section 7.1 to
   sum a series of double values.
   
*/



/*
 * Name: 7-3.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  double n, sum = 0;

  printf("\nThis program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  scanf("%lf", &n);

  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }

  printf("The sum is: %lf\n\n", sum);
  return 0;
}
