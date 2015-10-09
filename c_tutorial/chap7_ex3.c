#include <stdio.h>


int main(void)
{
    int ratingCounter[11], i, response;

    for(i = 1; i <= 10; ++i)
        ratingCounter[i] = 0;

    printf("Enter your response: \n");

    for(i = 1; ; ++i)
    {
        scanf("%i", &response);

        if((response < 1|| response > 10) && response != 999)
            printf("Bad response: %i\n", response);
        else if(response == 999)
            break;
        else
            ++ratingCounter[response];
    }

    printf("\n\nRating  Number of Responses\n");
    printf("=======   ===================\n");

    for(i = 1; i <= 10; ++i)
        printf("%4i%14i\n", i, ratingCounter[i]);

    return 0;
}
