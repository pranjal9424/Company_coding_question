#include<stdio.h>
int main()
{
    int r=4;
    int c=r+2;
    for(int i=r-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
            printf("%d",c);
        c--;
        printf("\n");
    }
}
