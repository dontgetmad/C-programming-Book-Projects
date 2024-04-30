// Question
/*
 * Write a program that computes the volume of a sphere with a 10-meter radius, using the for- mula v = 4/3πr3. 
 * Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap- pens?) 
 * Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself twice to compute r3.
*/

/*
 * Name: 2.2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

#define PI 3.14

int main() {
  float volume, r;

  printf("---- This program calculates the volume of a sphere ----\n");

  printf("Enter a radius (meters): ");
  scanf("%f", &r);

  volume = (4.0f / 3.0f) * (PI * (r * r * r));
  printf("Volume of sphere (meteres): %.2f\n", volume);
}
