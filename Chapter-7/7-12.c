/*
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 12

   Write a program that evaluates an expression:

       Enter an expression: 1+2.5*3
       Value of expression: 10.5

   The operands in the expression are floating-point numbers;
   the operators are +, -, *, and /. The expression is evaluated
   from left to right (no operator takes precedence over any
   other operator).
*.

// Note to self:
// I didnt realise the question wanted me to take a defined input of 2 operators and 3 operands.
// My assumption was to take an input of n operands and n-1 operators.
// I wasnt struggling on how I would able to solve such a problem withour using an array.
// phew


/*
 * Name: 7-12.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char operator_1, operator_2;
  float operand_1, operand_2, operand_3;
  float sum;

  printf("Enter an expression: ");
  scanf("%f%c%f%c%f", &operand_1, &operator_1, &operand_2, &operator_2,
        &operand_3);

  sum = operand_1;

  printf("%f\n", sum);

  switch (operator_1) {
  case '+':
    sum = sum + operand_2;
    break;
  case '-':
    sum = sum - operand_2;
    break;
  case '*':
    sum = sum * operator_2;
    break;
  case '/':
    sum = sum / operand_2;
    break;

  default:
    printf("Invalid Operator, Run Program Again!\n");
    return 0;
  }

  switch (operator_2) {
  case '+':
    sum = sum + operand_3;
    break;
  case '-':
    sum = sum - operand_3;
    break;
  case '*':
    sum = sum * operand_3;
    break;
  case '/':
    sum = sum / operand_3;
    break;
  default:
    printf("Invalid Operator, Run Program Again!\n");
    return 0;
  }

  printf("Value of expression: %.2f\n", sum);

  return 0;
}
