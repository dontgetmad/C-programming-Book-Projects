/*
  Modify Programming Project 11 from Chapter 7 so that the program labels its output:
      Enter a first and last name: Lloyd Fosdick
      You entered the name: Fosdick, L.
  The program will need to store the last name (but not the first name) in an array of characters until it can be printed. 
  You may assume that the last name is no more than 20 characters long.
*/

/*
 * Name: 8-13.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  char ch;
  char first_name_intial;
  char last_name[20] = {0};
  int count = 0;

  printf("Enter a first and last name: ");
  scanf(" %c", &first_name_intial);

  while ((ch = getchar()) != ' ') {
  }

  while ((ch = getchar()) != '\n' && count < 20) {
    last_name[count] = ch;
    count++;
  }

  printf("You entered the name: %s, %c.", last_name, first_name_intial);
  printf("\n");

  return 0;
}
