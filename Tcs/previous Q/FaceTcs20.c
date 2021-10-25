#include <stdio.h>
int gcd(int m,int n){
  int i=(m>n)?n:m;
  for(;i>=1;i--)
    if(m%i==0 && n%i==0)
      return i;
}
int lcm(int* arr,int n)
{
  int res=1;
  for(int i=0;i<n;i++)
    res=res*arr[i]/gcd(res,arr[i]);
  return res;
}
int main()
{
   int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  printf("%d",lcm(arr,n));
   return 0;
}
