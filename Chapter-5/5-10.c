/*
  
  C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 10

   Using the switch statement, write a program that converts
   a numerical grade into a letter grade:

       Enter a numerical grade: 84
       Letter grade: B

   Use the following grading scale: A = 90-100, B = 80-89,
   C = 70-79, D = 60-69, F = 0-59. Hint: Break the grade
   into two digits, then use a switch statement to test
   the ten's digit.

*/

/*
 * Name: 5.10.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int numerical_grade;

  printf("Enter numerical grade: ");
  scanf("%d", &numerical_grade);

  switch (numerical_grade / 10) {
  case 10:
  case 9:
    printf("Letter grade: A\n");
    break;
  case 8:
    printf("Letter grade: B\n");
    break;
  case 7:
    printf("Letter grade: C\n");
    break;
  case 6:
    printf("Letter grade: D\n");
    break;
  case 5:
    printf("Letter grade: F\n");
    break;
  default:
    printf("Error - invalid numerical grade given");
  }

  return 0;
}
