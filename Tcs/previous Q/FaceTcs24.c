#include <stdio.h>
int main()
{
   int i,n,a,b,c;
  scanf("%d",&n);
  int arr[n];
  a=0;
  b=1;
  c=0;
  for(i=0;i<n;i++){
   arr[i]=c;
    a=b;
    b=c;
    c=a+b;
  }

  for(i=n-1;i>=0;i--)
   printf("%d ",arr[i]);
   return 0;
}
