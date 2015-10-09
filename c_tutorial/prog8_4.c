#include <stdio.h>

int main(void)
{
    int i, j;

    i = 365;
    j = 7;
    int next_multiple = i + j - i % j;
    printf("Value of next multiple is: %i\n", next_multiple);

    i = 12258;
    j = 23;
    int next_multiple_1 = i + j - i % j;
    printf("Value of next multiple is: %i\n", next_multiple_1);

    i = 996;
    j = 4;
    int next_multiple_2 = i + j - i % j;
    printf("Value of next multiple is: %i\n", next_multiple_2);

    return 0;
}
