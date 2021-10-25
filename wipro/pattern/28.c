#include<stdio.h>
int main()
{
    int r=8,c=2,c1;
    for(int i=0;i<r;i++)
    {
        if(i<r/2){
                c1=c;
            for(int j=0;j<=i;j++)
                printf("%d",c++);
        }
        else
        {
            c=c1;
            for(int j=0;j<r-i;j++)
                printf("%d",c++);
            c1=c1-(r-i)+1;
        }
        printf("\n");
    }

}

