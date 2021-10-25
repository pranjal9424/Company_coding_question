#include <stdio.h>
int main()
{
   int n;
  scanf("%d",&n);
  int j,flag,i,arr[n];
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<n;i++){
    flag=1;
    for(j=0;j<n;j++){
       if(arr[i]==arr[j] && i!=j){
        flag=0;
         break;
       }
    }
    if(flag==1)
      printf("%d ",arr[i]);
  }

   return 0;
}
