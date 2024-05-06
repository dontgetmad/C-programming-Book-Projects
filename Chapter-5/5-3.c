/*

   Ray Santos
   August 27, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 3

   Modify the broker.c program of Section 5.2 by making
   both of the following changes:

   a. Ask the user to enter the number of shares and the
      price per share, instead of the value of the trade.

   b. Add statements that compute the commission charged by
      a rival broker ($33 plus 3 cents per share for fewer
      than 2000 shares; $33 plus 2 cents per share for 2000
      shares or more. Display the rival's commission as well
      as the commission charged by the original broker.

*/

/*
 * Name: 5.3.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int num_of_shares;
  float price_per_share, commission, trade_value;
  float rival_commission;

  printf("Enter number of shares: ");
  scanf("%d", &num_of_shares);

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

  printf("Original broker's commission: $%.2f\n", commission);


  // Rival broker comission
  if (num_of_shares <= 2000) {
    rival_commission = 33 + (0.03f * num_of_shares);
  } else if (num_of_shares >= 2001) {
    rival_commission = 33 + (0.02f * num_of_shares);
  }

  printf("Rival broker's commission: $%.2f\n", rival_commission);

  return 0;
}
