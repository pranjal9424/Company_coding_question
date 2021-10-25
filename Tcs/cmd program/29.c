#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int a,b,sum=0,i,c=0,flag,j;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    for(i=++a;i<=b;i++){
        flag=1;
        for(j=2;j<=i/2;j++)
        if(i%j==0){
            flag=0;
            break;
        }
        if(flag==1)
            sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}








