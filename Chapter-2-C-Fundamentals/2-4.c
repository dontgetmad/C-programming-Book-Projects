// Question
/*
  * Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
  * Enter an amount: 100.00
  * With tax added: $105.00
*/

/*
 * Name: 2.4.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <stdio.h>
#include <string.h>

int main() {
  float amount, percentage_to_add, final_bill;

  printf("Enter total amount (U.S. dollars): ");
  scanf("%f", &amount);
  printf("Enter percentage to add: ");
  scanf("%f", &percentage_to_add);

  final_bill = amount * (1 + (percentage_to_add / 100));
  printf("With tax added: $%.2f\n", final_bill);
}
