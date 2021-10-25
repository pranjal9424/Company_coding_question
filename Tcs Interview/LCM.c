#include<stdio.h>
int main()
{
    int i,lcm,a=30,b=12,max;
    max=b>a?b:a;
    i=max;
    while(1)
    {
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
        i+=max;
    }
    printf("%d",lcm);
}

