/*given point (x,y), write code to find out if it
lies on X, Y axis or at origin*/

#include <stdio.h>
int main()
{
    double x, y;
    printf("enter the coordinates of the point (x,y) : ");
    scanf("%f %f", &x, &y);

    if (x==0){
         if (y==0)
         printf("The point lies on the origin");
         else
         printf("The point lies on the Y axis");
    }
    else{
        if (y!=0)
         printf("The point doesn't lies on any axis");
         else
         printf("The point lies on the X axis");
    }

    // if (x == 0 && y == 0)
    //     printf("origin");

    // else if (x == 0)
    //     printf("Y axis");

    // else
    //     printf("X axis");

    return 0;
}