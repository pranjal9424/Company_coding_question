#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,sum=0,a=0,b=1,c,i=1;
    d=atoi(argv[1]);
    while(i++ <= d){
    printf("%d ",b);
    c=b+a;
    a=b;
    b=c;
    }

    return 0;
}




