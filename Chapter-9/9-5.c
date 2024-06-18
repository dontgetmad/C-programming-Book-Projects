/*
Modify Programming Project 17 from Chapter 8 so that it includes the following functions:

   void create_magic_square(int n, char magic_square[n][n]);
   void print_magic_square(int n, char magic_square[n][n]);
   
After obtaining the number n from the user, main will call create_magic_square, passing it an n × n array that is declared inside main. 
create_magic_square will fill the array with the numbers 1, 2, ..., n2 as described in the original project. 
main will then call print_magic_square, which will display the array in the format described in the original project. 
Note: If your compiler doesn’t support variable-length arrays, declare the array in main to be 99 × 99 instead of n × n and use the following prototypes instead:
   void create_magic_square(int n, char magic_square[99][99]);
   void print_magic_square(int n, char magic_square[99][99]);
*/

/*
 * Name: 9-5.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create_magic_square(int n, int magic_grid[n][n]) {
  int column = n / 2, row = 0, i, j, count = 1;

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
}

void print_magic_square(int n, int magic_grid[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%10d ", magic_grid[i][j]);
    }
    printf("\n");
  }
};

int main(void) {
  int n;
  printf("This program creates a magical square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of a magic square: ");
  scanf("%d", &n);

  int magic_grid[n][n];

  create_magic_square(n, magic_grid);
  print_magic_square(n, magic_grid);
  return 0;
}
