/*
 * Name: deal.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {

  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards, rank, suit;

  const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                            '9', 't', 'j', 'q', 'k', 'a'};
  const char suit_code[] = {'c', 'd', 'h', 's'};

/*
   * the time function is a function that returns the current calendar time
   * when given NULL, it returns the current time in seconds since the epoch
   * midnight Jan 1st 1970. This ensures that every number generator is
   * different
   *
   * srand() is used to seed rand() and requires a seed to generator a number
   * to ensure that each psuedo number generated is different, the output of
   * time is given this is a common way to generator random numbers in C.
   *
   * Random generators in C and C++ are deterministic, meaning if given the same
   * input it will generate the same output. The input is called a seed. So
   * giving it a different seed ensures a different psuedo number, it's psuedo
   * because its not truly random.
   * Since the time changes, it ensures every run of the program generates a
   * random number.
   *
   * Remember that srand() is used to determine the starting point of the
   * pseudo-random number sequence that rand() will produce. If you use the same
   * seed, rand() will produce the same number.
*/

  srand((unsigned)time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand: ");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS; /* picks a random suit */
    rank = rand() % NUM_RANKS; /* picks a random rank */
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %c%c", rank_code[rank], suit_code[suit]);
    }
  }

  printf("\n");

  return 0;
}
