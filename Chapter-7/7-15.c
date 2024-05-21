/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 15a
   
   Write a program that computes the factorial of a positive integer:

      Enter a positive integer: 6
      Factorial of 6: 720

   Use a short variable to store the value of the factorial. What is
   the largest value of n for which the program correctly prints
   the factorial?
*/

/*
 * Name: 7-15.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  int x;
  int cpy_x;
  int sum = 1;

  printf("Enter a positive number: ");
  scanf("%d", &x);
  cpy_x = x;

  do {
    sum *= x;
    x -= 1;
  } while (x > 1);
  printf("Factorial of %d is: %d\n", cpy_x, sum);

  return 0;
}
