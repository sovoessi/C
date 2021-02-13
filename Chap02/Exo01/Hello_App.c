#include <stdio.h>

int main(int args, char * argv[]){

    const int MAX = 80;
    char * input;

    puts("What is your name? ");
    fgets(input, MAX, stdin);

    printf("Hello, %s nice to meet you!", input);

    return 0;
}