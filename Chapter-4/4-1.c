/*
  Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. A session with the program should have the following appearance:
  Enter a two-digit number: 28
  The reversal is: 82
  Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10 is the last digit in n and n / 10 is n with the last digit removed.
*/

/*
 * Name: 4.1.c
 * Purpose: learning C
 * Author: dontgetmad 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int i = 0;
  printf("Enter a two-digit number: ");
  scanf("%d", &i);
  printf("The reversal is: %d%d\n", (i % 10), i / 10);
}
