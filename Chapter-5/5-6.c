/*

  C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 6

   Modify the upc.c program of Section 4.1 so that it checks
   whether a UPC is valid. After the user enters a UPC, the
   program will display either VALID or NOT VALID.

*/


/*
 * Name: 5.6.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  int n_1, n_2, n_3, n_4, n_5, n_6, n_7, n_8, n_9, n_10, n_11, n_12;
  int odd_group = 0, even_group = 0;
  int check_digit = 0;

  printf("Enter UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n_1, &n_2, &n_3, &n_4, &n_5,
        &n_6, &n_7, &n_8, &n_9, &n_10, &n_11, &n_12);

  odd_group = ((n_1 + n_3 + n_5 + n_7 + n_9 + n_11) * 3);
  even_group = ((n_2 + n_4 + n_6 + n_8 + n_10) + odd_group) - 1;

  check_digit = 9 - (even_group % 10);


  if (check_digit == n_12) {
    printf("VALID\n");
  } else {
    printf("INVALID\n");
  }

  return 0;
}
