#include <limits.h>
#include <stdio.h>
int minJumps(int arr[], int l, int h)
{
    if (h == l)
        return 0;
    if (arr[l] == 0)
        return INT_MAX;
    int min = INT_MAX;
    for (int i = l + 1; i <= h && i <= l + arr[l]; i++) {
        int jumps = minJumps(arr, i, h);
        if (jumps != INT_MAX && jumps + 1 < min)
            min = jumps + 1;
    }
    return min;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",minJumps(arr, 0, n - 1));
    return 0;
}

/*
              Input : 9
                      {1,3,5,8,9,2,6,7,6}
              output : 3
*/
