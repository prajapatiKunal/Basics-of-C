#include <stdio.h>
int maze(int cr, int cc, int er, int ec ){
    int right = 0;
    int down = 0;

    if (cr==er && cc==ec ) return 1;
    if(cr==er){ // can go only in right direction
        right += maze(cr, cc+1,er,ec);
    }
    else if (cc==ec){ //can go only downwards
        down += maze(cr+1,cc,er,ec);
    }
    else if(cr<er && cc<ec){
        right += maze(cr, cc+1,er,ec);
        down += maze(cr+1,cc,er,ec);
    }
    int totalWays = right + down;
    return totalWays;
}


int main()
{
    int a, b;
    printf("Enter rows and columns of the maze respectively : ");
    scanf("%d %d", &a, &b);
    
    printf("%d", maze(1,1,a,b) );
    return 0;
}