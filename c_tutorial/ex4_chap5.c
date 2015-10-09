#include <stdio.h>

int main()
{
    int factorial, n;

    printf(" --------------------\n");
    printf("| n | Factorial of n |\n");
    printf(" --------------------\n");

    factorial = 1;

    for (n = 1; n <= 10; ++n)
    {
        factorial = factorial * n;
        printf("|%2i | %14i |\n", n, factorial);
    }

    printf(" --------------------\n");

    return(0);
}
