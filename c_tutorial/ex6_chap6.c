#include <stdio.h>

int main()
{
    int n, identify;

    printf("Enter a number: ");
    scanf("%i", &n);
    printf("Extracting...\n");

    if (n != 0)
    {
        while (n != 0)
        {
            identify = n % 10;
            switch(identify)
            {
                case 1:
                    printf("one ");
                    break;
                case 2:
                    printf("two ");
                    break;
                case 3:
                    printf("three ");
                    break;
                case 4:
                    printf("four ");
                    break;
                case 5:
                    printf("five ");
                    break;
                case 6:
                    printf("six ");
                    break;
                case 7:
                    printf("seven ");
                    break;
                case 8:
                    printf("eight ");
                    break;
                case 9:
                    printf("nine ");
                    break;
            }
                n /= 10;
        }
    }
    else
        printf("zero");

    printf("\n");
    return 0;
}
