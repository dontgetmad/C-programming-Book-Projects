/*
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the amount of income tax. 
When passed an amount of taxable income, the function will return the tax due.
*/

/*
 * Name: 9-2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

double calculate_tax(int income) {
  double tax_due = 0;
  if (income <= 750) {
    tax_due = (income * 0.01f);
  } else if (income < 2250) {
    tax_due = 7.5 + ((income - 750) * 0.02f);
  } else if (income < 3750) {
    tax_due = 37.50 + ((income - 2250) * 0.03f);
  } else if (income < 5250) {
    tax_due = 82.50 + ((income - 3750) * 0.04f);
  } else if (income < 7000) {
    tax_due = 142.50 + ((income - 5250) * 0.05f);
  } else {
    tax_due = 230 + ((income - 7000) * 0.06f);
  }
  return tax_due;
}

int main(void) {
  float income = 0;
  double tax_due;

  printf("Enter your taxable income per month: ");
  scanf("%f", &income);

  tax_due = calculate_tax(income);

  printf("Tax due based on a monthly income of $%.2f is: $%.2f\n", income,
         tax_due);

  return 0;
}
