// WAP a program to print sum of digits of a given number 
// eg.1234 -> 1+2+3+4 = 10

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0, ld = 0;
    while (n!=0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n/10;
        
    }
    
    printf("The sum of digits is: %d ", sum);

    return 0;
}