#include <stdio.h>

int main()
{
    int input, right;

    printf("Enter a number: ");
    scanf("%i", &input);
    printf("Your reversed number is: ");

   /* while (input != 0)
    {
        right = input % 10;
        printf("%i", right);
        input = input / 10;
    }*/

    do
    {
    right = input % 10;
    printf("%i", right);
    input = input / 10;
}
    while (input != 0); // loop back to 'do' until FALSE

    printf("\n");
    return(0);
}
