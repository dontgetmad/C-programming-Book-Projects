// Question
/*
  * Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
  * 3x5 + 2x4 – 5x3 – x2 + 7x – 6
  * Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself
  * repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)
*/

/*
 * Name: 2.5.c
 * Purpose: learning C
 * Author: dontgetmad
 * Copyright (c) 2024 Author. All Rights Reserved.
 */

#include <stdio.h>
#include <string.h>

// Simple exponention function, does not consider integer overflow errors
// or performance focused
int exponention(int x, int n) {
  long long i;
  long long sum = 1;

  if (n < 0) {
    return 0;
  }

  for (i = 1; i <= n; i++) {
    sum *= x;
  }

  return sum;
}

int main() {
  int x;
  long result;

  printf("Calculating for polynomial: 3x^5 + 2x^4 - 5x^3 -x^2 +7x - 6\n");
  printf("Please provide x: ");
  scanf("%d", &x);

  result = 3 * (exponention(x, 5)) + 2 * (exponention(x, 4)) -
           5 * (exponention(x, 3)) - exponention(x, 2) + 7 * (x)-6;

  printf("Result: %ld\n", result);
}
