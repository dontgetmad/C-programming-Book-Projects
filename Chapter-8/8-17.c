/*
Write a program that prints an n x n magic square (a square of the numbers 1, 2, ... n² in which the sums of the rows, columns and diagonals are all the same). 
The user will specify the value of n:

This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5

   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9
   
Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row 0. 
Place each of the remaining numbers 2, 3, ... n² by moving up one row and over one column. 
Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. For example, instead of storing the ext number in row -1, 
we would store it in row n - 1 (the last row). Instead of storing the next number in column n, we would store it in column 0. If a particular array element is already occupied, 
put the number directly below the previously stored number. 
If your compiler supports variable-length arraysm declare the array to have n rows and n columns. If not, declare the array to have 99 rows and 99 columns.
*/

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

  for (i = 0; i < n * n; i++) {

    // the zones are dynamic depending on the n, so it can grow and strink
    // Checking for red senction in magic_grid
    if (row == 0 && column < n - 1) {
      row = n - 1;
      column += 1;
      magic_grid[row][column] = ++count;
    }

    // Checking green section
    if (row > 0 && column < (n - 1)) {
      if (magic_grid[row - 1][column + 1] == 0) {
        row -= 1;
        column += 1;
        magic_grid[row][column] = ++count;
      } else {
        if (row == n - 1) {
          continue;
        }
        row += 1;
        magic_grid[row][column] = ++count;
      }
    }

    // checking blue section
    if (row > 0 && column == n - 1) {
      row -= 1;
      column = 0;
      magic_grid[row][column] = ++count;
    }

    // checking for yellow section
    if (row == 0 && column == (n - 1)) {
      row += 1;
      magic_grid[row][column] = ++count;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%10d ", magic_grid[i][j]);
    }
    printf("\n");
  }

  return 0;
}
