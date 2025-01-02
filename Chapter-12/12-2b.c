/*
 * name: 12-2b.c
 * purpose: learning c
 * author: dontgetmad
*/

/*
      (a) Write a program that reads a message, then checks whether it’s a palindrome (the letters in the message are the same from left to right as from right to left):
      Enter a message: He lived as a devil, eh?
      Palindrome
      Enter a message: Madam, I am Adam.
      Not a palindrome
      Ignore all characters that aren’t letters. Use integer variables to keep track of positions in the array.

      (b) Revise the program to use pointers instead of integers to keep track of positions in the array.
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 99

int main(void) {
  char inputmessage[MAX_SIZE];
  char ch;
  int count = 0;

  printf("Enter a message: ");

  while ((ch = getchar()) != '\n' && count < MAX_SIZE) {
    if (isalpha(ch)) {
      inputmessage[count] = tolower(ch);
      count++;
    }
  }
  
  if (count == 0) {
      printf("Empty input, please try again!\n");
      return 0;
  }
  
  printf("\n");

  char *p1 = inputmessage, *p2 = inputmessage + count - 1; 

  while (p1 < p2) {
    if (*p1 != *p2) {
      printf("Not Palindrome!\n");
      return 0;
    }
    p1++;
    p2--;
  }

  printf("Palindrome!\n");

  return 0;
}
