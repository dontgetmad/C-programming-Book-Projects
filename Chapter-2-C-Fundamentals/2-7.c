// Question
/*
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 * Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. 
 * Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers.
*/

/*
 * Name: 2.7.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <stdio.h>
#include <string.h>

int main() {
  float amount;
  int dollar_20 = 0, dollar_10 = 0, dollar_5 = 0, dollar_1 = 0;

  printf("Enter dollar amount ($): ");
  scanf("%f", &amount);

  while (amount > 0) {
    if (amount - 20 >= 0) {
      dollar_20 += 1;
      amount -= 20;
    } else if (amount - 10 >= 0) {
      dollar_10 += 1;
      amount -= 10;
    } else if (amount - 5 >= 0) {
      dollar_5 += 1;
      amount -= 5;
    } else if (amount - 1 >= 0) {
      dollar_1 += 1;
      amount -= 1;
    }
  }
  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",
         dollar_20, dollar_10, dollar_5, dollar_1);
}
