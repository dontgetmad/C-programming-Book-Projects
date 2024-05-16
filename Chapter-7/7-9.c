/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 9

   Write a program that asks the user for a 12-hour time,
   then displays the time in 24-hour form:

       Enter a 12-hour time: 9:11 PM
       Equivalent 24-hour time: 21:11

   See Programming Project 8 for a description of the
   input format.

   [rsantos] The input format is below.

   The input will have the form hours:minutes followed by either 
   A, P, AM or PM (either lower-case or upper-case). White space 
   is allowed (but not required) between the numerical time and 
   the AM/PM indicator. Examples of valid input:

   1:15P
   1:15PM
   1:15p
   1:15pm
   1:15 P
   1:15 PM
   1:15 p
   1:15 pm

   You may assume that the input has one of these forms; there
   is no need to test for errors.
*/


/*
 * Name: 7-9.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int hour, minutes;
  char am_or_pm;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hour, &minutes, &am_or_pm);

  // Making sure input is valid otherwise exit program gracefully
  if (hour < 1 || hour > 12) {
    printf("Invalid hour given. Please run program again.\n");
    return 0;
  }

  if (minutes < 0 || minutes > 59) {
    printf("Invalid minute/s given. Please run program again.\n");
    return 0;
  }

  // If it's midnight
  if (hour == 12 && toupper(am_or_pm) == 'P') {
    hour -= 12;
  }

  // If it's PM period
  if (toupper(am_or_pm) == 'P') {
    hour += 12;
  }

  printf("Equivalent 24-hour time: %d:%02d\n", hour, minutes);

  return 0;
}
