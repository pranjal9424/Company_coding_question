#include <stdio.h>
int gcd(int a,int b)
{
  int temp;
  while(b>0){
    temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
int main()
{
   int i,n,r;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   r=arr[0];
   for(i=1;i<n;i++)
       r=gcd(r,arr[i]);
    printf("%d",r);
  return 0;
}
