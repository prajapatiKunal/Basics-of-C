// WAP to print reverse of a given number
// eg 1234 -> 4321

#include <stdio.h>
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int reverse = 0 , ld = 0;
    while (n != 0) {
        ld = n % 10; // Get the last digit
        reverse = reverse * 10 + ld; // Build the reversed number
        n = n / 10; // Remove the last digit from n
    }
    printf("Reversed number is : %d", reverse); 
    return 0;
}