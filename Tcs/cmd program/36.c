#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int n,i;
    n=atoi(argv[1]);
    for(i=1;i<=10;i++)
    printf("%d ",i*n);
    return 0;
}


