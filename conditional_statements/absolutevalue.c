#include<stdio.h>
int main() { 
  int x, y;
  printf("Enter a number : ");
  scanf("%d", &x);

  if (x<0) {
    y = x *(-1);
    printf("The Absolute Value of %d is : %d", x, y);
  }

  else
  {
    printf("The Absolute Value of %d is : %d", x, x);
  }
  
   return 0;
}