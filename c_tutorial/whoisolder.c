#include <stdio.h>

int main (void)
{
    int user_age,
        com_age = 30;
    char name[20];

    printf("Hello! What's your name? ");
    scanf("%s", &name);
    printf("Nice to meet you %s\n", name);
    printf("How old are you, %s? \n", name);
    scanf("%i", &user_age);

    if (user_age > com_age)
        printf("You are older than me, %s", name);
    else if (user_age < com_age)
        printf("Oh. I'm older than you, %s", name);
    else
        printf("Ah. We are same age, %s", name);

    return 0;
}
