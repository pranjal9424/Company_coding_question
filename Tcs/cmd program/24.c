#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int a,b,d,sum=0,p=1;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    d=a+b;
    while(d!=0){
    sum=sum+(d%2)*p;
    p*=10;
    d/=2;
    }
    printf("%d",sum);
    return 0;
}




