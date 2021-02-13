#include <stdio.h>
#include <string.h>


int main(){

    char input[80];

    printf("What is the input string? ");
    scanf("%s", input);
    int len = strlen(input);
    printf("%s has %d characters.", input, len);

    return 0;
}

void countChar(){



}