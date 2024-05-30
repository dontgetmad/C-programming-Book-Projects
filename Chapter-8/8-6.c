/*
The prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing messages. Here's a typical BIFF communiqué:

H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Write a "BIFF filter" that reads a message entered by the user and translates it into BIFF-speak:

Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Your program should convert the message to upper-case letters, substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks. 
Hint: Store the original message in an array of characters, then go back through the array, translating and printing characters one by one.
*/

/*
 * Name: 8-6.c
 * Purpose: learning C
 * Author: dontgetmad
 */

/*
  This works as intended by the question except adding '!', however, 
  the program behaviours in an unexpcted manner. Possibly due to the array
  being explicitly define and tring to access indexes that are empty. 
  That would be my guess. I ran the same code the author wrote and its the same 
  outcome. 

*/

#define ARRAY_SIZE 100
#define N (int)(sizeof(arr) / sizeof(arr[0]))

#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch;
  char arr[ARRAY_SIZE];
  int count = 0;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && count < ARRAY_SIZE) {
    arr[count] = toupper(ch);
    count++;
  }
  for (int i = 0; i < N; i++) {
    if (arr[i] == 0) {
      break;
    }
    switch (arr[i]) {
    case 'A':
      printf("4");
      break;
    case 'B':
      printf("8");
      break;
    case 'E':
      printf("3");
      break;
    case 'I':
      printf("1");
      break;
    case 'O':
      printf("0");
      break;
    case 'S':
      printf("5");
      break;
    default:
      printf("%c", arr[i]);
    }
  }
  printf("\n");
  return 0;
}
