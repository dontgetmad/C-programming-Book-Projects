/*
Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
  
  void read_word(int counts[26]);
  bool equal_array(int counts1[26], int counts2[26]);

main will call read_word twice, once for each of the two words entered by the user. 
As it reads a word, read_word will use the letters in the word to update the counts array, 
as described in the original project. (main will declare two arrays, one for each word. 
These arrays are used to track how many times each letter occurs in the words.) main will then call equal_array, passing it the two arrays. 
equal_array will return true if the elements in the two arrays are identical (indicating that the words are anagrams) and false otherwise.
*/

/*
 * Name: 9-4.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void read_word(int counts[26]) {
  char c;
  printf("Enter a word: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      counts[toupper(c) - 'A']++;
    }
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  int i;

  for (i = 0; i < 26; i++) {
    if (counts1[i] != counts2[i]) {
      return false;
    }
  }

  return true;
}

int main(void) {
  int counts1[26] = {0};
  int counts2[26] = {0};

  read_word(counts1);
  read_word(counts2);

  if (equal_array(counts1, counts2)) {
    printf("The words are anagrams.\n");
  } else {
    printf("The words are not anagrams.\n");
  }

  printf("\n");

  return 0;
}
