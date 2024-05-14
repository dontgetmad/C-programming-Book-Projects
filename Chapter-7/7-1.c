/*

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 1 (int version)

   The square2.c program of Section 6.2 will fail (usually by
   printing strange answers) if i * i exceeds the maximum int
   value. Run the program and determine the smallest value of 
   n that causes failure. Try changing the type of i to short
   and running the program again. (Don't forget to update the
   conversion specifications in the call to printf!) Then try
   long. From these experiments, what can you conclude about
   the number of bits used to store integer types on your
   machine?

*/

/*
 * Name: 7-1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int size_int = sizeof(int);
  int size_short = sizeof(short);

  printf("Short: %d - Int: %d\n", size_short, size_int);

  return 0;
}

/*
 * When a variable is of type short is used, and a value greater than what is
 * can hold is given, in this case 32,766, the program either crashes
 * immediately, or behaves in an unexpected manner by printing negative values.
 * Therefore my laptop uses 16 bits for short and 32 bits for int.
 *
 * When long is used, then it continues calculating i * i until it reaches n,
 * the input.
 *
 */
