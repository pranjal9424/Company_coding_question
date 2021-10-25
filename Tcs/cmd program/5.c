#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int d;
    float area;
    d=atoi(argv[1]);
    area=3.14*(d/2.0)*(d/2.0);
    printf("%.2f",area);
}


