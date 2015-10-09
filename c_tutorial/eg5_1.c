#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("  n   Sum from 1 to n\n");
    printf("----  ---------------\n");


    for (n = 1; n <= number; ++n){
        triangularNumber += n;

    printf("  %2i           %i\n", n,  triangularNumber);
    }

    return 0;
}
