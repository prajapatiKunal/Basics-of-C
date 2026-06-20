
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    float a = 100;
    for (int i = 1 ; i<=n ; i++) {
        printf("%.4f ", a);
        a = a * 0.5;
    }

    printf("\n\n");

    for (int i = 100 ; i >= 0 ; i = i - 3) {
        printf("%d ", i);
    }
    

    // for (int i = 1 ; i<= 2*n-1; i=i+2) {
    //     printf("%d ", i);
    // }

    // OR

    // int a = 1;
    // for (int i = 1 ; i<=n ; i++) {
    //     printf("%d ", a);
    //     a = a + 2;
    // }


    // printf("\n\n");

    //  for (int i = 3 ; i<= 3*n+1; i=i+3) {
    //     printf("%d ", i);
    // }

    return 0;
}