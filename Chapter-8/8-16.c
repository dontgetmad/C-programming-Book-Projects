/*
  Write a program that test whether two words are anagrams (permutations of the same letters):
  
  Enter first words: smartest
  Enter second words: mattress
  The words are anagrams.
  
  Enter first word: dumbest
  Enter second word: stumble
  The words are not anagrams.
  
  Write a loop that reads the first word, character by character, using an array of 26 integers to keep track of how many times each letter has been seen. 
  (For example, after the word smartest has been read, the array should contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, 
  reflecting the fact that smartest contains one a, one e, one m, one r, two s's and two t's.) 
  Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read. 
  Both loops should ignore any characters that aren't letters, and bth should treat upper-case letters in the same way as lower-case letters. 
  After the second word has been read, use a third loop to check whether all the elements in the array are zero. If so, the words are anagrams. 
  Hint: You may wish to use the functions from <ctype.h>, such as isalpha and tolower.
*/

/*
 * Name: 8-16.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 45

int main(void) {
  char ch;
  int i, count = 0;
  char first_word[ARR_SIZE] = {0};
  char second_word[ARR_SIZE] = {0};
  char alphabet_occurances[26] = {0};

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n' && count < ARR_SIZE) {
    if (isalpha(ch)) {
      first_word[count] = tolower(ch);
      alphabet_occurances[ch - 'a'] += 1;
    }
    first_word[count] = ch;
    count++;
  }

  count = 0;

  printf("Enter second word: ");
  while ((ch = getchar()) != '\n' && count < ARR_SIZE) {
    if (isalnum(ch)) {
      second_word[count] = ch;
      if (alphabet_occurances[ch - 'a'] >= 1) {
        alphabet_occurances[ch - 'a'] -= 1;
      } else if (alphabet_occurances[ch - 'a'] == 0) {
        alphabet_occurances[ch - 'a'] += 1;
      }
    }
    second_word[count] = ch;
    count++;
  }

  count = 0;

  for (i = 0; i < 26; i++) {
    count += alphabet_occurances[i];
  }

  if (count == 0) {
    printf("The words are anagrams.");
  } else {
    printf("The words are not anagrams.");
  }

  printf("\n");
  return 0;
}
