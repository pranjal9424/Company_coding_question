#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int a,b,d,sum=0,p=1;
    d=atoi(argv[1]);
    while(d!=0){
    sum=sum+(d%10)*p;
    p*=2;
    d/=10;
    }
    printf("%d",sum);
    return 0;
}




