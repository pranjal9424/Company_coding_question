#include<stdio.h>
int main()
{
    int n,max=0,min=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[n]);

    for(int i=0;i<n-1;i++)
	{
        for(int j=i+1;j<n;j++)
		{
            if(arr[i]>arr[j])
                max++;
            else
                min++;
		}
	}
    printf("%d",max-min);
}
