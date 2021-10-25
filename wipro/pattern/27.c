#include<stdio.h>
int main()
{
    int r=8,c=2;
    for(int i=1;i<=r;i++)
    {
        if(i<=r/2){
            for(int j=1;j<=i;j++)
                printf("%d",c);
                c++;
        }
        else
        {
            c--;
            for(int j=0;j<r-i+1;j++)
                printf("%d",c);
        }
        printf("\n");
    }

}
