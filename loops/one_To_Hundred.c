#include <stdio.h>
int main()
{
    printf("\n\n");
    
    for (int i = 1; i<= 100; i=i+1) {
        printf("%d ", i);  // 1 to 100 numbers
    }

    printf("\n\n");

    for (int i = 1; i <= 100; i= i+1) {

       if (i%2==0) printf("%d ", i);  // even numbers
    }

    printf("\n\n");

    for (int i = 1; i <= 100; i= i+1) {

       if (i%2!=0) printf("%d ", i);  // odd numbers
    }


    return 0;
}