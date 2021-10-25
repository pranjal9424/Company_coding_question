#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i,max=0;
    for(i=1;i<=10;i++)
    if(atoi(argv[i])>max)
       max=atoi(argv[i]);

       printf("%d",max);

    return 0;
}

