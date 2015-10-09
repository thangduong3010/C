#include <stdio.h>

int main()
{
    int n, rem_4, rem_100, rem_400,
        i, counter;

    printf("How many years do you want to check? ");
    scanf("%i", &counter);

    for (i = 1; i <= counter; ++i)
    {
        printf("Enter a year: ");
        scanf("%i", &n);

        rem_4 = n % 4;
        rem_100 = n % 100;
        rem_400 = n % 400;

        if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
            printf("%i is a leap year.\n", n);
        else
            printf("%i is not a leap year.\n", n);
    }
    return(0);

}
