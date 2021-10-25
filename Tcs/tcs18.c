
#include <stdio.h>
void primefact(int n)
{
  while(n%2==0)
  {
    printf("2 ");
    n/=2;
  }
  for(int i=3;i<=n/2;i++)
  {
    while(n%i==0)
  {
    printf("%d ",i);
    n/=i;
  }
  }
  if(n>2)
  {
         printf("%d ",n);
  }
}
int main()
{
    int i;
    scanf("%d",&i);
    primefact(i);
    return 0;
}