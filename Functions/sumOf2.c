#include<stdio.h>

int add (int a, int b){
    return a + b;
}

int main(){
    int a , b;
    printf("enter 2 numbers:");
    scanf("%d %d", &a, &b);

    printf("sum = %d", add(a,b));
}