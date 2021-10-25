#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,i,x,sum=0,temp;
    d=atoi(argv[1]);
    for(i=1;i<=d;i++){
    temp=atoi(argv[i+1]);
    sum=sum+temp*temp;
    }
    printf("%d",sum);
    return 0;
}

