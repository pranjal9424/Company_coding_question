#include<stdio.h>
int main()
{
    int m=0,n=1,c=0,num;
    scanf("%d",&num);

    printf("%d ",m);
    for(int i=0;i<num-1;i++)
    {
        printf("%d ",c);
        c=m+n;
        m=n;
        n=c;
    }
}
