
#include <stdio.h>
int main()
{
   int n,max=-100,k;
   scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&k);
    if(max<k)
      max=k;
  }
  printf("%d",max);
   return 0;
}
