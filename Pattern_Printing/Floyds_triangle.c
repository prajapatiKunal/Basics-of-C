#include<stdio.h>
int main () {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int a = 1; 
    for (int i = 1; i<=n ; i++) { //  no. of rows
        
        for (int j = 1; j<=i ; j++) { // no. of columns 
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}