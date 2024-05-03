/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):
   Enter a number between 0 and 32767: 1953
   In octal, your number is: 03641
The output should be displayed using five digits, even if fewer digits are sufficient. Hint: 
To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case). 
Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit. 
(printf is capable of displaying numbers in base 8, as we’ll see in Chapter 7, so there’s actually an easier way to write this program.)
*/

/*
 * Name: 4.4.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int i = 0;
  int a = 0, b = 0, c = 0, d = 0, e = 0;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &i);

  a = i % 8;
  i = i / 8;

  b = i % 8;
  i = i / 8;
  
  c = i % 8;
  i = i / 8;
  
  d = i % 8;
  i = i / 8;
  
  e = i % 8;
  

  printf("In octal, your number is: %d%d%d%d%d\n", e, d, c, b, a);
   return 0
}
