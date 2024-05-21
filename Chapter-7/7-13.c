/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 13

   Write a program that calculates the average word length
   for a sentence: 

       Enter a sentence: It was deja vu all over again.
       Average word length: 3.4

   For simplicity, your program should consider a punctuation
   mark to be part of the word to which it is attached. Display
   the average word length to one decimal place.
*/

/*
 * Name: 7-13.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char ch;
  float total_words = 0;
  float total_chars = 0;

  printf("Enter a sentence: ");

  // hello world
  while ((ch = getchar()) != '\n') {
    if (ch != ' ') {
      total_chars += 1;
    }

    if (ch == ' ' || ch == '\n' || ch == '.') {
      total_words += 1;
    }
  }

  printf("Characters: %.0f\n", total_chars);
  printf("Words: %.0f\n", total_words);
  printf("Average word length: %.1f\n", (total_chars / total_words));

  return 0;
}
