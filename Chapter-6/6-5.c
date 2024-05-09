/*

  C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 5

   Programming Project 1 in Chapter 4 asked you to write a
   program that displays a two-digit number with its digits
   reversed. Generalize the program so that the number can
   have one, two, three, or more digits.

   Hint: Use a do loop that repeatedly divides the number by
   10, stopping when it reaches 0.

*/

/*
 * Name: 6.5.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int num;
  int last_digit;
  int result = 0;

  printf("Enter a non-negative number: ");
  scanf("%d", &num);

  if (num <= 0) {
    return 0;
  }

  do {
    last_digit = num % 10;
    num = num / 10;

    /*
      * For the input 12345 
      * Starts with 0 * 10 = 0 + 5
      * then 5 * 10 = 50 + 4
      * then 54 * 10 = 540 + 3
      * then 543 * 10 = 5430 + 2
      * then 5432 * 10 = 54320 + 1
      * returns 54321
    */

    result = (result * 10) + last_digit;
  } while (num > 0);

  printf("Chosen number in reverse: %d\n", result);

  return 0;
}
