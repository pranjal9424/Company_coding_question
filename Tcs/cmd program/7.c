#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int d,i;
    d=atoi(argv[1]);
    for(i=2;i<=d/2;i++)
    if(d%i==0){
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}




