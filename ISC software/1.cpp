#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    int t;
    cin>>t;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]+arr[j] == t)
                cout<<i<<" "<<j<<endl;

}

/*

input : 5
                    1 3 5 6 7
                    8
           output : 0 4
                    1 2
*/
