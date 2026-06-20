#include <stdio.h>
int main () {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n ", a , b, a+b );

    printf("%d - %d = %d\n ", a , b, a-b );

    printf("%d * %d = %d\n ", a , b, a*b );

    if (b==0) printf("INVALID: Division by zero!");
    else printf("%d / %d = %d\n", a , b, a/b );


    return 0;
}