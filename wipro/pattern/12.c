#include<stdio.h>
int main()
{
    int r=5;
    for(int i=r-1;i>=0;i--)
    {
        for(int j=r-1;j>i;j--)
            printf(" ");
        for(int j=0;j<=i*2;j++)
            if(j==0 || j==i*2 || i==0 || i==r-1)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}
