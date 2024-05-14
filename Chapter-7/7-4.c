/*

  C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 4

   Write a program that translates an alphabetic phone
   number into numeric form:

       Enter phone number: CALLATT
       2255288

   (In case you don't have a telephone nearby, here are
   the letters on the keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL,
   6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone
   number contains nonalphabetic characters (digits or
   punctuation, for example), leave them unchanged:

       Enter phone number: 1-800-COL-LECT
       1-800-265-5328

   You may assume that any letters entered by the user
   are uppercase.
   
*/

/*
 * Name: 7-4.c
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
  char ch;
  printf("Enter a phone number: ");

  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case 'A':
    case 'B':
    case 'C':
      printf("2");
      break;
    case 'D':
    case 'E':
    case 'F':
      printf("3");
      break;
    case 'G':
    case 'H':
    case 'I':
      printf("4");
      break;
    case 'J':
    case 'k':
    case 'L':
      printf("5");
      break;
    case 'M':
    case 'N':
    case 'O':
      printf("6");
      break;
    case 'P':
    case 'R':
    case 'S':
      printf("7");
      break;
    case 'T':
    case 'U':
    case 'V':
      printf("8");
      break;
    case 'X':
    case 'Y':
    case 'Z':
      printf("8");
      break;

    default:
      printf("%c", ch);
    }
  }
  printf("\n");

  return 0;
}
