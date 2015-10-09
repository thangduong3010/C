#include <stdio.h>

int main()
{
    int a, b;
    float div;

    printf("Enter 2 integers: ");
    scanf("%i %i", &a, &b);

    if (b != 0)
    {
        div = (float) a / b;
        printf("%i / %i = %.3f", a, b, div);
    }
    else
        printf("Can not divide by 0");

    return 0;
}
