/*
 * Name: interest.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
 * This gets the size of the array but taking the total size of array in bytes
 * dividing it by the size of the first element, since all the element are the
 * same time, it doesn't matter which one.
 * For an array of type int, the element are 4 bytes, and if the array is of 40
 * bytes in size, then the size of the array is 10 (elements).
*/

#define NUM_RATES ((int)sizeof(value) / sizeof(value[0]))
#define INITIAL_BALANCE 100.00

int main(void) {
  int i, interest_rate, num_years, year;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &interest_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    printf("%6d%%", interest_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%3d       ", year);
    for (i = 0; i < NUM_RATES; i++) {
      value[i] = value[i] + (((interest_rate + i) / 100.0) * value[i]);
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }

  return 0;
}
