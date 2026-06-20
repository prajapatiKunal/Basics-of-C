#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 0;

    for (int i = 2; i < n ; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("1 is nethier prime nor composite number\n ");

    else if (n<0) printf("error");

    else if (a == 0)
        printf("The given number is a Prime number.\n");

    else
        printf("The given number is Composite number.\n");

    return 0;
}