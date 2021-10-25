#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,sum=0,p=1;
    d=atoi(argv[1]);
    while(d!=0){
    sum=sum+(d%2)*p;
    p*=10;
    d/=2;
    }
    printf("%d",sum);
    return 0;
}



