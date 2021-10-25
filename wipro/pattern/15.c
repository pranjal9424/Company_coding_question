#include<stdio.h>
int main()
{
    int r=7;
    for(int i=0;i<r;i++)
    {
        if(i<r/2)
        {
            for(int k=r/2;k>i;k--)
                printf(" ");
            for(int j=0;j<=i*2;j++)
                printf("*");
        }
        else
        {
            for(int k=r/2;k<i;k++)
                printf(" ");
            for(int j=0;j<((r-i)*2)-1;j++)
                printf("*");
        }
        printf("\n");
    }
}
