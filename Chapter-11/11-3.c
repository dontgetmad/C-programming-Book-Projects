/*
Modify Programming Project 3 from Chapter 6 so that it includes the following function:

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
            
numerator and denominator are the numerator and denominator of a fraction. 
reduced_numerator and reduced_denominator are pointers to variables in which the function will store 
the numerator and denominator of the fraction once it has been reduced to lowest terms.
*/

/*
 * Name: 11-3.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);

int main(void) {
  int numerator, denominator;
  int reduced_denominator = 0, reduced_numerator = 0;

  printf("Enter a fraction (n/n): ");
  scanf("%d/%d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {

  int n = numerator;
  int m = denominator;
  int remainder, gcd;

  if (n == 0) {
    printf("Greatest common divisor: %d\n", n);
  } else if (m == 0) {
    printf("Greatest common divisor: %d\n", m);
  }

  while (n > 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  gcd = n ? n : m;

  *reduced_numerator = numerator / gcd;
  *reduced_denominator = denominator / gcd;
}
