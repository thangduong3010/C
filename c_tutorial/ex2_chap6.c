#include <stdio.h>

int main()
{
    int a, b, mod;

    printf("Enter two integers: ");
    scanf("%i %i", &a, &b);

    mod = a % b;
    if (mod == 0)
        printf("%i is divisible by %i", a, b);
    else
        printf("%i is not divisible by %i", a, b);

    return 0;
}
