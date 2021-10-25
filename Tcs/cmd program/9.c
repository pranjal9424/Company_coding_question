#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int d,i;
    d=atoi(argv[1]);
    for(i=2;i<=d/2;i++)
    if(d%i==0){
        printf("NO");
        return 0;
    }
    float k=0.001;
    while(k*k<=d)
        k+=0.001;
    k=k-0.001;
    printf("%.2f",k);
    return 0;
}
