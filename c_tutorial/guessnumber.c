#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, r, o, input;

    srand((unsigned) time(NULL));

    printf("Guess a number: ");
    scanf("%i", &input);

    x = 1;
    while (x > 0)
    {
        r = rand();
        o = r % 10;
        printf("Computer guess: %i\n", o);
        x--;
}

        if (o == input)
            printf("Correct.");
        else
            printf("Incorrect.");

    return(0);
}
