#include<stdio.h>
int main (){

    int a = 25;

    int* x = &a; // int* -> stores the address of int

    // VVimp --> *x = 7; // a is changed.

    int** y = &x; // int** -> DOUBLE POINTER => stores the adress of int* (another pointer)

    int*** z = &y; // int*** -> TRIPLE POINTER

    printf("%d\n", a);

    printf("%d\n", *x);

    printf("%d\n", **y);

    printf("%d\n", ***z);
    
    return 0;
}