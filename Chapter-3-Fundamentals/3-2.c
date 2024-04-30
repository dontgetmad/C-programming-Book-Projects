/*
  * Write a program that formats product information entered by the user. A session with the program should look like this:
  * Enter item number: 583
  * Enter unit price: 13.5
  * Enter purchase date (mm/dd/yyyy): 10/24/2010
  * The item number and date should be left justified; the unit price should be right justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

/*
 * Name: 3.2.c
 * Purpose: learning C
 * Author: dontgetmad
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int item_num, year, month, day;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  printf(
      "Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n%d\t$%7.2f\t%02d/%02d/%04d\n",
      item_num, unit_price, day, month, year);
}
