#include <stdio.h>

int main(void) {
    int n, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0 && n < 10)
        digit = 1;
    else if(n >= 10 && n < 100)
        digit = 2;
    else if(n >= 100 && n < 1000)
        digit = 3;

    if(n >= 1000)
        printf("The number %d has more than 3 digits.\n", n);
    else
        printf("The number %d has %d digit(s).\n", n, digit);

    return 0;
}
