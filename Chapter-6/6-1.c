/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 1

   Write a program that finds the largest in a series of
   numbers entered by the user. The program must prompt the
   user to enter numbers one by one. When the user enters 0
   or a negative number, the program must display the largest
   nonnegative number entered:

       Enter a number: 60
       Enter a number: 38.3
       Enter a number: 4.89
       Enter a number: 100.62
       Enter a number: 75.2295
       Enter a number: 0

       The largest number entered was 100.62

   Notice that the numbers aren't necessarily integers.

   [rsantos] I slightly modified the user's prompt to
   provide instructions on how to end number entry.

*/


/*
 * Name: 6.1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  float num;
  float largest = 0;
  while (num > 0) {
    printf("Enter a number (enter 0 to end): ");
    scanf("%f", &num);

    if (num > largest) {
      largest = num;
    }
    if (num <= 0) {
      printf("The largest number entered was %.2f\n", largest);
      return 0;
    }
  }
}
