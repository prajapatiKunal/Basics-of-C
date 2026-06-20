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
    if (x > y && x > z)
    {
        printf("The greatest number is: %f\n", x);
    }

    else if (y > x && y > z)
    {
        printf("The greatest number is: %f\n", y);
    }

    else if (z > x && z > y)
    {
        printf("The greatest number is: %f\n", z);
    }

    else if (z == x && z == y)
    {
        printf("All three numbers are equal.\n", z);
    }

    return 0;
}