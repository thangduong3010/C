#include <stdio.h>

int main(void) {
    int money, count20, count10, count5, count1, mid;

    printf("Enter a dollar amount: $");
    scanf("%d", &money);
    count20 = money / 20;
    mid = money - count20 * 20;
    count10 = mid / 10;
    mid = mid - count10 * 10;
    count5 = mid / 5;
    mid = mid - count5;
    count1 = mid / 1;

    printf("$20 bills: %d\n", count20);
    printf("$10 bills: %d\n", count10);
    printf(" $5 bills: %d\n", count5);
    printf(" $1 bills: %d\n", count1);

    return 0;
}
