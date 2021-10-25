#include <stdio.h>
int main()
{
   int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(arr[i]==arr[j] && j!=i){
        printf("%d ",arr[i]);
        break;
      }

    }
  }
   return 0;
}
