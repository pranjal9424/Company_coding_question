#include<stdio.h>
int main()
{
    int r,c,k,x,count=0;
    scanf("%d%d%d",&r,&c,&k);
    x=r*c;
    int arr[x];
    for(int i=0;i<x;i++)
    {
               scanf("%d",&arr[x]);
    }

    for(int i=0;i<x-1;i++)
    for(int j=i;j<x;j++){
               if((arr[i]+arr[j])%k==0)
                count++;
    }
    printf("%d",count);
}
