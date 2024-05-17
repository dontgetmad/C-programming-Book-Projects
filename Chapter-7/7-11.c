/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 11

   Write a program that takes a first name and last name
   entered by the user and displays the last name, a comma, 
   and the first initial, followed by a period:

       Enter a first and last name: Ray Santos
       Santos, R.

   The user's input may contain extra spaces before the
   first name, between the first and last names, and
   after the last name.
*/

/*
 * Name: 7-11.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Not my solution, I tried to do it myself, but didn't really understand how
// getchar works That missing concept made it hard for me to solve this.
int main(void) {
  char first_initial, last_name;

  printf("Enter a first and last name: ");
  // gets the first letter of first name and ignores leading white-space.
  scanf(" %c", &first_initial);

  while (getchar() != ' ') {
    // ignore remaining first name characters until a blank white space is
    // reached
  }

  while ((last_name = getchar()) != '\n') {
    if (last_name == ' ') {
      // ignores blank spaces before and after last name
    } else {
      printf("%c", last_name);
    }
  }

  printf(", %c.\n", first_initial);

  return 0;
}
