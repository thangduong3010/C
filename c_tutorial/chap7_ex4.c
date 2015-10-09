#include <stdio.h>

int main(void)
{
    float a[10], ave = 0;
    int i;

    printf("Enter 10 elements of your array (seperated by space): \n");

    for(i = 0; i <= 9; ++i)
    {
        scanf("%f", &a[i]);
    }

    printf("\nHere's your array: \n");
    for(i = 0; i <= 9; ++i)
        printf("%f ", a[i]);

    for(i = 0; i <= 9; ++i)
        ave += a[i];

    printf("\nAverage of your array: %f\n", ave / 10);
    return 0;
}
