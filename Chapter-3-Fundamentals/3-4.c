/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxx- xxxx and then displays the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

/*
 * Name: 3.4.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int area_code, first_part, second_part;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &area_code, &first_part, &second_part);

  printf("You entered: %d.%d.%d\n", area_code, first_part, second_part);
}
