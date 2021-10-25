#include<stdio.h>
int main()
{
    int r,c,z=1;
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        for(int j=r-1;j>i;j--)
               printf(" ");
        for(int j=0;j<=i;j++)
            printf("*");
        printf(" ");
        c=z;
        for(int j=0;j<=i;j++)
            printf("%d",c++);
        z++;
        printf("\n");
    }

    for(int i=1;i<=r;i++)
    {
        c=r;
        for(int j=1;j<i;j++)
            printf(" ");
        for(int j=i;j<=r;j++)
            printf("%d",c--);

        z = (i * 2) - 1;

        printf(" ");
        for(int j=i; j<=r; j++, z+=2)
        {
            printf("%d", z);
        }
        printf("\n");
    }
}
