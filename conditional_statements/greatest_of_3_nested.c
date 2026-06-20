#include <stdio.h>
int main()
{
    float x, y, z;

    printf("enter first number: ");
    scanf("%f", &x);

    printf("enter second number: ");
    scanf("%f", &y);

    printf("enter third number: ");
    scanf("%f", &z);

    if (x > y)
    {
        if (x > z)
            printf("The greatest number is: %f\n", x);
        else
            printf("The greatest number is: %f\n", z);
    }

    else if (y > x)
    {
        if (y > z)
            printf("The greatest number is: %f\n", y);
        else
            printf("The greatest number is: %f\n", z);
    }

    else
        printf("All three numbers are equal which is %.0f\n", z);

    return 0;
}