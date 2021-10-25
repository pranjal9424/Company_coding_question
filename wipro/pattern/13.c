#include<stdio.h>
int main()
{
    int r=7;
    for(int i=0;i<r;i++)
    {
        if(i<r/2)
            for(int j=0;j<=i;j++)
                printf("*");
        else
            for(int j=i;j<r;j++)
                printf("*");
        printf("\n");
    }
}
