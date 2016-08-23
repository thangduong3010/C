#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20,...,300 */

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%3c\t%6c\n", 'F', 'C');
    while (fahr <= upper) {
        celsius = 5.0 * (fahr - 32.0) / 9.0; // using 5/9 * (fahr - 32) would result in 0 because of truncation
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("For version\n");
    printf("%3c\t%6c\n", 'F', 'C');
    for (fahr = upper; fahr >= lower; fahr -= 20){
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}
