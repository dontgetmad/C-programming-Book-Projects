/*
   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 4

   Add a loop to the broker.c program of Section 5.2 so
   that the user can enter more than one trade and the
   program will calculate the commission on each. The program
   should terminate when the user enters 0 as the trade value:

       Enter value of trade: 30000
       Commission: $166.00

       Enter value of trade: 20000
       Commission: $144.00

       Enter value of trade: 0

   [rsantos] Modified the user's prompt to provide
   instructions on how to exit the program.
*/

/*
 * Name: 6.4.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int num_of_shares;
  float price_per_share, commission, trade_value;
  float rival_commission;

  do { 
    printf("Enter 0 for number of shares to exist program \n");

    printf("Enter number of shares: ");
    scanf("%d", &num_of_shares);

    if (num_of_shares <= 0) {
      return 0;
    }

    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    trade_value = price_per_share * num_of_shares;

    // Original broker commission
    if (trade_value < 2500) {
      commission = 30 + ((trade_value * 0.017f));
    } else if (trade_value >= 2500 && trade_value <= 6250) {
      commission = 56 + (trade_value * 0.0066f);
    } else if (trade_value >= 6251 && trade_value <= 20000) {
      commission = 76 + (trade_value * 0.0034f);
    } else if (trade_value >= 20001 && trade_value <= 50000) {
      commission = 100 + (trade_value * 0.0022f);
    } else if (trade_value >= 50001 && trade_value <= 500000) {
      commission = 155 + (trade_value * 0.0011f);
    } else if (trade_value > 500001) {
      commission = 255 + (trade_value * 0.0009f);
    }

    // Making sure that the commission is atleast >= $39
    if (commission < 39) {
      commission = 39;
    }

    printf("Commission: $%.2f\n\n", commission);

  } while (trade_value > 0);

  return 0;
}
