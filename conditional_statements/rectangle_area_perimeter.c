#include<stdio.h>
int main() { 
  float l, b, a, p, x, y;

  printf("Enter the length of rectangle : ");
  scanf("%f", &l);

  printf("Enter the breadth of rectangle : ");
  scanf("%f", &b);

  a = l * b;
  printf("\nThe area of the rectangle is: %f\n", a);

  p = 2 * (l+b);
  printf("The perimeter of the rectangle is: %f\n", p);

  if (a > p)
  {
    printf("The area is greater than perimeter\n");
  }
  
  else if (a==p) {
    printf("The area is equal to the perimeter\n");
  }

  else
  {
    printf("The area is less than perimeter\n");
  }
  
   return 0;
}
