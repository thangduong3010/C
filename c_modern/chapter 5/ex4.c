#include <stdio.h>

int main(void) {
    int speed;

    printf("Enter speed: ");
    scanf("%d", &speed);

    printf("Description: ");
    if(speed < 1)
        printf("Calm\n");
    else if(speed < 4)
        printf("Light Air\n");
    else if(speed < 28)
        printf("Breeze\n");
    else if(speed < 48)
        printf("Gale\n");
    else if(speed < 64)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}
