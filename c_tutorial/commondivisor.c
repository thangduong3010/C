#include <stdio.h>

int main()
{
    int u, v, temp;

    printf("Enter u and v: ");
    scanf("%i%i", &u, &v);

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("Greatest common divisor is %i\n", u);
    return(0);
}
