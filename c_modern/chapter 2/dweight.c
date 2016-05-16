#include <stdio.h>

int main(void) {
    int height, width, length;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", height * length * width);
    printf("Dimensional weight (pounds): %d\n", ((height * length * width) + 165) / 166);

    return 0;
}
