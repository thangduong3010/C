#include <stdio.h>

int main(void) {
    int item, d, m, y;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%-d\t$%4.2f\t%-.2d/%-.2d/%-d", item, price, m, d, y);

    return 0;
}
