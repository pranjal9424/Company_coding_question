#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int a,b,d,r;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    d=a*b;
    do
    {
        r=a%b;
        if(r==0)
            break;
        a=b;
        b=r;
    }while(1);
    printf("%d ",d/b);
    return 0;
}

