#include <stdio.h>


int main(int argc, char *argv[]){
    float amount_from = 0.0f;
    float exchange_rate = 0.0f;
    float amount_to = 0.0f;
    
    printf("How many euros are you exchanging? ");
    scanf("%f", &amount_from);

    printf("What is the exchange rate? ");
    scanf("%f", &exchange_rate);

    amount_to = amount_from * exchange_rate / 100;

    printf(
    "%.f euros at an exchange rate of %.2f is %.2f U.S.dollars.",
    amount_from, exchange_rate, amount_to);

    return 0;
}