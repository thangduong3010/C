#include <stdio.h>

int main(void) {
    int prefix, gid, pcode, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &gid, &pcode, &item, &check);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", gid);
    printf("Publisher code: %d\n", pcode);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check);

    return 0;
}
