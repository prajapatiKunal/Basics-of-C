#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0; i<n ; i++){
        printf("Enter %d Element: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = 0;
    printf("The Given Array is: [ ");
    for (int i = 0; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");

    for(int i = 0; i<n ; i++){
        if (arr[i]>arr[max]){
            max = i;
        }
    }
    printf("Largest number : %d", arr[max]);
    return 0;
}