#include <stdio.h>

int main(void) {
    float trade;

    printf("Enter the value of trade: ");
    scanf("%f", &trade);

    if (trade < 2500.00f)
        printf("Commission: $%.2f\n", 30 + 0.017 * trade);
    else if (trade >= 2500.00f && trade < 6250.00f)
        printf("Commission: $%.2f\n", 56 + 0.0066 * trade);
    else if (trade >= 6250.00f && trade < 20000.00f)
        printf("Commission: $%.2f\n", 76 + 0.0034 * trade);
    else if (trade >= 20000.00f && trade < 50000.00f)
        printf("Commission: $%.2f\n", (100 + 0.0022 * trade));
    else if (trade >= 50000.00f && trade < 500000.00f)
        printf("Commission: $%.2f\n", 155 + 0.0011 * trade);
    else
        printf("Commission: $%.2f\n", 255 + 0.0009 * trade);

    return 0;
}
