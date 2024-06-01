/* 
 Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. 
 (The times are integers, representing the number of minutes since midnight.)
 The program will use a loop to search the array of departure times for the one closest to the time entered by the user.
*/

/*
 * Name: 8-10.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main(void) {
  int hours, minutes, i;
  int input_minutes;
  int closest_arr, closest_dep = 1440;
  int temp = 0;
  int index = 0;

  int departure[8] = {480, 582, 679, 767, 840, 945, 1140, 1305};
  int arrival[8] = {616, 712, 811, 900, 968, 1075, 1289, 1438};

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  input_minutes = (hours * 60) + minutes;

  printf("%d\n", input_minutes);

  for (i = 0; i < 8; i++) {
    temp = abs(departure[i] - input_minutes);
    if (temp < closest_dep) {
      closest_dep = temp;
      index = i;
    }
  }

  printf("%d\n", index);

  closest_dep = departure[index];
  closest_arr = arrival[index];

  printf("Closest departure time is: %d:%02d\nArrival time is %d:%02d\n",
         (closest_dep / 60), (closest_dep % 60), (closest_arr / 60),
         (closest_arr % 60));

  return 0;
}
