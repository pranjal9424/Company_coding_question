#include<iostream>
using namespace std;
int main()
{
    int ans,n,m=-100,sm=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(m<arr[i])
        {
            sm=m;
            m=arr[i];
        }
    }
    ans=sm+m;
    cout<<ans;
}

/*
          input : 7
                  9 -3 8 -6 -7 8 10
          output : 19
          expl : 9+10=19 
*/