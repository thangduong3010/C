#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message is: %s\n", msg);
    printf("Size of message: %i\n", sizeof(msg));

}

int main()
{
    char quote[] = "Cookies cookies";
    fortune_cookie(quote);
    printf("String is stored at: %p\n", quote);

    char s[] = "How big is it?";
    char *t = s;

    printf("Size of string: %i\n", sizeof(s));
    printf("Size of pointer: %i\n", sizeof(t));
    printf("Location of the string: %p\n", s);
    printf("Location of the string: %p\n", t);
    printf("Content at that location: %s\n", t);

    int dose[] = {1, 2, 3, 1000};
    printf("Dose is: %i\n", 3[dose]);

    char name[40];
    printf("Enter a string: ");
    scanf("%39s", name);
    printf(name);

    int age;
    printf("\nEnter a number: ");
    scanf("%i", &age);
    printf("%i", age);

    return 0;
}
