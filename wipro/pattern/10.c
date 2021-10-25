#include<stdio.h>
int main()
{
    int r=5,c=4;
    for(int i=0;i<r;i++)
    {
        for(int j=r-1;j>i;j--)
            printf(" ");
        for(int j=0;j<=i*2;j++)
            if(i==0 || j==0 || i==r-1 || j==i*2)
            printf("*");
        else
            printf(" ");
        printf("\n");
    }
}


