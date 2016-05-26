#include <stdio.h>

int main(void) {
    int input, first, second, third, fourth, fifth, sixth, seventh,
        eighth, ninth, tenth, eleventh, sum1, sum2, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%d", &input);

    eleventh = input % 10;
    tenth = (input / 10) % 10;
    ninth = (input / 100) % 10;
    eighth = (input / 1000) % 10;
    seventh = (input / 10000) % 10;
    sixth = (input / 100000) % 10;
    fifth = (input / 1000000) % 10;
    fourth = (input / 10000000) % 10;
    third = (input / 100000000) % 10;
    second = (input / 1000000000) % 10;
    first = input / 10000000000;
    sum1 = first + third + fifth + seventh + ninth + eleventh;
    sum2 = second + fourth + sixth + eighth + tenth;
    total = 3 * sum1 + sum2;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}
