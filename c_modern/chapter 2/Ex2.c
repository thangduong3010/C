#include <stdio.h>

#define PI 3.14f
#define FRACTION (4.0f / 3.0f)

int main(void) {
    float x, rad;

    printf("Enter radius: ");
    scanf("%f", &x);
    rad = FRACTION * PI * x * x * x;
    printf("Volume of the sphere is: %.3f\n", rad);

    return 0;
}
