/*
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one digit, then five digits, and then another five digits.
   Enter the first 11 digits of a UPC: 01380015173
   Check digit: 5
*/


/*
 * Name: 4.5.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int n_1, n_2, n_3, n_4, n_5, n_6, n_7, n_8, n_9, n_10, n_11;
  int odd_group = 0, even_group = 0;
  int check_digit = 0;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n_1, &n_2, &n_3, &n_4, &n_5, &n_6,
        &n_7, &n_8, &n_9, &n_10, &n_11);

  odd_group = ((n_1 + n_3 + n_5 + n_7 + n_9 + n_11) * 3);
  even_group = ((n_2 + n_4 + n_6 + n_8 + n_10) + odd_group) - 1;

  check_digit = 9 - (even_group % 10);

  printf("Check digit: %d\n", check_digit);

  return 0;
}
