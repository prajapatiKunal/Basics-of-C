#include <stdio.h>
int maze(int n, int m ){
    int right = 0;
    int down = 0;

    if (n==1 && m==1) return 1;
    
    if(n==1){ // can go only in right direction not down
        right += maze(n,m-1);
    }
    else if (m==1){ //can go only downwards not right
        down += maze(n-1,m);
    }
    else if(n>1 && m>1){
        right += maze(n,m-1);
        down += maze(n-1,m);
    }
    int totalWays = right + down;
    return totalWays;
}


int main()
{
    int a, b;
    printf("Enter rows and columns of the maze respectively : ");
    scanf("%d %d", &a, &b);
    
    printf("%d", maze(a,b) );
    return 0;
}