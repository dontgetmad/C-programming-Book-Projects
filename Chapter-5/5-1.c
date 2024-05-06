/*
Write a program that calculates how many digits a number contains:
Enter a number: 374
The number 374 has 3 digits
You may assume that the number has no more than four digits. Hint: Use if statements to test the number.
For example, if the number is between 0 and 9, it has one digit. If the num- ber is between 10 and 99, it has two digits.
*/

/*
 * Name: 5.1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int num = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num <= 9 && num >= 0) {
    printf("The number %d has 1 digit\n", num);
  } else if (num <= 99 && num >= 10) {
    printf("The number %d has 2 digits\n", num);
  } else if (num <= 999 && num > -100) {
    printf("The number %d has 3 digits\n", num);
  }
  return 0;
}
