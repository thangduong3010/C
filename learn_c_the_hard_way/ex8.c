#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    // these two are identical
    char name[] = "Zed";
    char full_name[] = {
            'Z', 'e', 'd',
            ' ', 'A', '.', ' ',
            'S', 'h', 'a', 'w', '\0'
    };
    // find how big things are in bytes
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d.\n", areas[0], areas[1]);


    printf("\nThe size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld\n",
    sizeof(name) / sizeof(char));
    printf("%c", name[1]);

    printf("\n\nThe size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    printf("%c", full_name[1]);

    return 0;
}
