/*
Write a program that reverses the words in a sentence:
    
    Enter a sentence: you can cage a swallow can't you?
    Reversal of sentence: you can't swallow a cage can you?
    
Hint: Use a loop to read the characters one by one and store them in a one-dimensional char array. 
Have the loop stop at a period, question mark, or exclamation point (the “termi- nating character”), which is saved in a separate char variable. 
Then use a second loop to search backward through the array for the beginning of the last word. 
Print the last word, then search backward for the next-to-last word. Repeat until the beginning of the array is reached. 
Finally, print the terminating character.
*/

/*
 * Name: 8-14.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 99

int main(void) {
  char ch, special_char;
  char input_sentence[ARR_SIZE][ARR_SIZE] = {{'.'}};
  int word_count = 0, i = 0, j = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == '.' || ch == '?' || ch == '!') {
      special_char = ch;
      continue;
    }

    if (ch == ' ') {
      i++;
      word_count++;
      continue;
    }

    input_sentence[i][j] = ch;
    j++;
  }

  printf("Reversal of sentence: ");
  for (i = word_count; i >= 0; i--) {
    for (j = 0; j < ARR_SIZE; j++) {
      printf("%c", input_sentence[i][j]);
    }
    if (i != 0) {
      printf(" ");
    }
  }

  printf("%c", special_char);
  printf("\n");
  return 0;
}
