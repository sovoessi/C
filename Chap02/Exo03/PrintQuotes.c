#include <stdio.h>
#define SIZE 256

int main(int argc, char *argv[]){
    char quote[SIZE];
    char author[SIZE];

    printf("What is the quote? ");
    fgets(quote, SIZE, stdin);

    printf("Who said it? ");
    fgets(author, SIZE, stdin);

    printf("%s says, \"%s\"", author, quote);

    return 0;
}