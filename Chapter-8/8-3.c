/*
  C Programming: A Modern Approach, Second Edition
  Chapter 8, Programming Project 3
 
  Modify the repdigit.c program of Section 8.1 so that
  the user can enter more than one number to be tested
  for repeated digits. The program should terminate when       
  the user enters a number that's less than or equal to 0.
*/

/*
 * Name: 8-3.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  bool digit_seen[10] = {false};
  int digit;
  long n;

  do {
    printf("\nEnter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n == 0) {
      return 0;
    }

    if (n > 0)
      printf("Repeated digit\n");
    else
      printf("No repeated digit\n");

  } while (n > 0);

  return 0;
}
