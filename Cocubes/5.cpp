#include<iostream>
using namespace std;
int ProductSmallestPair(int sum, int* arr, int n){
    if(n==0 && n<2)
        return -1;

    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[i];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    if((arr[0]+arr[1])<=sum)
        return (arr[0]*arr[1]);
    else
        return 0;

}
int main()
{
    int n,sum;
    cin>>n>>sum;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<ProductSmallestPair(sum,arr,n);
}


