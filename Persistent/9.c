#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum,temp;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<n; i++)
        {
            sum=0;
            temp=arr[i];
            while(temp)
            {
                sum+=temp%10;
                temp/=10;
            }
            printf("%d ",sum);
        }
}

