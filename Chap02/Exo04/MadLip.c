#include <stdio.h>
#include <string.h>

#define SIZE 80

void remove_newline_ch(char *line);

int main(int argc, char *argv[]){
    char noun[SIZE];
    char verb[SIZE];
    char adjective[SIZE];
    char adverb[SIZE];

    printf("Enter a noun: ");
    fgets(noun, SIZE, stdin);
    remove_newline_ch(noun);

    printf("Enter a verb: ");
    fgets(verb, SIZE, stdin);
    remove_newline_ch(verb);

    printf("Enter an adjective: ");
    fgets(adjective, SIZE, stdin);
    remove_newline_ch(adjective);

    printf("Enter an adverb: ");
    fgets(adverb, SIZE, stdin);
    remove_newline_ch(adverb);

    printf(
        "Do you %s your %s %s %s? That's hilarious!", 
        verb, adjective, noun, adverb
        );

    return 0;
}

void remove_newline_ch(char *line)
{
    int new_line = strlen(line) -1;
    if (line[new_line] == '\n')
        line[new_line] = '\0';
}