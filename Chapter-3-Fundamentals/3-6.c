/*
Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
*/

/*
 * Name: 3.6.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <stdio.h>
#include <string.h>

int main(void) {

  int num1, denom1, num2, denom2, num_result, denom_result;

  printf("Enter two fractions seperated by a plus sign: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  num_result = (num1 * denom2) + (num2 * denom1);
  denom_result = denom1 * denom2;

  printf("The sum is %d/%d\n", num_result, denom_result);
}
