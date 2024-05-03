// Extend the program in Programming Project 4.1 to handle three-digit numbers.

/*
 * Name: 4.2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int i = 0;
  printf("Enter a three-digit number: ");
  scanf("%d", &i);
  printf("The reversal is: %d%d%d\n", (i % 10), (i / 10) % 10, (i / 10) / 10);
}
