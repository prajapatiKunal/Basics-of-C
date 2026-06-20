#include<stdio.h>
int main (){
    int r = 5 , c = 5;
    int arr[5][5];

    for (int i=0; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            arr[i][j] = 10;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}