#include<iostream>
using  namespace std;
int main()
{
    int n,s,e;
    cin>>n>>s>>e;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        if(arr[i]>=s && arr[i]<=e)
            cout<<arr[i]<<" ";
}
