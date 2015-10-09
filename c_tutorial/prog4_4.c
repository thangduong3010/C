#include <stdio.h>

int main(void)
{
    float fah = 27,
        cel;

    cel = (fah - 32) / 1.8;
    printf("%.2f Fahrenheit is %.2f Celsius", fah, cel);

    return 0;

}
