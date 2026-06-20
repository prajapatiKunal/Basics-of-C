#include <stdio.h>
void decreasing (int n){
    if (n==0) return ; // Base case
    printf("%d\n",n); // Code
    decreasing(n-1); //call
    return;
}
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    decreasing(n);
    return 0;
}