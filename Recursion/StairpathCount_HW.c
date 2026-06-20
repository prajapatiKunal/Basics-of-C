#include <stdio.h>
int stair(int n){
    if(n<=2) return n;
    if(n==3) return n+1;
    return stair(n-1) + stair(n-2) + stair(n-3);
    
}
int main (){
    int n; 
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The number of steps to reach %d is %d", n, stair(n));
    return 0;
}