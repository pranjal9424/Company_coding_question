#include<stdio.h>
int prime(int n)
{
    for(int j=2;j<n;j++)
        if(n%j==0)
          return 0;
    return 1;
}
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
        if(prime(arr[i])){
            if(max<arr[i])
               max=arr[i];
        }
        printf("%d",max);
    return 0;
}

/*
              Input : 6
                      {2,3,24,6,1,2}
              output : 3
*/