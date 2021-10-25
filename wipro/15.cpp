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

/*
            input : 6 30 50
                    29 38 12 48 39 55
            output : 38 48 39
            explain : 38 48 39 is range b/w(30-50)
*/