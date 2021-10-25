#include<stdio.h>
int main()
{
    int r=4,k=1;
    for(int i=1;i<=r;i++)
    {
        for(int j=0;j<i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}


