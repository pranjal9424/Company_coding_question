#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int n;
    n=atoi(argv[1]);
    if(n%2==0)
    printf("Even");
    else
    printf("Odd");
}

