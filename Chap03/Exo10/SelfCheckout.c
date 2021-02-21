#include <stdio.h>
#define TAX 0.055


int main(void){

    int item1, qty1, item2, qty2, item3, qty3;

    printf("Enter the price of item 1 : ");
    scanf("%d", &item1);
    printf("Enter the quantity of item 1: ");
    scanf("%d", &qty1);

    printf("Enter the price of item 2 : ");
    scanf("%d", &item2);
    printf("Enter the quantity of item 2: ");
    scanf("%d", &qty2);

    printf("Enter the price of item 3 : ");
    scanf("%d", &item3);
    printf("Enter the quantity of item 3: ");
    scanf("%d", &qty3);

    int subtotal = (item1 * qty1) + (item2 * qty2) + (item3 * qty3);

    printf("Subtotal: $%.2f\n",  (subtotal * 1.));
    printf("Tax: $%.2f\n", subtotal*TAX);
    printf("Subtotal: $%.2f\n", subtotal* (1+ TAX));


    return 0;
}