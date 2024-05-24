/*
  C Programming: A Modern Approach, Second Edition
  Chapter 8, Programming Project 2
 
  Modify the repdigit.c program of Section 8.1 so that
  it prints a table showing how many times each digit
  appears in the number:
 
     Enter a number: 41271092
     Digit:        0  1  2  3  4  5  6  7  8  9
     Occurrences:  1  2  2  0  0  1  0  1  0  1
*/

/*
 * Name: 8-2.c
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

  printf("Digits:     ");
  for (i = 0; i < 10; i++) {
    printf("%10d", i);
  }
  printf("\n");

  printf("Occurances: ");
  for (i = 0; i < 10; i++) {
    printf("%10d", digit_seen[i]);
  }
  printf("\n");

  return 0;
}
