/*
 * Name: addfrac.c
 * Purpose: learning C
 * Author: dontgetmad
 * Copyright (c) 2024 Author. All Rights Reserved.
 */

// Doesn't reduce the resulting fraction to lowest terms

#include <stdio.h>
#include <string.h>

int main() {

  int num1, denom1, num2, denom2, result_sum, result_denom;

  printf("Enter first fraction: ");
  scanf("%d/%d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d/%d", &num2, &denom2);

  result_sum = (num1 * denom2) + (num2 * denom1);
  result_denom = (denom1 * denom2);

  printf("The sum is %d/%d\n", result_sum, result_denom);

  return 0;
}
