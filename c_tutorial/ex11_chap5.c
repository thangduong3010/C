#include <stdio.h>

int main()
{
    int input, right, sum;

    printf("Enter any number: ");
    scanf("%i", &input);
    printf("Your reversed number is: ");

    sum = 0;
    while (input != 0)
    {
        right = input % 10;
        printf("%i", right);
        sum += right;
        input = input / 10;
}
    printf("\nSum of digits of your number is: %i\n", sum);
    return(0);
}
