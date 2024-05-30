/*
Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, 
then computes the total score and average score for each student, 
and the average score, high score, and low score for each quiz.
*/

/*
 * Name: 8-8.c
 * Purpose: learning C
 * Author: dontgetmad 
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int i, j, temp_total, high_score = 0, low_score = 101;
  float temp_avg;
  int arr[5][5];

  for (i = 0; i < 5; i++) {
    printf("Enter 5 quiz grades for quiz %d: ", i + 1);
    for (j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n");

  // Calculating each students total score and avg score.
  for (i = 0; i < 5; i++) {
    temp_total = 0;
    for (j = 0; j < 5; j++) {
      temp_total += arr[j][i];
    }

    temp_avg = temp_total / 5.0;

    printf("Student %d total score: %d, Average score: %.2f\n", i + 1,
           temp_total, temp_avg);
  }

  printf("\n");

  // Calculating avg, high and low scores for each quiz
  for (i = 0; i < 5; i++) {
    temp_total = 0;
    low_score = 101;
    high_score = 0;
    for (j = 0; j < 5; j++) {
      temp_total += arr[i][j];
      if (arr[i][j] > high_score) {
        high_score = arr[i][j];
      }
      if (arr[i][j] < low_score) {
        low_score = arr[i][j];
      }

      temp_avg = temp_total / 5.0;
    }

    printf(
        "Quiz %d; Average score: %.2f, Highest score: %d, Lowest score: %d\n",
        i + 1, temp_avg, high_score, low_score);
  }

  return 0;
}
