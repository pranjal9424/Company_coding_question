#include<stdio.h>
int main()
{
    int r=4,c=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++){
                printf("%d",c++);
                if(j!=r-1)
                    printf("*");
        }
            printf("\n");
    }
}
