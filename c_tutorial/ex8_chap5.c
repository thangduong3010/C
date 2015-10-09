#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter, input;

    printf("How many triangular do you want to calculate? ");
    scanf("%i", &input);

    for (counter = 1; counter <= input; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; ++n)
        {
            triangularNumber += n;

            printf("Triangular Number %i is: %i\n\n", number, triangularNumber);
}
}
    return(0);
}
