#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int min, temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort( arr,  n);
   
    printf("array after sorting\n");
     for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
     }
        
    printf("\n");
}