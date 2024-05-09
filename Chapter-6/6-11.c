/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 11

   The value of the mathematical constant e can be 
   expressed as an infinite series:

   e = 1 + 1/1! + 1/2! + 1/3! + ...

   Write a program that approximates e by computing
   the value of

   1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

   where n is an integer entered by the user.

*/


/*
 * Name: 6.11.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  double num;
  double temp = 1;
  double sum = 1;
  printf("*** Approximating the constant e ***\n");
  printf("Enter a non-negative number (n): ");
  scanf("%lf", &num);

  for (int i = 1; i <= num; i++) {
    temp = temp * i;
    sum = sum + 1 / (temp);
    printf("%10.10lf%10.5lf\n", 1 / temp, sum);
  }

  return 0;
}
