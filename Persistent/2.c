#include<stdio.h>
int main()
{
    int n,s,e;
    scanf("%d%d%d",&n,&s,&e);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>s && arr[i]<e)
            printf("%d ",arr[i]);
        }
        return 0;
}

