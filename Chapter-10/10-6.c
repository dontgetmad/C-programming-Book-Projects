/*
Some calculators (notably those from Hewlett-Packard) use a system of writing mathematical expressions known as Reverse Polish Notation (RPN). 
In this notation, operators are placed after their operands instead of between their operands. 
For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. 
RPN expressions can easily be evaluated using a stack. The algorithm involves reading the operators and operands in an expression from left to right, performing the following actions:

When an operand is encountered, push it onto the stack.
When an operator is encountered, pop its operands from the stack, perform the operation on those operands and then push the result onto the stack.
Write a program that evaluates RPN expressions. 
The operands will be single-digit integers, The operators are +, -, *, /, and =. 
The = operator causes the top stack item to be displayed; afterwards, the stack is cleared and the user is prompted to enter another expression. 
The process continues until the user enters a character that is not an operator or operand:

Enter an RPN expression: 1 2 3 * + =
Value of expression: 7
Enter an RPN expression: 5 8 * 4 9 - / =
Value of expression: -8
Enter an RPN expression: q
If the stack overflows, the program will display the message Expression is too complex and terminate. 
If the stack underflows (because of an expression such as 1 2 + +), the program will display the message Not enough operands in expression and terminate. Hints: Incorporate the stack code from Section 10.2 into your program. Use scanf(" %c", &ch) to read the operators and operands.

*/

/*
 * Name: 10-6.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK_SIZE 100
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char c) {
  if (is_full()) {
    return stack_overflow();
  }
  contents[top++] = c;
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  }
  return contents[--top];
}

int main(void) {
  char ch;
  printf("Enter an RPN expression: ");
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      continue;
    }
    if (isdigit(ch)) {
      push(ch - '0');
    } else {
      int temp = pop();
      int total = 0;
      switch (ch) {
      case '*':
        total = temp * pop();
        push(total);
        break;
      case '+':
        total = temp + pop();
        push(total);
        // printf("%d\n", temp + pop());
        break;
      case '-':
        total = pop() - temp;
        push(total);
        break;
      case '/':
        total = pop() / temp;
        push(total);
        break;
      case '=':
        printf("%d", contents[0]);
        break;
      }
    }
  }

  for (int i = 0; i < top; i++) {
    printf("%d\n", contents[i]);
  }
  return 0;
}

void stack_overflow(void) {
  printf("Stack overflow, please remove some elements before adding more\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("Stack underflow, the stack is empty. Please add to the stack before "
         "trying to pop!\n");
  exit(EXIT_FAILURE);
}
