/*
 * Name: maxmin.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
  int b[N];
  int big, small;

  printf("Enter %d numbers: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  printf("\n");

  max_min(b, N, &big, &small);

  printf("Largest number: %d\n", big);
  printf("Smallest number: %d\n", small);

  return 0;
}

void max_min(int a[], int n, int *max, int *min) {
  *min = *max = a[0];

  for (int i = 0; i < n; i++) {
    if (a[i] < *min) {
      *min = a[i];
    } else if (a[i] > *max) {
      *max = a[i];
    }
  }
}
