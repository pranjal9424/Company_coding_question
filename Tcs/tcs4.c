#include<stdio.h>
int main()
{
    int n,a=1,b=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
           a*=2;
        else
            b*=3;
    }
    if(n%2!=0)
        printf("%d ",a/2);
    else
        printf("%d",b/3);
}



