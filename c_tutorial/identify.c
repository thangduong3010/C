#include <stdio.h>

int main()
{
    char name[10], choice;
    int x, n, result, counter;


    printf("What's your name? ");
    scanf("%s", &name);
    printf("Hello, %s\n", name);
    printf("Make a choice: \n");
    printf("A - Do math\n");
    printf("B - Play game\n");
    printf("C - Something else\n");
    choice = getchar();

    switch(choice)
    {
        case 'A':
        case 'a':
            printf("Let's do some math!\n");
            printf("Here's your operation: '100 + 40 - 7 + 3 * x'\n");
            printf("Enter the value of x: ");
            scanf("%i", &x);

            printf("How many times do you want this calculation to go? ");
            scanf("%i", &counter);

            for (n = 1; n <= counter; n++){
                result = 100 + 40 - 7 + 3 * x;
                printf("100 + 40 - 7 + 3 * %i = %i\n", x, result);
            }
        break;

        case 'B':
            printf("You've chosen to play game!");
        break;

        case 'C':
            printf("Figuring things out...");
        break;

        default:
            printf("Invalid option!");
    }
    return 0;
}
