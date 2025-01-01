/*
 * name: 12-2.c
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
    if (isalnum(ch)) {
      inputmessage[count] = ch;
    }
    count++;
  }

  int start = 0, end = count - 1;

  while (start < count) {
    if (inputmessage[start] != inputmessage[end]) {
      printf("Not Palindrome!\n");
      return 0;
    }
    start++;
    end--;
  }

  printf("Palindrome!\n");

  return 0;
}
