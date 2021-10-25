#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,max;
    max=(a>b)?a:b;
    i=max;
    while(1){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            return 0;
        }
        i=i+max;
    }
    return 0;

}
