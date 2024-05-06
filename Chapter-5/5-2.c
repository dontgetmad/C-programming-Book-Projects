/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.
*/

/*
 * Name: 5.2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int hour_24h, minute_24h, hour_12h;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%d", &hour_24h, &minute_24h);


  if (hour_24h == 0) {
    printf("Equivalent 12-hour time: 12:%d AM\n", minute_24h);
  }

  if (hour_24h < 12 && hour_24h > 0) {
    printf("Evuivalent 12-hour time: %d:%d AM\n", hour_24h, minute_24h);
  }

  if (hour_24h > 11 && hour_24h < 24) {
    
    switch (hour_24h) {
      case 12: hour_12h = 12; break;
      case 13: hour_12h = 1; break;
      case 14: hour_12h = 2; break;
      case 15: hour_12h = 3; break;
      case 16: hour_12h = 4; break;
      case 17: hour_12h = 5; break;
      case 18: hour_12h = 6; break;
      case 19: hour_12h = 7; break;
      case 20: hour_12h = 8; break;
      case 21: hour_12h = 9; break;
      case 22: hour_12h = 10; break;
      case 23: hour_12h = 11; break;
    }


    printf("Equivalent 12-hour time: %d:%d PM\n", hour_12h, minute_24h);
  } 

  return 0;
}
