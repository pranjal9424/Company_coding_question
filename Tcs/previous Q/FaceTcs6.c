#include <stdio.h>
int main()
{
   int n,k;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  scanf("%d",&k);
  for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
      if(arr[i]+arr[j] == k){
        printf("Perfect couple: %d %d",arr[i],arr[j]);
        return 0;
      }
  printf("No perfect couple found!");
   return 0;
}
