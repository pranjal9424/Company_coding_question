#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,sum=0,t,r;
    d=atoi(argv[1]);
    t=d;
    while(d!=0){
    r=d%10;
    sum=sum+r*r*r;
    d/=10;
    }
    if(t==sum)
    printf("YES");
    else
    printf("NO");
    return 0;
}






