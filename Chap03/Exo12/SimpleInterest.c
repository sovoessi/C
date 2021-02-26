#include <stdio.h>

int main(){

    int numOfYears;
    float principal, rateOfInterest, investment;

    printf("Enter the principal: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rateOfInterest);

    printf("Enter the number of years: ");
    scanf("%d", &numOfYears);

    investment = principal * (1 + rateOfInterest/100 *numOfYears);

    printf(
        "After %d years at %.2f%%, the investment will be worth $%.2f.", 
        numOfYears, rateOfInterest,investment
        );

    return 0;
}