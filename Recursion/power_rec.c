#include <stdio.h>
int power(int a, int b){
    if (b==0) return 1;
    int recAns = a * power(a,b-1);
    return recAns;
}
int main (){
    int a, b;
    printf("Enter base and power respectively : ");
    scanf("%d %d", &a, &b);
    int p = power(a,b);
    printf("%d ^ %d = %d", a, b, p);
    return 0;
}