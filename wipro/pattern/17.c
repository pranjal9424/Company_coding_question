#include<stdio.h>
int main()
{
    int r=5;
    for(int i=1;i<=r;i++)
    {
        for(int j=0;j<r;j++)
            printf("%d",i);
        printf("\n");
    }
}

