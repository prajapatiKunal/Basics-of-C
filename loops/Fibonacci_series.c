// print the 'nth' Fibonacci number
// 1, 1, 2, 3, 5, 8, 13....

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 1, b = 1, sum = 1;
    for (int i= 1; i<(n-1) ; i++){
        sum = a + b ;
        a = b;
        b = sum; 
    
    }

        if (n%10==1)  printf("The %dst Fibonacci term is : %d\n", n, sum);
        
        else if (n%10==2) printf("The %dnd Fibonacci term is : %d\n", n, sum);
        
        else if (n%10==3) printf("The %drd Fibonacci term is : %d\n", n, sum);
        
        else printf("The %dth Fibonacci term is : %d\n", n, sum);

return 0;
}