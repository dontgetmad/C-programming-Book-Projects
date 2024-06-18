/*
Write a function that computes the value of the following polynomial:
  3x5 + 2x4 - 5x3 - x² + 7x - 6.
Write a program that asks the user to enter a value for x, calls the function to compute the value of the polynomial, 
and then displays the value returned by the function.
*/

/*
 * Name: 9-6.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double calculate_polynomial(int x) {
  return ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) -
          (5 * (x * x * x)) - (x * x) + (7 * (x)) - 6);
}

int main(void) {
  int x;
  printf("Calculating the polynomial: 3x^2+2x^4-5x^3-x^2+7x-6\n");
  printf("Enter a value for x: ");
  scanf("%d", &x);

  printf("Result: %d\n", (int)calculate_polynomial(x));

  return 0;
}
