/*
  Modify the reverse.c program of Section 8.1 to use the expression 
  (int)(sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length
*/

/*
 * Name: 8-4.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>

#define N 10

int main(void) {
  int a[N], i;
  int size_of_a = (int)(sizeof(a) / sizeof(a[0]));

  printf("Enter %d numbers: ", N);
  for (i = 0; i < size_of_a; i++) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order:");
  for (i = size_of_a - 1; i >= 0; i--) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}
