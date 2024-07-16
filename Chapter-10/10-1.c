/*
Modify the stack example of Section 10.2 so that it stores characters instead of integers. 
Next, add a main function that asks the user to enter a series of parentheses and/or braces, then indicates whether or not they're properly nested:

Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly
Hint: As the program reads characters, have it push each left parenthesis or left brace. 
When it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a matching parenthesis or brace. 
(If not, the parentheses/braces aren't nested properly.) When the program reads the new-line character, have it check whether the stack is empty; if so, the parentheses/braces are matched. 
If the stack isn't empty (or if stack_underflow is ever called), the parentheses/braces aren't matched. If stack_overflow is called, have the program print the message Stack overflow and terminate immediately.
*/

/*
 * Name: 10-1.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);

void make_empty(void) { top = 0; }

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
  printf("Enter parentheses and/or braces: ");
  while ((ch = getchar()) != '\n') {
    if (ch == ')') {
      char temp = pop();
      if (temp == '(') {
        continue;
      } else {
        push(temp);
      }
    }

    if (ch == '}') {
      char temp = pop();
      if (temp == '{') {
        continue;
      } else {
        push(temp);
      }
    }

    if (ch == '(' || ch == '{') {
      push(ch);
    }
  }

  if (is_empty()) {
    printf("Parentheses/Braces are nested properly!\n");
    return 0;
  } else {
    printf("Parentheses/Braces are not nested properly\n");
    return 0;
  }
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
