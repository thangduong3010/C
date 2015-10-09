#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%i", &n);

    if (n < 0)
        n = -n;

    printf("Absolute number is: %i", n);

    return(0);
}
