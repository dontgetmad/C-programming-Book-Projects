/*
Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits. 
Hint: See the upc.c pro- gram of Section 4.1.
*/

/*
 * Name: 4.3.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &a, &b, &c);
  printf("The reversal is: %d%d%d\n", c, b, a);
}
