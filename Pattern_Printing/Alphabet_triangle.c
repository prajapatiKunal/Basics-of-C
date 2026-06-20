#include<stdio.h>
int main () {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i<=n ; i++) { // outer loop --> no. of rows
        int a = 65;
        for (int j = 1; j<=i ; j++) { // inner loop --> no. of columns OR no. of stars in each line
            char ch = (char)a; // typecasting
            printf("%c ", ch );
            a++;
        }
        printf("\n");
    }
    return 0;
}