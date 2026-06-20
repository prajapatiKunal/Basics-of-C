// print the factorial of a given number 'n'

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int product = 1 ; // Initialize product to 1 for multiplication

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program if n is negative
    }

    for (int i = 1; i<= n ; i++) {
        product = product * i ; // Multiply product by i in each iteration
        printf("The factorial of %d is : %d\n", i, product); 
    }
return 0;
}