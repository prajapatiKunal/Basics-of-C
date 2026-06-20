#include<stdio.h>
int main () {
    int x;
    printf("enter a number: ");
    scanf("%d", &x);

    if (x>99 && x<1000) {
        printf("the number %d is a three digit number.\n", x);
    }
    else {
    printf("the number %d is not a three digit number.\n", x);
    }

    return 0;
}