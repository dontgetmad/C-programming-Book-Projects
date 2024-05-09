/*

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 6

   Write a program that prompts the user to enter a
   number n, then prints all even squares between
   1 and n. For example, if the user enters 100, the
   program should print the following:

       4
       16
       36
       64
       100

*/

/*
 * Name: 6.6.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int num;
  int result = 0;

  printf("Enter a non-negative number: ");
  scanf("%d", &num);

  for (int i = 0; i < num; i += 2) {
    result = i * i;

    if (result > num) {
      break;
    }
    printf("%d\n", result);
  }

  return 0;
}
