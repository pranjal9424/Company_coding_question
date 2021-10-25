#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int a,b,sum=0,i,c=0;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    for(i=++a;i<b;i++){
    if(i%2!=0){
    sum=sum+i;
    c++;
    }
    }
    printf("%.2f",(float)sum/c);
    return 0;
}






