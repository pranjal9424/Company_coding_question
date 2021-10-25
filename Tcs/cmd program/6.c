#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int d;
    float area;
    d=atoi(argv[1]);
    if((d%400==0) || (d%100 && d%4==0))
    printf("YES");
    else
    printf("NO");
}



