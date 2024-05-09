/*

  C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 3

   Write a program that asks the user to enter a fraction,
   then reduces the fraction to lowest terms:

       Enter a fraction: 6/12
       In lowest terms: 1/2

   Hint: To reduce a fraction to lowest terms, first compute
   the GCD of the numerator and denominator. Then divide both
   the numerator and denominator by the GCD.

*/

/*
 * Name: 6.3.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int numerator, denominator;
  int n, m, remainder, gcd;

  printf("Enter two integers: ");
  scanf("%d/%d", &numerator, &denominator);

  n = numerator;
  m = denominator;

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

  printf("Greatest common divisor (GCD): %d\n", gcd);
  printf("In lowest terms: %d/%d\n", (numerator / gcd), (denominator / gcd));

  return 0;
}
