/*
 C Programming: A Modern Approach, Second Edition
 Chapter 8, Programming Project 1
 
 Modify the repdigit.c program of Section 8.1 so that
 it shows which digits (if any) were repeated:
 
     Enter a number: 939577
     Repeated digit(s): 7 9
*/

/*
 * Name: 8-1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int digit_seen[10] = {false};
  int digit, i;
  long n;

  printf("\nEnter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      digit_seen[digit] += 1;
    } else {
      digit_seen[digit] += 1;
    }
    n /= 10;
  }

  printf("Repeated digits: ");
  for (i = 0; i < 10; i++) {
    if (digit_seen[i] > 1) {
      printf(" %d", i);
    }
  }
  printf("\n");

  return 0;
}
