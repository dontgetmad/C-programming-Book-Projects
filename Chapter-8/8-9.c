// WORK IN PROGRESS!!!

/*
 * Name: 8-9.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int arr[10][10], i, j, random_direction;
  int current_row = 0, current_column = 0;
  int count = 0;
  int sides = 0;
  srand((unsigned)time(NULL));
  char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                       'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                       'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  // Initialising grid
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      arr[i][j] = '.';
    }
  }

  arr[0][0] = '*';

  while (count < 26) {
    random_direction = rand() % 4;
    printf("%d ----- [%d][%d]\n", random_direction, current_row,
           current_column);

    if (random_direction == 0) {
      if (current_row < 1 || arr[current_row - 1][current_column] != '.') {
        printf("seen\n");
        continue;
      } else {
        current_row -= 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    else if (random_direction == 1) {
      if (current_column > 8 || arr[current_row][current_column + 1] != '.') {
        printf("seen\n");
        continue;
      } else {
        current_column += 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    else if (random_direction == 2) {
      if (current_row > 8 || arr[current_row + 1][current_column] != '.') {
        printf("seen\n");
        continue;
      } else {
        current_row += 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    else if (random_direction == 3) {
      if (current_column < 1 || arr[current_row][current_column - 1] != '.') {
        printf("seen\n");
        continue;
      } else {
        current_column -= 1;
        arr[current_row][current_column] = alphabet[count];
        count++;
      }
    }

    printf("current position: [%d][%d]\n", current_row, current_column);
    // checking up
    if (current_row > 1) {
      printf("checking up\n");
      if (arr[current_row - 1][current_column] != '.') {
        printf(" - x\n");
        sides += 1;
      }
    }

    // checking down
    if (current_row < 9) {
      printf("checking down\n");
      if (arr[current_row + 1][current_column] != '.') {
        printf(" - x\n");
        sides += 1;
      }
