#include<stdio.h>
int main()
{
    int l,n,sum=0,k;
    scanf("%d",&n);
    l=n;
    while(l!=0)
     {
         k=l%10;
         sum+=(k*k*k);
         l/=10;
     }
     if(sum==n)
        printf("Armstrong");
    else
        printf("non");
}
