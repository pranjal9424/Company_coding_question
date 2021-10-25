#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,sum=0,t;
    d=atoi(argv[1]);
    t=d;
    while(d!=0){
    sum=sum*10+d%10;
    d/=10;
    }
    if(t==sum)
    printf("YES");
    else
    printf("NO");
    return 0;
}





