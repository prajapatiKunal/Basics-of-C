#include <stdio.h>
int main (){

    int r,c;
    printf("Enter no. of students: "); // rows
    scanf("%d", &r);
    printf("Enter no. of Subjects: "); // Columns
    scanf("%d", &c);

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c ; j++ ){
            printf("Enter marks of student %d :", i+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\n");

     for(int i=0; i<r; i++){
        for(int j=0; j<c ; j++ )
           printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}