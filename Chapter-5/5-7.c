/*
  C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 7

   Write a program that finds the largest and smallest of
   four integers entered by the user:

       Enter four integers: 21 43 10 35
       Largest: 43
       Smallest: 10

   Use as few if statements as possible.
   Hint: Four if statements are sufficient.
*/

/*
 * Name: 5.7.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int num_1, num_2, num_3, num_4;
  int s_1, s_2, l_1, l_2;
  int smallest = 1000, largest = 0;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);


  if (num_1 < num_2) {
    s_1 = num_1;
    l_1 = num_2;
  } else {
    s_1 = num_2;
    l_1 = num_1;
  }

  if (num_3 < num_4) {
    s_2 = num_3;
    l_2 = num_4;
  } else {
    s_2 = num_4;
    l_2 = num_3;
  }

  if (s_1 < s_2) {
    smallest = s_1;
  } else {
    smallest = s_2;
  }

  if (l_1 > l_2) {
    largest = l_1;
  } else {
    largest = l_2;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);
}
