#include <stdio.h>

int main()
{
    char input, name[20];

    printf("Please enter your grade: ");
    scanf("%c", &input);

    switch(input)
    {
        case 'A':
        case 'a':
            printf("Excellent.");
            break;
        case 'B':
        case 'b':
            printf("Good.");
            break;
        case 'C':
        case 'c':
            printf("Average good.");
            break;
        case 'D':
        case 'd':
            printf("Average.");
            break;
        default:
            printf("Failed.");
    }


    return 0;
}
