/*
 * name: 12-1b.c
 * purpose: learning c
 * author: dontgetmad
*/

/*
(a) Write a program that reads a message, then prints the reversal of the message: Enter a message: Don't get mad, get even.
    Reversal is: .neve teg ,dam teg t'noD
    Hint: Read the message one character at a time (using getchar) and store the characters in
    an array. Stop reading when the array is full or the character read is '\n'.
    
(b) Revise the program to use a pointer instead of an integer to keep track of the current
    position in the array.
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
  char *ptr;
  printf("enter a message: ");

  while ((ch = getchar()) != '\n' && count < MAX_SIZE) {
    inputmessage[count] = ch;
    count++;
  }

  inputmessage[count] = '\0';

  for (ptr = inputmessage + count - 1; ptr >= inputmessage; ptr--) {
    printf("%c", *ptr);
  }

  printf("\n");

  return 0;
}
