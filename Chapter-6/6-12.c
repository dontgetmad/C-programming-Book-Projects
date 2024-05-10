/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 12

   Modify Programming Project 11 so that the program
   continues adding terms until the current term becomes
   less than E where E is a small (floating-point) number
   entered by the user.

   [rsantos] For example, if the user enters 7 as the
   value for n and 0.0015 as the value for E, then the
   program will not add the values for 1/6! (0.0014) and
   1/7! (0.0002) to the final value of constant e because 
   1/6! (0.0014) < 0.0015.

*/

/*
 * Name: 6.12.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  double num;
  double temp = 1;
  double sum = 1;
  double epsilon;

  printf("*** Approximating the constant e ***\n");
  printf("Enter a non-negative number (n): ");
  scanf("%lf", &num);
  printf("Enter a non-negative epsilon value (ε): ");
  scanf("%lf", &epsilon);

  for (int i = 1; i <= num; i++) {
    temp = temp * i;
    sum = sum + 1 / (temp);

    if (1 / (temp) < epsilon) {
      break;
    }

    printf("%10.10lf%10.5lf\n", 1 / temp, sum);

  }

  return 0;
}
