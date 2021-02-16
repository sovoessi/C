#include <stdio.h>
#define CONVERSION_FACTOR 0.09290304

int main(int argc, char * args[]){

    float room_length = 0.0f;
    float room_width = 0.0f;
    float room_area = 0.0f;

    printf("What is the length of the room in feet? ");
    scanf("%f", &room_length);

    printf("What is the width of the room in feet? ");
    scanf("%f", &room_width);

    room_area = room_length * room_width;

    printf("You entered dimensions of %.f feet by %.f feet.", room_length, room_width);
    printf("The area is \n");
    printf("%.f square feet\n", room_area);
    printf("%.3f square meters", room_area * CONVERSION_FACTOR);

    return 0;
}