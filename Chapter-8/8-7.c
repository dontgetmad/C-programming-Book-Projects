/*
  Write a program that reads a 5 x 5 array of integers and then prints the row sums and the column sums:
  
  Enter row 1: 8 3 9 0 10
  Enter row 2: 3 5 17 1 1
  Enter row 3: 2 8 6 23 1
  Enter row 4: 15 7 3 2 9
  Enter row 5: 6 14 2 6 0
  
  Row totals: 30 27 40 36 28
  Column totals: 34 37 37 32 21
*/

/*
 this solution is correct and better because it uses multi-D arrays
 and two for loops. sigh i knew it would be better but like always
 get obessed with the current meothod and dont want to start over.
 Lesson learned. 
*/

/*
 * Name: 8-7.c
 * Purpose: learning C
 * Author: williemhgherman
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int i, j, temp_total;
  int arr[5][5];

  for (i = 0; i < 5; i++) {
    printf("Enter row %d: ", i + 1);
    for (j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Row totals: ");
  for (i = 0; i < 5; i++) {
    temp_total = 0;
    for (j = 0; j < 5; j++) {
      temp_total += arr[i][j];
    }
    printf("%d ", temp_total);
  }

  printf("\n");

  printf("Column totals: ");
  for (i = 0; i < 5; i++) {
    temp_total = 0;
    for (j = 0; j < 5; j++) {
      temp_total += arr[j][i];
    }
    printf("%d ", temp_total);
  }
  printf("\n");

  return 0;
}














// My crappy solution that doesnt factor in numbers greater than 9
// and cauuses a index out of bounds error

/*
 * Name: 8-7.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <ctype.h>
#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {
  char ch;
  int count = 1;
  int row_total[ARRAY_SIZE] = {0};
  int column_total[ARRAY_SIZE] = {0};
  int temp = 0;

  int x = 0;

  while (count < 6) {
    printf("Enter row %d: ", count);

    while ((ch = getchar()) != '\n') {
      if (ch == ' ') {
        continue;
      }
      ch -= '0';

      column_total[x] += ch;

      temp += ch;
      x++;
    }

    printf("\n");

    row_total[count - 1] = temp;

    temp = 0;
    count++;
    x = 0;
  }

  printf("Row totals: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", row_total[i]);
  }
  printf("\n");

  printf("Column totals: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", column_total[i]);
  }

  printf("\n");

  return 0;
}
