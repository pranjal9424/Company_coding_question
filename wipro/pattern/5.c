#include<stdio.h>
int main()
{
    int r=5,c=4;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            if(i==0 || j==0 || j==c-1 || i==r-1)
            printf("*");
        else
            printf(" ");
        printf("\n");
    }
}


