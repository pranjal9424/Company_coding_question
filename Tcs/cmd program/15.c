#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,sum=0,t;
    d=atoi(argv[1]);
    if(d%10 == d/100)
    printf("YES");
    else
    printf("NO");
    return 0;
}




