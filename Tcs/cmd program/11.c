#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,i,x;
    d=atoi(argv[1]);
    for(i=0;(x=i*i)<=d;i++)
    if(x==d){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}

