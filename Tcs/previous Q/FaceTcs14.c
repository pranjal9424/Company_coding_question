#include <stdio.h>
int main()
{
   int oct=0,rem,place=1,t,num;
  scanf("%d",&num);
  t=num;
  while(t>0){
    rem=t%8;
    oct=oct+rem*place;
    place*=10;
    t/=8;
  }
  printf("%d",oct);
   return 0;
}
