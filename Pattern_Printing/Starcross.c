#include<stdio.h>
int main () {
    int n;
    printf("Enter the number of rows: ");   // 'n' must be always odd
    scanf("%d", &n);

    for (int i = 1; i<=n ; i++) { // no. of rows

        for (int j = 1; j<=n ; j++) { //  no. of columns 
            int a = n/2 + 1;
            if (i==j || i+j == n+1 ) printf("* ");
                else printf("  ");
        }
        printf("\n");
    }
    return 0;
}