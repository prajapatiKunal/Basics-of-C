#include<stdio.h>
int main () {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

     
    // for (int i = 1; i<=n ; i++) { // outer loop --> no. of rows

    //     for (int j = 1; j<=n+1-i ; j++) { // inner loop --> no. of columns OR no. of stars in each line
    //         printf("* ");
    //     }
        
    //     printf("\n");
    // }


    // OR

    int a = n;
    for (int i = 1; i<=n ; i++) { // outer loop --> no. of rows

        for (int j = 1; j<=a ; j++) { // inner loop --> no. of columns OR no. of stars in each line
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}