// WAP to print the sum of given number and its reverse
// eg 1234 -> 1234 + 4321 = 5555

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   

    int sum, original = n, ld = 0, reverse = 0;
    while (n!=0)
    {
        ld = n % 10;
        reverse = reverse * 10 + ld;  
        n = n/10;    
    }
    sum = original + reverse;
    printf("%d + %d = %d\n ",original, reverse, sum);
    

    return 0;
}