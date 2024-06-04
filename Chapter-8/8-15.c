// WORK IN PROGRESS

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

  for (i = 0; i < ARR_SIZE; i++) {

    if (input_sentence[i] == '\0') {
      continue;
    }

    printf("%c\n", input_sentence[i]);
    temp = (input_sentence[i] - 'a') + shift_amount;
    if (temp > 26) {
      temp = temp % 26;
      encrypted_message[i] = alphabet[temp];
    }
    encrypted_message[i] = alphabet[temp];
    printf("%c", encrypted_message[i]);
  }
  printf("\n");

  return 0;
}
