#include<stdio.h>
int main () { 
    int x=4 ,y = 0 ,z ;
    while (x>=0){
        x--;
        y++;
        if (x==y)
            continue;
        else 
            printf("\n%d %d", x,y);
    }
    // y = --x; // --x means : first decrement, then use it 
    // z = x--; // x-- mean  : first use it , then decrement
    // printf("\n%d %d %d", x,y,z);

    return 0;
}