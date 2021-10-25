//in cpp
#include<iostream>
#include<cstring>
using namespace std;
int isSumPossible(int n,int* arr,int m)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;i++)
            if((arr[i]+arr[j])==m)
            {
                return 1;
            }
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<isSumPossible(n,arr,m);
    return 0;
}
