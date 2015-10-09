#include <stdio.h>

int main()
{
    int n, exp;

    printf(" ----------\n");
    printf("|  n |  n2 |\n");
    printf(" ----------\n");
    n = 1;
    while (n <= 10)
    {
        exp = n * n;
        printf("| %2i | %3i |\n", n, exp);
        ++n;

    }
    printf(" ----------\n");

    return(0);
}
