#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int b,h;
    float area;
    b=atoi(argv[1]);
    h=atoi(argv[2]);
    area=(b*h)/2.0;
    printf("%.2f",area);
}

