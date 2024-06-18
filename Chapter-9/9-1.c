/*
Write a program that asks the user to enter a series of integers (which it stores in an array), 
then sorts the integers by calling the function selection_sort. 
When given an array with n elements, selection_sort must do the following: 
  1. Search the array to find the largest element, then move it to the last position in the array.
  2. Call itself recursively to sort the first n - 1 elements of the array.
*/

/*
 * Name: 9-1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 100

void selection_sort(int a[], int N) {
  int largest_int = 0, i, index = 0;
  int temp;

  if (N == 0) {
    return;
  }

  for (i = 0; i < N; i++) {
    if (a[i] > largest_int) {
      largest_int = a[i];
      index = i;
    }
  }

  temp = a[N - 1];
  a[N - 1] = largest_int;
  a[index] = temp;

  selection_sort(a, N - 1);
}

int main(void) {
  int arr[ARR_SIZE], i, N = 0;
  char c;
  printf("Enter a list of numbers to sort: ");
  for (i = 0; i < ARR_SIZE; i++) {
    scanf(" %d", &arr[i]);
    N++;

    if ((c = getchar()) == '\n') {
      break;
    }
  }

  selection_sort(arr, N);

  printf("Sorted list: ");
  for (i = 0; i < N; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
