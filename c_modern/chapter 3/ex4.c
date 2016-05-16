#include <stdio.h>

int main(void) {
    int pre, mid, post;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &pre, &mid, &post);
    printf("You entered: %d.%d.%d\n", pre, mid, post);

    return 0;
}
