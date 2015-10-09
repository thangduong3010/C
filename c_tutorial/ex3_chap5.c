#include <stdio.h>

int main()
{
    int n, triNumber;

    printf(" ------------------------\n");
    printf("| n  | Triangular Number |\n");
    printf(" ------------------------\n");

    n = 5;
    while (n <= 50)
    {
        triNumber = n * (n + 1) / 2;
        printf("| %2i |        %4i       |\n", n, triNumber);
        n += 5;
    }
    printf(" ------------------------\n");

    return(0);
}
