/*
 * name: reverse3.c
 * purpose: learning c
 * author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(void) {

  int a[n], *p;

  printf("enter %d numbers: ", n);
  for (p = a; p < a + n; p++) {
    scanf("%d", p);
  }

  for (p = (a + n) - 1; p >= a; p--) {
    printf("%d ", *p);
  }

  printf("\n");

  return 0;
}
