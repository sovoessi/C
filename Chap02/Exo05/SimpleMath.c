#include <stdio.h>


int main(int argc, char *argv[]){
    long int fnum = 0L, snum = 0L;
    
    printf("What is the first number? ");
    scanf("%d", &fnum);

    printf("What is the second number? ");
    scanf("%d", &snum);

    printf("%ld + %ld = %ld\n", fnum, snum, (fnum + snum));
    printf("%ld - %ld = %ld\n", fnum, snum, (fnum - snum));
    printf("%ld * %ld = %ld\n", fnum, snum, (fnum * snum));
    printf("%ld / %ld = %ld\n", fnum, snum, (fnum / snum));
    printf("%ld / %ld = %f\n", fnum, snum, ((float)fnum / snum));

    return 0;
}