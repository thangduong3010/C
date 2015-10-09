#include <stdio.h>

int main(void)
{
    int n, count;

    printf("How many stars do you want? ");
    scanf("%i", &count);
    printf("Here we have our image:\n");

    for (n = 1; n <= count; n++)
        printf("*");

    return 0;
}
