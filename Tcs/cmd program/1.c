#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
}
