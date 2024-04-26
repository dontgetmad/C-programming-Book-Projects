// Question

/*
  * Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
  * Enter amount of loan: 20000.00
  * Enter interest rate: 6.0
  * Enter monthly payment: 386.66
  * Balance remaining after first payment: $19713.34
  * Balance remaining after second payment: $19425.25
  * Balance remaining after third payment: $19135.71
  * Display each balance with two digits after the decimal point. 
  * Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. 
  * To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.
*/

/*
 * Name: 2-8.c
 * Purpose: learning C
 * Author: dontgetmad
 * Copyright (c) 2024 Author. All Rights Reserved.
 */

#include <stdio.h>
#include <string.h>

int main() {
  float loan_amount, interest_rate, monthly_payment, balance;

  printf("Enter amount of loan ($): ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate (%%): ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment ($): ");
  scanf("%f", &monthly_payment);

  balance = loan_amount;

  balance =
      (balance - monthly_payment) + (balance * ((interest_rate / 100) / 12));
  printf("Balance remaining after first payment: %.2f\n", balance);

  balance =
      (balance - monthly_payment) + (balance * ((interest_rate / 100) / 12));
  printf("Balance remaining after second payment: %.2f\n", balance);

  balance =
      (balance - monthly_payment) + (balance * ((interest_rate / 100) / 12));
  printf("Balance remaining after third payment: %.2f\n", balance);
}
