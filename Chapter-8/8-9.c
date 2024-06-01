/*
  Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters (all '.' initially). The program must randomly "walk" from element to element, always going up, down, left or right by one element. The elements visited by the program will be labeled with the letters A through Z, in the order visited. Here's an example of the desired output:
  
  A . . . . . . . . .
  B C D . . . . . . .
  . F E . . . . . . .
  H G . . . . . . . .
  I . . . . . . . . .
  J . . . . . . . Z .
  K . . R S T U V Y .
  L M P Q . . . W X .
  . N O . . . . . . .
  . . . . . . . . . .
  
  Hint Use the srand and rand functions (see deal.c) to generate random numbers. After generating a number, look at its remainder when divided by 4. There are four possible values for the remainder -- 0, 1, 2 and 3 -- indiciating the direction of the next move. Before performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all four directions are blocked, thr program must terminate. Here's an example of premature termination:
  
  A B G H I . . . . .
  . C F . J K . . . .
  . D E . M L . . . .
  . . . . N O . . . .
  . . W X Y P Q . . .
  . . V U T S R . . .
  . . . . . . . . . .
  . . . . . . . . . .
  . . . . . . . . . .
  . . . . . . . . . .
  
  Y is blocked on all four sides, so there's no place to put Z.
*/


/*
 * Name: 8-8.c
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

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("%c ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
