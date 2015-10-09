#include <stdio.h>

int main()
{
    int number;
    float result;
    char operator;

    result = 0;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%i %c", &number, &operator);

        switch (operator)
        {
            case 'S':
            case 's':
                result = (float) number;
                printf("\n= %.2f\n", result);
                break;
            case '+':
                result = (float) result + number;
                printf("\n= %.2f\n", result);
                break;
            case '-':
                result = (float) result - number;
                printf("\n= %.2f\n", result);
                break;
            case '*':
                result = (float) result * number;
                printf("\n= %.2f\n", result);
                break;
            case '/':
                if (number == 0)
                {
                    printf("Can not divide by 0\n");
                    break;
                }
                result = (float) result / number;
                printf("\n= %.2f\n", result);
                break;
            case 'E':
            case 'e':
                printf("\n= %.2f\n", result);
                break;
            default:
                printf("Unknown operator.\n");
        }
        if (operator == 'E'|| operator == 'e')
            break;
        continue;
    }
    printf("\nEnd of calculation.\n");

    return 0;

}
