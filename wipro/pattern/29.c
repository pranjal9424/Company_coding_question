#include<stdio.h>
int main()
{
    int r=10,c=1,c1,z;
    for(int i=0;i<r;i++)
    {
        if(i<r/2){
        for(int j=0;j<=i;j++)
            c++;
            z=c;
            c1=c;
        for(int j=0;j<=i;j++)
            printf("%d ",c1--);
        }
        else
        {
            for(int j=0;j<r-i;j++)
                printf("%d ",z--);
        }
        printf("\n");
    }
}
