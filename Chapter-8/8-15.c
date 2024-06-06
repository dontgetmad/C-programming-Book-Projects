/*
One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Cae- sar. 
It involves replacing each letter in a message with another letter that is a fixed number of
positions later in the alphabet. (If the replacement would go past the letter Z, the cipher “wraps around” to the beginning of the alphabet. 
For example, if each letter is replaced by the letter two positions after it, then Y would be replaced by A, and Z would be replaced by B.) 
Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted):
    Enter message to be encrypted: Go ahead, make my day.
    Enter shift amount (1-25): 3
    Encrypted message: Jr dkhdg, pdnh pb gdb.
Notice that the program can decrypt a message if the user enters 26 minus the original key:
    Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
    Enter shift amount (1-25): 23
    Encrypted message: Go ahead, make my day.
You may assume that the message does not exceed 80 characters. Characters other than let- ters should be left unchanged. 
Lower-case letters remain lower-case when encrypted, and upper-case letters remain upper-case. Hint: 
To handle the wrap-around problem, use the expression((ch-'A')+n)%26+'A'to calculate the encrypted version of an upper- case letter, where ch stores the letter and n stores the shift amount. (
You’ll need a similar expression for lower-case letters.)
*/


/*
 * Name: 8-15.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 80

int main(void) {
  int shift_amount = 0, count = 0, i, temp;
  char ch;
  char input_sentence[ARR_SIZE] = {0};
  char encrypted_message[ARR_SIZE] = {0};
  char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                       's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  printf("Enter a message to be encrypted: ");
  while ((ch = getchar()) != '\n' && count < ARR_SIZE) {
    input_sentence[count] = ch;
    count++;

    if (ch == '.') {
      break;
    }
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift_amount);
  printf("Encrypted message: ");

  if (shift_amount < 1 || shift_amount > 25) {
    printf(
        "Shift amount entered is too small or too large, try agian! (1-25)\n");
    return 0;
  }

  for (i = 0; i < ARR_SIZE; i++) {

    if (!isalpha(input_sentence[i])) {
      printf("%c", input_sentence[i]);
      continue;
    }

    if (toupper(input_sentence[i]) != input_sentence[i]) {
      temp = (input_sentence[i] - 'a') + shift_amount;
      if (temp >= 26) {
        temp = temp % 26;
        encrypted_message[i] = alphabet[temp];
      }
      encrypted_message[i] = alphabet[temp];
    } else {
      temp = (input_sentence[i] - 'A') + shift_amount;
      if (temp >= 26) {
        temp = temp % 90;
        encrypted_message[i] = toupper(alphabet[temp]);
      }
      encrypted_message[i] = toupper(alphabet[temp]);
    }
    printf("%c", encrypted_message[i]);
  }
  printf("\n");

  return 0;
}
