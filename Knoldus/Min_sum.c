#include<stdio.h>
int main()
{
    int i,n,max=0,min=100,sum=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
        if(x>max)
            max=x;
        if(x<min)
            min=x;
    }
    printf("min=%d\nmax=%d",sum-max,sum-min);
}
