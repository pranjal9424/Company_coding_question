#include <stdio.h>
#include <math.h>
int main()
{
   int long oct=0,rem,dec=0,temp,bin,n=0,place=1;
  scanf("%lld",&bin);
  temp=bin;
  while(temp!=0)
  {
    if(temp%10==1)
      dec+=pow(2,n);
    n++;
    temp/=10;
  }
  while(dec>0)
  {
    rem=dec%8;
    oct+=(rem*place);
    place*=10;
    dec/=8;
  }
   printf("%lld",oct);
   return 0;
}
