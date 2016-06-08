#include <stdio.h>
// holy shit, such a shame
int main(void) {
    int h, m;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    printf("Equivalent 12-hour time: ");

    switch(h) {
        case 1: case 13: printf("1:"); break;
        case 2: case 14: printf("2:"); break;
        case 3: case 15: printf("3:"); break;
        case 4: case 16: printf("4:"); break;
        case 5: case 17: printf("5:"); break;
        case 6: case 18: printf("6:"); break;
        case 7: case 19: printf("7:"); break;
        case 8: case 20: printf("8:"); break;
        case 9: case 21: printf("9:"); break;
        case 10: case 22: printf("10:"); break;
        case 11: case 23: printf("11:"); break;
        case 12: printf("12:"); break;
        case 0: case 24: printf("0:"); break;
    }
    printf("%.2d ", m);
    if(h > 11 && h < 24)
        printf("PM\n");
    else if((h >= 0 && h <= 12) || h == 24)
        printf("AM\n");

    return 0;
}
