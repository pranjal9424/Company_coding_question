#include<stdio.h>

int main()
{
    int n,c=0,temp;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp<0)
        {
            c++;
        }
    }
    printf("%d",c);
}

