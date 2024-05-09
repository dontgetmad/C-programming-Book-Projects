/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 2

   Write a program that asks the user to enter two integers, then
   calculates and displays their greatest common divisor (GCD):

       Enter two integers: 12 28
       Greatest common divisor: 4

   Hint: The classic algorithm for computing the GCD, known as
   Euclid's algorithm, goes as follows:

   1. Let m and n be variables containing the two numbers.
   2. If n is 0, then stop: m contains the GCD.
   3. Otherwise, compute the remainder when m is divided by n.
   4. Copy n into m and copy the remainder into n.
   5. Repeat the process, starting with testing whether n is 0.

*/


/*
 * Name: 6.2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n, m, remainder;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

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

  printf("Greatest common divisor: %d\n", n ? n : m);

  return 0;
}
