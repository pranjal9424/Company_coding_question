#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int i,n,fact=1;
    n=atoi(argv[1]);
    for(i=1;i<=n;i++)
       fact*=i;
    printf("%d",fact);
}
