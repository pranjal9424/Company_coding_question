#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int b,h;
    float hy;
    b=atoi(argv[1]);
    h=atoi(argv[2]);
    hy=sqrt(b*b+h*h);
    printf("%.2f",hy);
}


