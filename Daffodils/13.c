#include<stdio.h>
#include<limits.h>
#include <string.h>
int findElement(int arr[], int n)
{
    int leftMax[n];
    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++)
        leftMax[i] = (leftMax[i-1] > arr[i-1])?leftMax[i-1]:arr[i-1];
    int rightMin = INT_MAX;
    for (int i=n-1; i>=0; i--)
    {
        if (leftMax[i] < arr[i] && rightMin > arr[i])
             return i;
        rightMin = (rightMin > arr[i])?arr[i]:rightMin;
    }
    return -1;
}
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d", findElement(arr, n));
    return 0;
}
/*
              Input : 9
                      {5, 1, 4, 3, 6, 8, 10, 7, 9}
              Output : 4
*/
