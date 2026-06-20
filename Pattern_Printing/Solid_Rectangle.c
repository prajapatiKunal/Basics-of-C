#include<stdio.h>
int main () {
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);

    for (int i = 1; i<=n ; i++) { // outer loop --> no. of rows

        for (int j = 1; j<=m ; j++) { // inner loop --> no. of columns OR no. of stars in each line
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}