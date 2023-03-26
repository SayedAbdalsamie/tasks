#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , s , e;
    int arr[n];

    printf("enter length of arr: ");
    scanf("%d\n",&n);

 for (int i=0;i<n;i++)
  {
    printf("enter ele %d: ",i+1);
    scanf("%d\n",&arr[i]);
  }

    printf("enter  ele you want to serech:");
    scanf("%d\n",&e);

 for (int i=0;i<n;i++)
  {
   if (arr[i]==e)
     {
        s=1;
     }

  }
   if (s==0)
     {
       printf("the ele not found");
     }
     else
     {
          printf("the ele you serech is found");
     }

    return 0;
}
