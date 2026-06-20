#include <stdio.h>
int main () {
    
    for (int i = 1; i <= 100; i++)
    {
        // if (i%2==0){ // for odd numbers
        // continue;
        // }
        // printf("%d ", i);

        if (i%2!= 0){ // for even numbers
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}