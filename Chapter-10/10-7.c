// Note to future self, the code I wrote doesn't necessary use the functions specified by the question, instead I took a little detor and used
// switch statements rather than a multi-dimensional array. I don't want to spend 5 hrs on this question, also, I'm eager to start the next chapter on pointers. 
// Hopefully Tomorrow.

/*
Write a program that prompts the user for a number and then displays the number, using characters to simulate the effect of a seven-segment display:

Enter a number: 491-9014
      _       _   _
|_|  |_|   | |_| | |   | |_|
  |   _|   |  _| |_|   |   |
  
Characters other than digits should be ignored. Write the program so that the maximum number of digits is controlled by a macro named MAX_DIGITS, which has the value 10. 
If the number contains more than this number of digits, the extra digits are ignored. Hints: Use two external arrays. 
One is the segments array (see Exercise 6 in Chapter 8), which stores data representing the correspondence between digits and segments. 
The other array, digits will be an array of characters with 4 rows 
(since each segmented digit is four characters high) hand MAX_DIGITS * 4 columns (digits are three characters wide, 
but a space is needed between digits for readability). Write your program as four functions: 

main, 
clear_digits_array, 
process_digit, 
and print_digits_array. 
Here are the prototypes for the latter three functions:

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

clear_digits_array will store blank characters into all elements of the digits array, 
process_digit will store the seven-segment representation of digit into a specified position in the digits array (positions range from 0 to MAX_DIGITS - 1). 
print_digits_array will display the rows of the digits array, each on a single line, producing output such as that shown in the exmaple.

*/

/*
 * Name: 10-7.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DIGIT 10

char digits[MAX_DIGIT];

void clear_digits(void);
void process_digits();
// void print_digits_array(void);

int main(void) {
  int position = 0;
  char ch;

  for (int i = 0; i < MAX_DIGIT - 1; i++) {
    digits[i] = '*';
  }

  printf("Enter a number: ");
  while ((ch = getchar()) != '\n') {
    digits[position] = ch - '0';
    position++;
  }

  for (int i = 0; i < MAX_DIGIT - 1; i++) {
    printf("%d", digits[i]);
  }
  printf("\n");

  process_digits();

  return 0;
}

void print_digits_array();

void row_one(int num) {
  switch (num) {
  case 0:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    printf(" _ \t");
    break;

  case 4:
  case 1:
    printf("  \t");
  }
}

void row_two(int num) {
  switch (num) {
  case 0:
    printf("| |\t");
    break;
  case 1:
  case 7:
    printf("  |\t");
    break;
  case 2:
  case 3:
    printf(" _|\t");
    break;
  case 4:
  case 8:
  case 9:
    printf("|_|\t");
    break;
  case 5:
  case 6:
    printf("|_\t");
    break;
  }
}

void row_three(int num) {
  switch (num) {
  case 0:
  case 6:
  case 8:
    printf("|_|\t");
    break;
  case 1:
  case 4:
  case 7:
    printf("  |\t");
    break;
  case 2:
    printf("|_\t");
    break;
  case 3:
  case 5:
  case 9:
    printf(" _|\t");
    break;
  }
}

void process_digits() {

  for (int i = 0; i < MAX_DIGIT - 1; i++) {
    row_one(digits[i]);
  }
  printf("\n");

  for (int i = 0; i < MAX_DIGIT - 1; i++) {
    row_two(digits[i]);
  }
  printf("\n");

  for (int i = 0; i < MAX_DIGIT - 1; i++) {
    row_three(digits[i]);
  }
  printf("\n");
}

void clear_digits(void) {
  for (int i = 0; i < MAX_DIGIT - 1; i++) {
    digits[i] = '*';
  }
}
