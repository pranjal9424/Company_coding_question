#include<stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n,fac=1;
    scanf("%d",&n);
    printf("Recursion %d\n",fact(n));
    for(int i=1;i<=n;i++)
        fac*=i;
    printf("loop %d\n",fac);
}
