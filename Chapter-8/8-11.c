/*
  Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. 
  (The times are integers, representing the number of minutes since midnight.) 
  The program will use a loop to search the array of departure times for the one closest to the time entered by the user.
*/

/*
 * Name: 8-11.c
 * Purpose: learning C
 * Author: dontgetmad
*/

/*
 * Name: 8-11.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  char ch;
  int numeric_form[15] = {0};
  int count = 0;

  printf("Enter a phone number: ");
  while ((ch = getchar()) != '\n' && count < 15) {
    if (count == 14) {
      printf("Phone number must be 11 digits\n");
      break;
    }
    numeric_form[count] = toupper(ch);
    count++;
  }

  printf("In numeric form: ");

  for (int i = 0; i < 15; i++) {
    switch (numeric_form[i]) {
    case 'A':
    case 'B':
    case 'C':
      printf("2");
      break;
    case 'D':
    case 'E':
    case 'F':
      printf("3");
      break;
    case 'G':
    case 'H':
    case 'I':
      printf("4");
      break;
    case 'J':
    case 'k':
    case 'L':
      printf("5");
      break;
    case 'M':
    case 'N':
    case 'O':
      printf("6");
      break;
    case 'P':
    case 'R':
    case 'S':
      printf("7");
      break;
    case 'T':
    case 'U':
    case 'V':
      printf("8");
      break;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
      printf("9");
      break;
    default:
      printf("%c", numeric_form[i]);
    }
  }

  printf("\n");

  return 0;
}
