
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    
    double headSizes[] = {20.75, 21.125, 21.5, 21.875, 22.25, 22.625,
                          23, 23.375, 23.75, 24.125, 24.5, 24.875};
    double hatSizes[]  = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125,
                          7.25, 7.375, 7.5, 7.625, 7.75, 7.875};
    const int count = 12;

    double headCircumference;
    bool found = false;

    printf("Enter the circumference of your head in inches: ");
    scanf("%lf", &headCircumference);

    for (int i = 0; i < count - 1; ++i)
    {
        
        if (headCircumference >= headSizes[i] && headCircumference < headSizes[i + 1])
        {
            printf("Your hat size is approximately %.3f (U.S./U.K. size).\n", hatSizes[i]);
            found = true;
            break;
        }
    }

    if (!found)
    {
        if (headCircumference < headSizes[0])
            printf("Your head is too small! Try a child's size.\n");
        else if (headCircumference > headSizes[count - 1])
            printf("Your head is too large! A custom hat may be required.\n");
        else
            printf("Unable to determine your hat size — measurement unclear.\n");
    }

    return 0;
}
