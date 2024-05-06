/*   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 5

   In one state, single residents are subject to the following 
   income tax:

   Income            Amount of tax
   -------------------------------
   Not over $750     1% of income
   $750 - $2,250     $7.50   plus 2% of amount over $750
   $2,250 - $3,750   $37.50  plus 3% of amount over $2,250
   $3,750 - $5,250   $82.50  plus 4% of amount over $3,750
   $5,250 - $7,000   $142.50 plus 5% of amount over $5,250
   Over $7,000       $230.00 plus 6% of amount over $7,000
   
   Write a program that asks the user to enter the amount of
   taxable income, then displays the tax due.
*/

/*
 * Name: 5.5.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  float income;
  float tax_due = 0;

  printf("Enter your taxable income per month: ");
  scanf("%f", &income);

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

  printf("Tax due based on a monthly income of $%.2f is: $%.2f\n", income,
         tax_due);

  return 0;
}
