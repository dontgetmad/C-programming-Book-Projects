/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 9

   Programming Project 8 in Chapter 2 asked you to write a
   program that calculates the remaining balance on a loan
   after the first, second, and third monthly payments.
   Modify the program so that it also asks the user to enter
   the number of payments and then displays the balance
   remaining after each of these payments.

*/


/*
 * Name: 6.9.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  float loan_amount, interest_rate, monthly_payment, balance;
  int number_of_payments;

  printf("Enter amount of loan ($): ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate (%%): ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment ($): ");
  scanf("%f", &monthly_payment);

  printf("Enter first n number of montly payments: ");
  scanf("%d", &number_of_payments);

  balance = loan_amount;

  for (int i = 1; i <= number_of_payments; i++) {
    balance =
        (balance - monthly_payment) + (balance * ((interest_rate / 100) / 12));
    printf("Balance remaining: $%.2f\n", balance);
  }

  return 0;
}
