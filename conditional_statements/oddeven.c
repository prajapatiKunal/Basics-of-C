#include<stdio.h>
int main() {
    long long int  a;
    printf("Enter your number: ");
    scanf("%lld",&a );

    if (a==0) printf("%lld is neither EVEN nor ODD.", a);
   
   else if (a%2 == 0)  printf("The number %lld is an EVEN number!", a); 

    else  printf("The number %lld is an ODD number!", a);
    
    return 0;
}