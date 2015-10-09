#include <stdio.h>

int main()
{
    int n, numberofGrades, grade,
        gradeTotal = 0,
        failureCount = 0;
    float average;

    printf("How many grades will you be entering? ");
    scanf("%i", &numberofGrades);

    for (n = 1; n <= numberofGrades; ++n)
    {
        printf("Enter grade #%i: ", n);
        scanf("%i", &grade);

        gradeTotal += grade;

        if (grade < 50)
            ++failureCount;
}
    average = (float) gradeTotal / numberofGrades;
    printf("\nGrade average = %.2f\n", average);
    printf("Number of failure = %i\n", failureCount);

    return(0);
}
