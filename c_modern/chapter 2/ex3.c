#include <stdio.h>

int main(void) {
    float net, gross;

    printf("Enter amount of money (net): ");
    scanf("%f", &net);
    gross = (net * 5) / 100 + net;
    printf("With tax added: $%.2f\n", gross);

    return 0;
}
