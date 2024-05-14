/*

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 6

   Write a program that prints the values of sizeof(int),
   sizeof(short), sizeof(long), sizeof(float), sizeof(double)
   and sizeof(long double).
   
*/

/*
 * Name: 7-6.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  printf("Size of int (bytes): %lu\n", sizeof(int));
  printf("Size of short (bytes): %lu\n", sizeof(short));
  printf("Size of long (bytes): %lu\n", sizeof(long));
  printf("Size of float (bytes): %lu\n", sizeof(float));
  printf("Size of double (bytes): %lu\n", sizeof(double));
  printf("Size of long double (bytes): %lu\n", sizeof(long double));

  return 0;
}
