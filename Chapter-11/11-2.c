/*
Modify Programming Project 8 from Chapter 5 so that it includes the following function:

void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);
This function wil find the flight whose departure time is closest to desired_time (expressed in minutes sinces midnight). 
It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables pointed to by departure_time and arrival_time, respectively.
*/

/*
 * Name: 11-2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time);

int main(void) {
  int desired_time, hour, minutes;
  int departure_time = 1440, arrival_time;
  printf("Enter a 24-hour tiime: ");
  scanf("%d:%d", &hour, &minutes);

  desired_time = (hour * 60) + minutes;

  find_closest_flight(desired_time, &departure_time, &arrival_time);

  printf("Closest departure time is: %d:%02d\nArrival time is %d:%02d\n",
         (departure_time / 60), (departure_time % 60), (arrival_time / 60),
         (arrival_time % 60));

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time) {
  int departures[8] = {480, 582, 679, 767, 840, 945, 1140, 1305};
  int arrivals[8] = {616, 712, 811, 900, 968, 1075, 1289, 1438};
  int index = 0, temp = 0;

  for (int i = 0; i < 8; i++) {
    temp = abs(departures[i] - desired_time);
    if (temp < *departure_time) {
      *departure_time = temp;
      index = i;
    }
  }

  *departure_time = departures[index];
  *arrival_time = arrivals[index];
}
