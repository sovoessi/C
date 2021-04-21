#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    float principal_amount = 0.0f;
    float interest_rate = 0.0f;
    unsigned short years_number = 0;
    unsigned short compounded_times = 0;
    float investment_amount = 0.0f;

    printf("What is the principal amount? ");
    scanf("%f", &principal_amount);

    printf("What is the rate? ");
    scanf("%f", &interest_rate);
    interest_rate /=100;

    printf("What is the number of years? ");
    scanf("%hu", &years_number);

    printf("What is the number of times the interest is compounded per year? ");
    scanf("%hu", &compounded_times);

    investment_amount = principal_amount * pow(
        1 + interest_rate/compounded_times, compounded_times * years_number);
    
    printf("$%.f invested at %.2f%% for %hu years \ncompounded %hu times per year is $%.2f.", 
        principal_amount, interest_rate*100,years_number, compounded_times, investment_amount
        );

    return 0;
}