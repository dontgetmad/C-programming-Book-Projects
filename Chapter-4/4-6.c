/*
European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North America. 
Each EAN ends with a check digit, just as a UPC does. The technique for calculating the check digit is also similar:
Add the second, fourth, sixth, eighth, tenth, and twelfth digits. Add the first, third, fifth, seventh, ninth, and eleventh digits. Multiply the first sum by 3 and add it to the second sum.
Programming Projects 71
  
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10. Subtract the remainder from 9.
For example, consider Güllüoglu Turkish Delight Pistachio & Coconut, which has an EAN of 8691484260008. 
The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. 
Multiplying the first sum by 3 and adding the second yields 82. Subtract- ing 1 gives 81. 
The remainder upon dividing by 10 is 1. When the remainder is subtracted from 9, the result is 8, which matches the last digit of the original code. 
Your job is to mod- ify the upc.c program of Section 4.1 so that it calculates the check digit for an EAN. 
The user will enter the first 12 digits of the EAN as a single number:
Enter the first 12 digits of an EAN: 869148426000
Check digit: 8
*/

/*
 * Name: 4.6.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int n_1, n_2, n_3, n_4, n_5, n_6, n_7, n_8, n_9, n_10, n_11, n_12;
  int odd_group = 0, even_group = 0;
  int check_digit = 0;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n_1, &n_2, &n_3, &n_4, &n_5,
        &n_6, &n_7, &n_8, &n_9, &n_10, &n_11, &n_12);

  even_group = ((n_2 + n_4 + n_6 + n_8 + n_10 + n_12) * 3);
  odd_group = ((n_1 + n_3 + n_5 + n_7 + n_9 + n_11) + even_group) - 1;

  check_digit = 9 - (odd_group % 10);

  printf("Check digit: %d\n", check_digit);

  return 0;
}
