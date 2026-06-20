// print the first 'n' Fibonacci number
// 1, 1, 2, 3, 5, 8, 13....

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 0, b = 1, sum;
    for (int i= 1; i<= n ; i++){
        
        if (i%10==1)  printf("The %dst Fibonacci term is : %d\n", i, a);
        
        else if (i%10==2) printf("The %dnd Fibonacci term is : %d\n", i, a);
        
        else if (i%10==3) printf("The %drd Fibonacci term is : %d\n", i, a);
        
        else printf("The %dth Fibonacci term is : %d\n", i, a);

        sum = a + b ;
        a = b;
        b = sum; 
    }


return 0;
}