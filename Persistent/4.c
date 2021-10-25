#include<stdio.h>
#include<conio.h>
int main()
{
    int n,ind,temp;
    scanf("%d%d",&n,&ind);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    printf("%d",arr[ind-1]);
}
