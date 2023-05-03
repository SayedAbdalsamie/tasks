#include <stdio.h>

void selectionSort(int arr[], int n) {
    int min, temp;
    for (int i = 0 ; i < n-1 ; i++){
        min=i;
        for(int j = i+1 ; j<n ; j++){
            if (arr[j]<arr[min]){
              min=j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    printf("enter lenght of array:");
    scanf("%d",&n);
   
    int arr[n]; 
    for (int i = 0 ; i < n ; i++ ){
        printf("enter ele%d:",i+1);
        scanf("%d",&arr[i]);
    }

    selectionSort( arr,  n);
   
    printf("array after sorting\n");
     for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
     }
        
    printf("\n");
}