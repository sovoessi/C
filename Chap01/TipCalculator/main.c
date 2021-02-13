#include <stdio.h>

float calculate_tip(float, float);
float calculate_total(float, float);

int main(int argc, char *argv[]){

    float billAmount, tipRate, tip, total;
    billAmount = tipRate = tip = total = 0.0f;

    printf("What is the bill amount? $");
    scanf("%f", &billAmount);

    printf("What is the tip rate? (Enter 10 for 10%) $");
    scanf("%f", &tipRate);

    tip = calculate_tip(billAmount, tipRate);
    total = calculate_total(billAmount, tip);

    printf("Tip: $%0.2f\n", tip);
    printf("Total: $%0.2f", total);


    return 0;
}

float calculate_tip(float billAmount, float tipRate){
    return billAmount * tipRate /100;    
}

float calculate_total(float billAmount, float tip){
    return billAmount + tip;
}