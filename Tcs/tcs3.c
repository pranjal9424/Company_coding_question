#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);

    a=0;
    b=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            b+=6;
        }
        else
            a+=7;
    }
    if(n%2==0)
        printf("%d",b-6);
    else
        printf("%d",a-7);

    return 0;
}

