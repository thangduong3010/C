#include <stdio.h>

int main(void) {
    int i = 40;
    float j = 839.21;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\a\a", j , j, j);

    return 0;
}
