// A simple program that reads a message on a single input line
// a returns the length of the message, including whitespace

/*
 * Name: get-message-length.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char ch;
  int counter = 0;
  
  while ((ch = getchar()) != '\n') {
    counter++;
  }
  
  printf("%d\n", counter);
  
  return 0;
}


