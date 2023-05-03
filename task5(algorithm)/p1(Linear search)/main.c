#include <stdio.h>

int main(){
    
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

    for (int i = 0 ; i < n ; i++){
        if (x == arr[i]){
            printf ("ele:%d ,is found after %d step",x,i+1);
            return 0;
        }
    }
       printf("the ele:%d ,not found");
       return 1;
}