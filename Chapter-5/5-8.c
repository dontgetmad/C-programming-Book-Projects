/*

C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 8

   The following table shows the daily flights from 
   one city to another:

   Departure time   Arrival time
   -----------------------------
    8:00 am         10:15 am
    9:43 am         11:52 am
   11:19 am          1:31 pm
   12:47 pm          3:00 pm
    2:00 pm          4:08 pm
    3:45 pm          5:55 pm
    7:00 pm          9:20 pm
    9:45 pm         11:58 pm

   Write a program that asks user to enter a time
   (expressed in hours and minutes, using the 24-hour
   clock). The program then displays the departure and
   arrival times for the flight whose departure time is
   closest to that entered by the user:

       Enter a 24-hour time: 13:15
       Closest departure time is 12:47 pm, arriving at 3:00 pm

   Hint: Convert the input into a time expressed in minutes
   since midnight, and compare it to the departure times, also
   expressed in minutes since midnight. For example, 13:15 is
   13 x 60 + 15 = 795 minutes since midnight, which is closer to
   12:47 pm (767 minutes since midnight) than to any of the
   other departure times.

*/

/*
 * Name: 5.8.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int hour_24h, minutes;
  int input_time_in_minutes;
  int diff = 1440;
  int i;
  int closest_dep, closest_arr;

  // Converted all deperature times into mnutes since midnight;

  int dep_1 = 480, arr_1 = 616;
  int dep_2 = 583, arr_2 = 712;
  int dep_3 = 679, arr_3 = 811;
  int dep_4 = 767, arr_4 = 900;
  int dep_5 = 840, arr_5 = 968;
  int dep_6 = 945, arr_6 = 1075;
  int dep_7 = 1140, arr_7 = 1289;
  int dep_8 = 1305, arr_8 = 1438;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour_24h, &minutes);

  input_time_in_minutes = (hour_24h * 60) + minutes;

  if (abs(input_time_in_minutes - dep_1) < diff) {
    diff = input_time_in_minutes - dep_1;
    closest_dep = dep_1;
    closest_arr = arr_1;
  }

  if (abs(input_time_in_minutes - dep_2) < diff) {
    diff = input_time_in_minutes - dep_2;
    closest_dep = dep_2;
    closest_arr = arr_2;
  }

  if (abs(input_time_in_minutes - dep_3) < diff) {
    diff = input_time_in_minutes - dep_3;
    closest_dep = dep_3;
    closest_arr = arr_3;
  }
  if (abs(input_time_in_minutes - dep_4) < diff) {
    diff = input_time_in_minutes - dep_4;
    closest_dep = dep_4;
    closest_arr = arr_4;
  }
  if (abs(input_time_in_minutes - dep_5) < diff) {
    diff = input_time_in_minutes - dep_5;
    closest_dep = dep_5;
    closest_arr = arr_5;
  }
  if (abs(input_time_in_minutes - dep_6) < diff) {
    diff = input_time_in_minutes - dep_6;
    closest_dep = dep_6;
    closest_arr = arr_6;
  }
  if (abs(input_time_in_minutes - dep_1) < diff) {
    diff = input_time_in_minutes - dep_7;
    closest_dep = dep_1;
    closest_arr = arr_1;
  }

  if (abs(input_time_in_minutes - dep_7) < diff) {
    closest_dep = dep_7;
    closest_arr = arr_7;
  }

  if (abs(input_time_in_minutes - dep_8) < diff) {
    diff = input_time_in_minutes - dep_8;
    closest_dep = dep_8;
    closest_arr = arr_8;
  }

  printf("Closest departure time is %02d:%02d, arriving at %02d:%02d\n",
         (closest_dep / 60), (closest_dep % 60), (closest_arr / 60),
         (closest_arr % 60));
}
