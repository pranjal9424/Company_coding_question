#include<stdio.h>
int main()
{
    int hcf,a=30,b=12,min;
    min=a>b?b:a;
    for(int i=1;i<=min;i++)
        if(a%i==0 && b%i==0)
            hcf=i;
    printf("%d",hcf);
}
