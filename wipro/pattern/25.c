#include<stdio.h>
int main()
{
    int r=7,c=3,c1;
    for(int i=0;i<r;i++)
    {
        if(i<=r/2)
        {
            c1=c;
            for(int j=0;j<=i;j++)
                printf("%d",c++);
        }
        else
        {
            c=c1-(r-i);
            c1=c;
            for(int j=i;j<r;j++)
              printf("%d",c++);
        }
        printf("\n");
    }

}

