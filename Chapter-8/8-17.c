// WORK IN PROGRSS!!!

/*
 * Name: 8-17.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, count = 1, i, j;
  printf("This program creates a magical square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of a magic square: ");
  scanf("%d", &n);

  int row = 0, column = n / 2;
  int magic_grid[n][n];

  // Initialize matrix with 0s
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      magic_grid[i][j] = 0;
    }
  }

  magic_grid[row][column] = count;

  for (i = 0; i < (n * n); i++) {
    if ((row - 1) < 0 && (column + 1) < n) {
      row = n - 1;
      column += 1;
      magic_grid[row][column] = ++count;
    }

    if (column + 1 < n) {
      if (magic_grid[row - 1][column + 1] == 0) {
        row -= 1;
        column += 1;
        magic_grid[row][column] = ++count;
      } else if (row + 1 < n) {
        row += 1;
        magic_grid[row][column] = ++count;
      }
    }

    if (row - 1 < 0 && column + 1 > n - 1) {
      row = n - 1;
      column = 0;
      magic_grid[row][column] = ++count;
    }

    printf("[%d][%d]\n", row, column);

    /*
    if ((row - 1) > 0 && (column + 1) <= n) {
      if (magic_grid[row - 1][column + 1] != 0) {
        row -= 1;
        column += 1;
        magic_grid[row][column] = count++;
      }
    }
    */
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", magic_grid[i][j]);
    }
    printf("\n");
  }

  return 0;
}
