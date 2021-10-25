#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n],sort[n],j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            sort[j]=arr[i];
            j++;
        }
    }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0){
            sort[j]=arr[i];
            j++;
            }
        }
    for(int i=0;i<n;i++)
    {
        printf("%d ",sort[i]);
    }
}
