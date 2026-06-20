/* Ternary Operators -> exp1 ? exp2 : exp3;
                 condition ? True : False;
 eg, odd even numbers
*/

#include <stdio.h>
int main()
{
    long long int a;
    printf("Enter your number: ");
    scanf("%d", &a);

    // Condition ? True : False ;

    // condition ? if part : else part ;

    a % 2 == 0 ? printf("The number %d is an EVEN number!", a) : printf("The number %d is an ODD number!", a);

    // if (a%2 == 0)
    // {
    //    printf("The number %d is an EVEN number!", a); 
    // }

    // else
    // {
    //     printf("The number %d is an ODD number!", a);
    // }

    return 0;
}