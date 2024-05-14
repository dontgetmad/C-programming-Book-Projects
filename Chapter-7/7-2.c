/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 2 

   Modify the square2.c program of Section 6.3 so that it 
   pauses every 24 squares and displays the following message:

       Press Enter to continue...

   After displaying the message, the program should use
   getchar to read a character. getchar won't allow the 
   program to continue until the user presses the Enter key.

*/

// I really struggled with this one, i didnt know after taking an input, a new line character is added in to the input buffer.
// You need to clear this before checking the next time you use getchar
// THis was a fat headache as i didnt know it was thing *sigh*

/*
 * Name: 7-2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, n;
  char enter;

  printf("\nThis program prints a tables of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar();

  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, i * i);
    if (i % 24 == 0) {
      printf("Press Enter to continue... ");
      do {

      } while (getchar() != '\n');
    }
  }
  return 0;
}
