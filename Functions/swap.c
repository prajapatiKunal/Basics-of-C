#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    // a = 5 , b = 3  
    a = a + b; // a = 5 + 3 = 8
    b = a - b; // b = 8 - 3 = 5 , b = 5
    a = a - b; // a = 8 - 5 = 3 , a = 3
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}