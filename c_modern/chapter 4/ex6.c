#include <stdio.h>

int main(void) {
    int input, first, second, third, fourth, fifth, sixth, seventh,
        eighth, ninth, tenth, eleventh, twelve, sum1, sum2, total;
    long long input2;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%d", &input);
    printf("Enter the next 12 digits of an EAN: ");
    scanf("%lld", &input2);
    printf("%lld\n", input2 / 10);
    twelve = input % 10;
    eleventh = (input / 10) % 10;
    tenth = (input / 100) % 10;
    ninth = (input / 1000) % 10;
    eighth = (input / 10000) % 10;
    seventh = (input / 100000) % 10;
    sixth = (input / 1000000) % 10;
    fifth = (input / 10000000) % 10;
    fourth = (input / 100000000) % 10;
    third = (input / 1000000000) % 10;
    second = (input / 10000000000) % 10;
    first = input / 1000000000000;

    sum2 = first + third + fifth + seventh + ninth + eleventh;
    sum1 = second + fourth + sixth + eighth + tenth + twelve;
    total = 3 * sum1 + sum2;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}
