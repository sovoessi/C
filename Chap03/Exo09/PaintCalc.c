#include <stdio.h>
#include <math.h>
#define CONVERSION_RATE 350

int main(int argc, char *argv[]){

    float length = 0.0F;
    float width = 0.0F;
    double area = 0.0;
    double paint = 0;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    paint = ceil(area / CONVERSION_RATE);

    printf("You will need to purchase %.f gallons of\npaint to cover %.f square feet", paint, area);


    return 0;
}