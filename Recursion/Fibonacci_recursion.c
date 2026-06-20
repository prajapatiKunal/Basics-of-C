#include <stdio.h>
int fibo(int n){
    if(n<=0) return 0;
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2); // multiple calls
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d fibonacci  term = %d", n, fibo(n));
    return 0;
}