#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    
    int n;
    printf("enter lenght of array:");
    scanf("%d",&n);
   
    int arr[n]; 
    for (int i = 0 ; i < n ; i++ ){
        printf("enter ele%d:",i+1);
        scanf("%d",&arr[i]);
    }
     
    int x;
    printf("enter ele you want to serech:");
    scanf("%d",&x);
    

    int result = binarySearch(arr, 0, n , x);

    if (result == -1)
        printf("Element is not found\n");
    else
        printf("Element is number: %d\n", result+1);

    return 0;
}