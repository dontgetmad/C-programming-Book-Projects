/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 10

   Write a program that counts the number of vowels
   (a, e, i, o, u) in a sentence:

       Enter a sentence: And that's the way it is.
       Your sentence contains 6 vowels.
*/


/*
 * Name: 7-10.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int count = 0;
  char ch;

  printf("Enter a setence: ");
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count += 1;
      break;
    default:;
    }
  }

  printf("Your setence contains %d vowels.\n", count);

  return 0;
}
