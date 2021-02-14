#include <stdio.h>
#include <time.h>

int getActualYear();

int main(int argc, char *argv[]){

    int currentAge = 0;
    int retireAge = 0;

    int diffAge = 0;

    printf("What is your current age? ");
    scanf("%d", &currentAge);

    printf("At what age would you like to retire? ");
    scanf("%d", &retireAge);

    diffAge = retireAge - currentAge;
    int actualYear = getActualYear();

    printf("You have %d years left until you can retire.\n", diffAge);
    printf("It's %d, so you can retire in %d.", actualYear ,actualYear+diffAge);


    return 0;
}

int getActualYear(){
    time_t t = time(NULL);
    struct tm * current_time = localtime(&t);
    return 1900 + current_time->tm_year;
}