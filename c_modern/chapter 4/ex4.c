#include <stdio.h>

int main(void) {
    int i;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    printf("In octal, your number is: %d%d%d%d%d\n", (i / 4096) % 8,(i / 512) % 8,(i / 64) % 8,(i / 8) % 8, i % 8);

    return 0;
}