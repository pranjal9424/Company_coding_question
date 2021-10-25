#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    float n;
    n=atoi(argv[1]);
    printf("%.2f",((n-32)*5.0)/9);
    return 0;
}
