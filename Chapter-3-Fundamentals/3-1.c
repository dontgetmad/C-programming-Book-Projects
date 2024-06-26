// Question
/*
  * Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis- plays it in the form yyyymmdd:
  * Enter a date (mm/dd/yyyy): 2/17/2011
  * You entered the date 20110217
*/

/*
 * Name: 3.1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int day, month, year;
  printf("Enter a date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  /*
   * The 0 here specifies that if the input is less than 2,
   * then pad it with leading 0's
  */
  printf("You entered the date %04d%02d%02d\n", year, month, day);
  return 0;
}
