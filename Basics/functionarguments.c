#include <stdio.h>
int main()
{

    int k = 35;
    printf("\n%d %d %d", k>40, k=50, k==35);      
    
    /*  function arguments order --> here it is right-to-left (3,2,1) */


    printf("\n%d %d %d", k!=35, k=20, k<30);

    int x = 3, y, z;
    y=x=10;
    z=x<10;

    printf("\nx=%d y=%d z=%d", x,y,z);

    return 0;
}