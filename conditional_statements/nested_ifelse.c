#include <stdio.h>
int main()
{

    int n;

    printf("enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("The number is divisible by 3 or 5 but not 15\n"); /* code */
        }
        else
        {
            printf("The number is divisible by 3 or 5 and 15 also\n");
        }
    }
    else
    {
        printf("The number is not divisible by any one of the given numbers .\n ");
    }
    return 0;
}