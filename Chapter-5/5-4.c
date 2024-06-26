/*
  C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 4

   Here's a simplified version of the Beaufort scale, which
   is used to estimate wind force:

   Speed (knots)     Description
   -----------------------------
   Less than 1       Calm
   1 - 3             Light air
   4 - 27            Breeze
   28 - 47           Gale
   48 - 63           Storm
   Above 63          Hurricane

   Write a program that asks the user to enter a wind
   speed (in knots), then displays the corresponding
   description.
*/

/*
 * Name: 5.4.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  float speed;

  printf("Enter wind speed (knots): ");
  scanf("%f", &speed);

  if (speed < 1) {
    printf("Calm\n");
  } else if (speed <= 3) {
    printf("Light air\n");
  } else if (speed <= 27) {
    printf("Breeze\n");
  } else if (speed <= 47) {
    printf("Gale\n");
  } else if (speed <= 63) {
    printf("Storm\n");
  } else {
    printf("Hurricane\n");
  }

  return 0;
}
