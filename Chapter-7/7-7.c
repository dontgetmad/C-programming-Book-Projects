/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 7

   Modify Programming Project 6 from Chapter 3 so that the user
   may add, subtract, multiply, or divide two fractions 
   (by entering either +, -, *, or / between the fractions).
*/

/*
 * Name: 7-7.c
 * Purpose: learning C
 * Author: dontgetmad
 */

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  int num1, denom1, num2, denom2, num_result, denom_result;
  char op;

  printf("Enter two fractions seperated by an operator: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

  switch (op) {
  case '*':
    num_result = num1 * num2;
    denom_result = denom1 * denom2;
    break;

  case '+':
    num_result = (num1 * denom2) + (num2 * denom1);
    denom_result = denom1 * denom2;
    break;

  case '-':
    num_result = (num1 * denom2) - (num2 * denom1);
    denom_result = denom1 * denom2;
    break;

  case '/':
    num_result = num1 * denom2;
    denom_result = denom1 * num2;
    if (denom_result == 0 || num_result == 0) {
      printf("Division by 0, please try again\n");
      return 0;
    }
    break;

  default:
    printf("Invalid operator, please try again\n");
    return 0;
  }

  printf("The sum is %d/%d\n", num_result, denom_result);
  return 0;
}
