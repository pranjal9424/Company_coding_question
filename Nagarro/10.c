#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int j,temp,k,i,arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        temp=arr[0];
        for(j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }

    for(i=0;i<n;i++)
        printf("%d",arr[i]);
}


/*
test case 1:
             Input : 4
                     {1,2,3,4,5}
                     1

            output : {2,3,4,5,1}
*/