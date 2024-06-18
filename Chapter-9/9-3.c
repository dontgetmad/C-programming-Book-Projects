/*
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:

  void generate_random_walk(char walk[10][10]);
  void print_array(char walk[10][10]);

main first calls generate_random_walk, which initializes the array to contain '.' 
characters and then replaces some of these characters by the letters A through Z, 
as described in the original project. main then calls print_array to display the array on the screen.
*/

/*
 * Name: 9-3.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(int arr[10][10]) {
  int i, j, random_direction;
  int current_row = 0, current_column = 0;
  int count = 0;
  int sides = 0;

  // Seeding random number generator
  srand((unsigned)time(NULL));

  char alphabet[25] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                       'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                       'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  // Initialising grid
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      arr[i][j] = '.';
    }
  }

  // Setting the initial starting point
  arr[0][0] = 'A';

  // Looping until all letters of the alphabet have been placed
  // loop is existed when all surrounding cells are filled
  while (count < 25) {
    random_direction = rand() % 4;

    sides = 0;

    /*
     * Before generating a number from 0 - 3
     * we check the current cells surrounding making sure
     * it has room to move, if not then the sides variable
     * is incremented and when it equals to 4
     * it means all sides have been checked and are previously visited
     * I tired to generate a number check first and then check but
     * it results in an infinite loop as the continue statement will
     * just restart the process
     */

    // checking up
    if (current_row >= 1) {
      if (arr[current_row - 1][current_column] != '.') {
        sides += 1;
      }
    }

    // checking down
    if (current_row < 9) {
      if (arr[current_row + 1][current_column] != '.') {
        sides += 1;
      }
    }

    // checking right
    if (current_column < 9) {
      if (arr[current_row][current_column + 1] != '.') {
        sides += 1;
      }
    }

    // checking left
    if (current_column >= 1) {
      if (arr[current_row][current_column - 1] != '.') {
        sides += 1;
      }
    }

    // if the current cell is at the top or bottom of the current row
    if (current_column == 0 || current_column == 9) {
      sides += 1;
    }

    // If the current cell is at the right and left most the current column
    if (current_row == 0 || current_row == 9) {
      sides += 1;
    }

    // If all position have been visited and they are filled, then break
    // (exist).
    if (sides == 4) {
      break;
    }

    if (random_direction == 0) {
      if (current_row < 1 || arr[current_row - 1][current_column] != '.') {
        continue;
      } else {
        current_row -= 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    else if (random_direction == 1) {
      if (current_column > 8 || arr[current_row][current_column + 1] != '.') {
        continue;
      } else {
        current_column += 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    else if (random_direction == 2) {
      if (current_row > 8 || arr[current_row + 1][current_column] != '.') {
        continue;
      } else {
        current_row += 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    else if (random_direction == 3) {
      if (current_column < 1 || arr[current_row][current_column - 1] != '.') {
        continue;
      } else {
        current_column -= 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }
  }
};
void print_array(int arr[10][10]) {
  int i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("%c ", arr[i][j]);
    }
    printf("\n");
  }
};

int main(void) {
  int arr[10][10];
  generate_random_walk(arr);
  print_array(arr);

  return 0;
}
