#include<stdio.h>
int main()
{
    int r=4;
    int c=3;
    for(int i=1;i<=r;i++)
    {
        for(int j=0;j<i;j++)
            printf("%d",c);
        c++;
        printf("\n");
    }
}

