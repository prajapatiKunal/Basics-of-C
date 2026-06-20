/*Given three points (x1,y1), (x2,y2), (x3,y3). Write a program to check
  if all the three points fall on one straight line.*/

#include <stdio.h>
int main() {
    double x1,y1,x2,y2,x3,y3,m1,m2;

    printf("Enter the first point (x,y): ");
    scanf("%lf %lf", &x1, &y1);

     printf("Enter the second point (x,y): ");
    scanf("%lf %lf", &x2, &y2);

     printf("Enter the third point (x,y): ");
    scanf("%lf %lf", &x3, &y3);
     
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if (m1==m2)
        printf("All three points fall on one straight line.");
    else
        printf("All three points does not fall on one straight line.");
        
    return 0;
}