#include <stdio.h>

int main()
{
    int n, mod;

    printf("Enter a number: ");
    scanf("%i", &n);
    printf("Reversed number is: ");

    if (n < 0)
    {
        n = -n;
        printf("-");
    }
        do
        {
            mod = n % 10;
            printf("%i", mod);
            n /= 10;
        }
        while (n != 0);

    return 0;
}
