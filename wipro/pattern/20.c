#include<stdio.h>
int main()
{
    int r=4,k=0;
    for(int i=r;i>0;i--)
        k+=i;
    for(int i=r;i>0;i--)
    {
        for(int j=0;j<i;j++){
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
}

