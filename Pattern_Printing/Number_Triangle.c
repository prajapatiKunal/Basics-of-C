#include<stdio.h>
int main () {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i<=n ; i++) { // outer loop --> no. of rows

        for (int j = 1; j<=i ; j++) { // inner loop --> no. of columns OR no. of stars in each line
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}