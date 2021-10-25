#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,sum=0,t,r,i;
    d=atoi(argv[1]);
    i=2;
    while(i*i<=d)
    {
        if(d%i==0){
            printf("%d ",i);
            d/=i;
        }
        else
            i=i+1;
    }
    printf("%d",d);
    return 0;
}
