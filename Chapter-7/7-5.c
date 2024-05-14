/*

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 5

   In the SCRABBLE Crossword Game, players form words using small tiles,
   each containing a letter and a face value. The face value varies from
   one letter to another, based on the letter's rarity. (Here are the face
   values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.)
   Write a program that computes the value of a word by summing the value
   of its letters:

       Enter a word: pitfall
       Scrabble value: 12

   Your program should allow any mixture of lower-case and upper-case letters
   in the word. Hint: Use the toupper library function.

*/


/*
 * Name: 7-5.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char ch;
  printf("Enter a word: ");
  int scrabble_value = 0;

  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    switch (ch) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      scrabble_value += 1;
      break;

    case 'D':
    case 'G':
      scrabble_value += 2;
      break;

    case 'B':
    case 'C':
    case 'M':
    case 'P':
      scrabble_value += 3;
      break;

    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      scrabble_value += 4;
      break;

    case 'K':
      scrabble_value += 5;
      break;

    case 'J':
    case 'X':
      scrabble_value += 8;
      break;

    case 'Q':
    case 'Z':
      scrabble_value += 10;

    default:;
    }
  }
  printf("scrabble value: %d\n", scrabble_value);

  return 0;
}
